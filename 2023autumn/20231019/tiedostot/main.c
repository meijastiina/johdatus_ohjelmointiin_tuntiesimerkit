#include <stdio.h>

int main()
{
    FILE * fp;

    fp = fopen ("c:/tmp/file.txt", "a+");
    int testNumber = 3;
    // Tarkista onko tiedoston avaaminen onnistunut
    if ( fp != NULL ) {
        int readNumber;
        fprintf(fp,"%d", testNumber);

        fclose(fp);
        fp = fopen ("c:/tmp/file.txt", "a+");
        fscanf(fp, "%d", &readNumber );
        printf("\nRead number : %d", readNumber);
        return 0;
    } else {
        perror("Error opening file ");
    }
}
