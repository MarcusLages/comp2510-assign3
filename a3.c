#include <stdio.h>
#include <stdlib.h>

#include "a3.h"
#include "test-patients.h"

int main(const int argc, char **argv) {
    if(argc < MIN_ARGS) {
        perror("Not enough arguments for the program");
        return EXIT_FAILURE;
    }

    char *input_file = argv[ARG_INPUT_FILE];
    char *output_file = argv[ARG_OUTPUT_FILE];

    // Logic of the assignment
    test_patients(input_file, output_file);

    return EXIT_SUCCESS;
}