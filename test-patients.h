#ifndef TEST_PATIENTS_H
#define TEST_PATIENTS_H

#include "patient-list.h"

#define MAX_LINE_SIZE   64

/**
 * Tests various operations on the patient list and writes the final list to a file.
 *
 * @param input_file_name Name of the input file containing patient data.
 * @param output_file_name Name of the output file where the final list will be written.
 */
void test_patients(char *input_file_name, char *output_file_name);

/**
 * Reads patients from a file and inserts them into the list.
 *
 * @param head head of the list.
 * @param input Name of the input file containing patient data.
 */
void read_patients_from_file(node **head, char *input);

/**
 * Tests inserting a patient at the end of the list.
 *
 * @param head head of the list.
 */
void test_insert_at_end(node **head);

/**
 * Tests inserting a patient at the beginning of the list.
 *
 * @param head head of the list.
 */
void test_insert_at_beginning(node **head);

/**
 * Tests inserting a patient at a specific position in the list.
 *
 * @param head head of the list.
 */
void test_insert(node **head);

/**
 * Tests deleting a specific patient from the list.
 *
 * @param head head of the list.
 */
void test_delete_patient(node **head);

/**
 * Tests deleting a patient at a specific position in the list.
 *
 * @param head head of the list.
 */
void test_delete_at_position(node **head);

/**
 * Writes the patient list to an output file.
 *
 * @param head head of the list.
 * @param output_file_name Name of the output file where the list will be written.
 */
void write_to_file(node *head, char *output_file_name);

#endif //TEST_PATIENTS_H
