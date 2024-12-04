#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test-patients.h"
#include "patient-list.h"

void test_patients(char *input_file_name,  char *output_file_name) {
    if(input_file_name == NULL || output_file_name == NULL) {
        printf("Error: Cannot read/write patients from NULL references.\n");
        exit(EXIT_FAILURE);
    }

    printf("Operations and the list of patients will be displayed here.\n"
           "The final list will be printed in %s\n",
            output_file_name);

    // Parsing all patients from the input file
    node *head = NULL;
    read_patients_from_file(&head, input_file_name);

    printf("Before tests:\n");
    display(head);

    test_insert_at_end(&head);
    test_insert_at_beginning(&head);
    test_insert(&head);
    test_delete_patient(&head);
    test_delete_at_position(&head);

    write_to_file(head, output_file_name);

    free_list(head);
    head = NULL;
}

void read_patients_from_file(node **head, char *input_file_name) {
    if(input_file_name == NULL) {
        perror("Invalid input file.");
        exit(EXIT_FAILURE);
    }

    FILE *input  = fopen(input_file_name, "r");
    char curr_line[MAX_LINE_SIZE];

    if(input == NULL) {
        printf("Error: input file not found.\n");
        exit(EXIT_FAILURE);
    }

    while(fgets(curr_line, MAX_LINE_SIZE, input)) {
        const Patient patient;
        strcpy(patient.name, curr_line);
        insert_at_end(head, patient);

    }

    fclose(input);
    input = NULL;
}

void test_insert_at_end(node **head) {
    Patient p;
    strcpy(p.name, "Anna Dao\n");

    printf("\nPatient inserted at the end of list:\n");
    insert_at_end(head, p);
    display(*head);
}

void test_insert_at_beginning(node **head) {
    Patient p;
    strcpy(p.name, "Raven Saballa\n");

    printf("\nPatient inserted at the beginning of list:\n");
    insert_at_beginning(head, p);
    display(*head);
}

void test_insert(node **head) {
    Patient p;
    strcpy(p.name, "Ben Nguyen\n");

    printf("\nPatient inserted at second position in the list:\n");
    insert(head, 1, p);
    display(*head);
}

void test_delete_patient(node **head) {
    Patient p;
    strcpy(p.name, "Marcus Lages\n");

    printf("\nPatient was deleted from the list:\n");
    delete_patient(head, p);
    display(*head);
}

void test_delete_at_position(node **head) {
    printf("\nPatient at third position was deleted from the list:\n");
    delete_at_position(head, 2);
    display(*head);
}

void write_to_file(node *head, char *output_file_name) {
    if(head == NULL) return;

    FILE *output  = fopen(output_file_name, "w");
    node *cur_node = head;

    while(cur_node != NULL) {
        fprintf(output,"%s", cur_node->patient.name);

        cur_node = cur_node->next;
    }

    fclose(output);
    output = NULL;
}