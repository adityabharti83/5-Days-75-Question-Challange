#include <stdio.h>
struct student {
    char firstName[10];
    int roll;
    float marks;
} s;

int main() {
    int i;
    printf("roll number:");
    scanf("%d", &s.roll);
    printf("Enter first name: ");
    scanf("%s",&s.firstName);
    printf("\nEnter marks: ");
    scanf("%f", &s.marks);
    
    printf("Displaying Information:\n");
    printf("\nRoll number: %d", s.roll );
    printf("\nFirst name: %s",s.firstName);
    printf("\nMarks: %f", s.marks);
    return 0;
}

