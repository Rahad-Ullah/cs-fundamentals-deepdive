#include <stdio.h>
int main()
{
    int roll = 10;
    float gpa = 4.83;
    char grade = 'A';

    // print(format_specifier, value);

    printf("Roll: %d\n", roll);
    printf("GPA: %f\n", gpa);   // 4.830000 - default print 6 digits after decimal
    printf("GPA: %.2f\n", gpa); // 4.83 - print 2 digits after decimal
    printf("Grade: %c\n", grade);

    return 0;
}