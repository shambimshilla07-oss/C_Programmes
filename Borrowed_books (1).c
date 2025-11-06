/*JOSECK SHAMBI MSHILLA 
CT101/G/26417/25*/



#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); // Append mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);
    fclose(fp);

    printf("Book title successfully stored.\n");
    return 0;
}