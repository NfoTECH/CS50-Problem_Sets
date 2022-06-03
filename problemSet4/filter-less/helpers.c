#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop through each row
    for (int i = 0; i < height; i++)
    {
        // Loop through eah column
        for (int j = 0; j < width; j++)
        {
            // Set Red, Green and Blue values of each pixel
            int red = image[i][j].rgbtRed;
            int green = image[i][j].rgbtGreen;
            int blue = image[i][j].rgbtBlue;

            // Round the average. Include math.h library to use round function
            int average = round((red + green + blue) / 3);

            // Set each color value to the average value
            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Convert R G B pixels to float
            float originalRed = image[i][j].rgbtRed;
            float originalGreen = image[i][j].rgbtGreen;
            float originalBlue = image[i][j].rgbtBlue;

            // Using sepia formula given, update the pixel values and round to remove decimal
            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            // Cap the value at 255 if it exceeds 255
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
             if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
             if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            // Final update of the pixels value
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j ++)        // Width/2 since looping is only on the 1st half being swapped with the 2nd half
        {
            RGBTRIPLE tmp = image[i][j];
            image[i][j] = image[i][width - (j + 1)]; // Where [width-(j+1)] is the other eqivalent value of j being swapped
            image[i][width - (j + 1)] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
