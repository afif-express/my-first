#include <stdio.h>

float calculateGradePoint(float marks) {
    if (marks >= 80) return 4.00;   // A+ (4.00)
    else if (marks >= 75) return 3.75;  // A (3.75)
    else if (marks >= 70) return 3.50;  // A- (3.50)
    else if (marks >= 65) return 3.25;  // B+ (3.25)
    else if (marks >= 60) return 3.00;  // B (3.00)
    else if (marks >= 55) return 2.75;  // B- (2.75)
    else if (marks >= 50) return 2.50;  // C+ (2.50)
    else if (marks >= 45) return 2.25;  // C (2.25)
    else if (marks >= 40) return 2.00;  // D (2.00)
    else return 0.00;  // F (0.00)
}

int main() {
    float marks, cgpa;

    printf("Enter your marks for the subject: ");
    scanf("%f", &marks);

    cgpa = calculateGradePoint(marks);

    printf("CGPA for one subject: %.2f\n", cgpa);

    return 0;
}
