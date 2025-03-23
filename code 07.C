#include <stdio.h>

int main()
{
    float cm,inches;
    printf("enter lenth in centimeters:");
    scanf("%f", &cm);
    inches = cm*0.393701;
    printf("is equal to %f" ,inches);
    return 0;
}

#include <stdio.h>

int main()
{
    float inches,cm;
    printf("enter lenth in inches:");
    scanf("%f", &inches);
    cm = inches*2.54;
    printf("is equal to %f" ,cm);
    return 0;
}
