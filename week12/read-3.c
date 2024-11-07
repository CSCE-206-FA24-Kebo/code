#include <stdio.h>

int main(void)
{
    FILE *fp;
    char s[33];  // Big enough for any line this program will encounter
    int linecount = 0;

    fp = fopen("games.txt", "r");

    // fgets reads on line a time
    while (fgets(s, sizeof s, fp) != NULL) 
        printf("%d: %s", ++linecount, s);

    fclose(fp);
}