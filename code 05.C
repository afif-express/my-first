#include <stdio.h>

int main()
{
    int base,height,area;
    printf("enter the value of base & height:");
    scanf("%d %d",&base,&height);
    area  = 0.5*base*height;
    printf("Area is %d",area);
    return 0;
}

#include <stdio.h>

int main()
{
    float a,b,c,s,area;
    printf("enter the value of three sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&& a+c>b && b+c>a){
    s =(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area o the triangel:%f",area);
    }

    return 0;
}
