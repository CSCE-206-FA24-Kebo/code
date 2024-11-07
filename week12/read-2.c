#include <stdio.h>

int main(void)
{
    FILE *fp;
    int c;

    fp = fopen("games.txt", "r");
    printf("Hello World\n");

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
}