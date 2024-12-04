#ifndef PATIENT_LIST_H
#define PATIENT_LIST_H

#define MAX_PATIENT_NAME_CHAR   50
#define FIRST_INDEX             0
#define EQUALS                  0

/**
 * Structure representing a patient and its name.
 */
typedef struct Patient {
    char name[MAX_PATIENT_NAME_CHAR];
} Patient;

/**
 * Structure representing a node in the patients' linked list.
 */
typedef struct node {
    Patient patient;
    struct node *next;
} node;

/**
 * Inserts a new patient at the beginning of the list.
 *
 * @param head head of the list.
 * @param patient The patient data to insert.
 */
void insert_at_beginning(node **head, Patient patient);

/**
 * Inserts a new patient at the end of the list.
 *
 * @param head head of the list.
 * @param patient The patient data to insert.
 */
void insert_at_end(node **head, Patient patient);

/**
 * Inserts a new patient at a specific position in the list.
 *
 * @param head head of the list.
 * @param index The position at which to insert the new patient.
 * @param patient The patient data to insert.
 */
void insert(node **head, int index, Patient patient);

/**
 * Deletes the first occurrence of a patient with matching data from the list.
 *
 * @param head head of the list.
 * @param target The patient data to be deleted.
 */
void delete_patient(node **head, Patient target);

/**
 * Deletes a patient at a specific position in the list.
 *
 * @param head head of the list.
 * @param index The position from which to delete the patient.
 */
void delete_at_position(node **head, int index);

/**
 * Displays the list of patients.
 *
 * @param head head of the list.
 */
void display(node *head);

/**
 * Frees all the nodes in the list, releasing allocated memory.
 *
 * @param head head of the list.
 */
void free_list(node *head);

#endif //PATIENT_LIST_H
