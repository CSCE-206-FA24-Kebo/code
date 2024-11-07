#include <stdio.h>

int main(void)
{
    FILE *fp;                      // Variable to represent open file

    // fopen(filename, mode)
    fp = fopen("games.txt", "r");  // Open file for reading

    int c = fgetc(fp);             // Read a single character
    printf("%c\n", c);             // Print char to stdout

    c = fgetc(fp);             // Read a single character
    printf("%c\n", c);             // Print char to stdout

    c = fgetc(fp);             // Read a single character
    printf("%c\n", c);             // Print char to stdout

    

    fclose(fp);                    // Close the file when done
}