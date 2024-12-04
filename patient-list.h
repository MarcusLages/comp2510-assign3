#ifndef PATIENT_LIST_H
#define PATIENT_LIST_H

#define MAX_PATIENT_NAME_CHAR   50
#define FIRST_INDEX             0
#define EQUALS                  0

typedef struct Patient {
    char name[MAX_PATIENT_NAME_CHAR];
} Patient;

typedef struct node {
    Patient patient;
    struct node *next;
} node;

void insert_at_beginning(node **head, Patient patient);
void insert_at_end(node **head, Patient patient);
void insert(node **head, int index, Patient patient);

void delete_patient(node **head, Patient target);
void delete_at_position(node **head, int index);

void display(node *head);
void free_list(node *head);

#endif //PATIENT_LIST_H
