#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BTYE;

int main(int argc, char *argv[])
{
    // Only one argument in the command line (argc = 2)
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open file for reading
    FILE *inputFile = fopen(argv[1], "r");

    // Check that the inputFile is valid
    if (inputFile == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Store each block of 512 bytes in an array using unsigned char
    // unsigned stores only positive values while signed, both positive and negative.
    unsigned char buffer[512];

    // Keep track of images generated
    int imageCount = 0;

    // File pointer to the recovered images
    FILE *outputFile = NULL;

    // Allocate memory for filename
    char *filename = malloc(8 * sizeof(char));

    // Read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, inputFile))
    {
        // Check JPEG bytes signature patterns
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Name the JPEG files. %03i for 3 digit name eg. 001, 002...
            sprintf(filename, "%03i.jpg", imageCount);

            // Open output file for writing
            outputFile = fopen(filename, "w");

            // Increment imageCount
            imageCount++;
        }
        // Check that the output file is valid and not NULL
        if (outputFile != NULL)
        {
            fwrite(buffer, sizeof(char), 512, outputFile);
        }
    }
    free(filename);
    fclose(outputFile);
    fclose(inputFile);

    return 0;
}