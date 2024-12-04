#include <stdio.h>
#include <stdlib.h>

#include "a3.h"

#include <string.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

void insert_at_beginning(node **head, const Patient patient) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->patient = patient;

    if(*head == NULL) {
        new_node = NULL;
        *head = new_node;
        return;
    }

    new_node->next = *head;
    *head = new_node;
}

void insert_at_end(node **head, const Patient patient) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->patient = patient;
    new_node = NULL;

    if(*head == NULL) {
        *head = new_node;
        return;
    }

    node *cur_node = *head;

    while(cur_node->next != NULL) {
        cur_node = cur_node->next;
    }

    cur_node->next = new_node;
}

void insert(node **head, int index, const Patient patient) {
    if(index < FIRST_INDEX) {
        perror("Cannot insert at a position before the first position.");
        exit(EXIT_FAILURE);
    }

    node *new_node = (node *)malloc(sizeof(node));
    new_node->patient = patient;

    if(index == FIRST_INDEX) {
        insert_at_beginning(head, patient);
        return;
    }

    node *cur_node = *head;
    node *prev_node = *head;

    while(cur_node->next != NULL && index != FIRST_INDEX) {
        prev_node = cur_node;
        cur_node = cur_node->next;
        index--;
    }

    prev_node->next = cur_node;
    new_node->next = cur_node;
}

void delete_patient(node **head, const Patient target) {
    if(head == NULL || *head == NULL)
        return;

    node *cur_node = *head;
    node *prev_node = NULL;

    // TODO: finish this shit
    while(cur_node->next != NULL) {
        if(strcmp(cur_node->patient.name, target.name) != EQUALS) {

        }
        prev_node = cur_node;
        cur_node = cur_node->next;
    }

    prev_node->next = cur_node;
}

void delete_at_position(node **head, const int index) {

}

void display(node *head) {

}

void free_list(node *head) {

}

