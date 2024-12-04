#ifndef TEST_PATIENTS_H
#define TEST_PATIENTS_H

#include "patient-list.h"

#define MAX_LINE_SIZE   64

void test_patients(char *input_file_name,  char *output_file_name);
void read_patients_from_file(node **head, char *input);
void test_insert_at_end(node **head);
void test_insert_at_beginning(node **head);
void test_insert(node **head);
void test_delete_patient(node **head);
void test_delete_at_position(node **head);
void write_to_file(node *head, char *output_file_name);

#endif //TEST_PATIENTS_H
