#include <stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum  = a+b;
    printf("%d",sum);
    return 0;
}


#include <stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum  = a-b;
    printf("%d",sum);
    return 0;
}


#include <stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum  = a*b;
    printf("%d",sum);
    return 0;
}


#include <stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum  = a/b;
    printf("%d",sum);
    return 0;
}


#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        remainder = dividend % divisor;
        printf("Remainder when %d is divided by %d is: %d\n", dividend, divisor, remainder);
    }

    return 0;
}


