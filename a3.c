#include <stdio.h>
#include <stdlib.h>

#include "a3.h"
#include "test-patients.h"

/**
 * Entry point for the program.
 * Program used to read patient information from a file and output
 * it into a file.
 *
 * @param argc how many program arguments
 * @param argv argument arrays
 * @return exit code
 */
int main(const int argc, char **argv) {
    if(argc < MIN_ARGS) {
        perror("Not enough arguments for the program");
        return EXIT_FAILURE;
    }

    char *input_file = argv[ARG_INPUT_FILE];
    char *output_file = argv[ARG_OUTPUT_FILE];

    test_patients(input_file, output_file);

    return EXIT_SUCCESS;
}