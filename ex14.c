#include <stdio.h>
int main() {
    FILE *file;
    char filename[100], c;
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    c = fgetc(file);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(file);
    }
    fclose(file);
    printf("\nFile read and displayed successfully.\n");
    return 0;
}
