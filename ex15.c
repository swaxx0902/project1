#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char c;
    printf("Enter the source filename to read from: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename to append to: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open file %s for reading\n", sourceFilename);
        return 1;
    }
    destFile = fopen(destFilename, "a");
    if (destFile == NULL) {
        printf("Could not open file %s for appending\n", destFilename);
        fclose(sourceFile);
        return 1;

  }
    while ((c = fgetc(sourceFile)) != EOF) {
        fputc(c, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("Data has been successfully appended from %s to %s\n", sourceFilename, destFilename);
    return 0;
}
