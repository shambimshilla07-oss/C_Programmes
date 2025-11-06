

#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    char regNumber[15];
    int totalMarks;
};

void create_sample_records(const char *filename) {
    FILE *fp = fopen(filename, "wb"); 
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    struct Student students[] = {
        {"John Muriuki", "S1001", 88},
        {"Mary Mwadime", "S1002", 82},
        {"Enzo Mwashighadi", "S1003", 91}
    };
    int count = sizeof(students) / sizeof(struct Student);

    fwrite(students, sizeof(struct Student), count, fp);
    fclose(fp);
}

void read_and_display_records(const char *filename) {
    
    FILE *fp = fopen(filename, "rb"); 
    if (fp == NULL) {
        perror("Error opening file for reading");
        
        return;
    }

    struct Student currentStudent;
    
    printf("\n Student Examination Results \n");
    printf("Name\t\t\t\tMarks\n");
    

    while (fread(&currentStudent, sizeof(struct Student), 1, fp) == 1) {
        
        printf("%-30s\t%d\n", currentStudent.name, currentStudent.totalMarks);
    }
    
    fclose(fp);
    printf("\n");
    printf("Reading complete.\n");
}


int main() {
    const char *filename = "results.dat";

    create_sample_records(filename);
    
    read_and_display_records(filename);
    return 0;
}