#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    int total_classes;
    int attended;
    float percentage;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Total Classes Held: ");
        scanf("%d", &s[i].total_classes);
        printf("Classes Attended: ");
        scanf("%d", &s[i].attended);
        
        s[i].percentage = ((float)s[i].attended / s[i].total_classes) * 100;
    }

    printf("\n----- Attendance Report -----\n");
    printf("Roll\tName\t\tPercentage\tStatus\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f%%\t", s[i].roll, s[i].name, s[i].percentage);
