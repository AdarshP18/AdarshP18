#include<stdio.h>

main()
{
 float radius,area;
 printf("Radius = ");
 scanf("%f",&radius);
 area = 3.14159 * radius * radius; //here 3.14159 is value of π
 printf("Area = %f",area);
 getch();
 return 0;
}
