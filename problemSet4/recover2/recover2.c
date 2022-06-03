#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BLOCK_SIZE 512
#define FILE_NAME_SIZE 8

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("USAGE: ./recover IMAGE\n");
        return 1;
    }
    // Open file
    FILE *inputFile = fopen(argv[1], "r");
    
    if (inputFile == NULL)
    {
        printf("File not found\n");
    }

    BYTE buffer[BLOCK_SIZE];
    int fileIndex = 0;
    FILE *outputFile;
    bool isFound = false;

    while (fread(buffer, BLOCK_SIZE, 1, inputFile))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (!isFound)
            {
                isFound = true;
            }
            else
            {
                fclose(outputFile);
            }

            char filename[FILE_NAME_SIZE];
            sprintf(filename, "%03i.jpg", fileIndex++);
            outputFile = fopen(filename, "w");

            if (outputFile == NULL)
            {
                return 1;
            }
            fwrite(buffer, BLOCK_SIZE, 1, outputFile);
        }
        else if (isFound)
        {
            fwrite(buffer, BLOCK_SIZE, 1, outputFile);
        }
    }
    fclose(outputFile);
    fclose(inputFile);

    return 0;
}