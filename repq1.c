#include <stdio.h>
main(){
int integer1 = 0,integer2 = 0;
float float1 = 0.00,float2 = 0.00;
double double1 = 0.00,double2 = 0.00;
char a = 0,b = 0;
printf("Enter an integer value: ");
scanf("%d" ,&integer1);
printf("Enter an second integer value: ");
scanf("%d",&integer2);
printf("Enter a float value: ");
scanf("%f",&float1);
printf("Enter a second float value: ");
scanf("%f",&float2);
printf("Enter a double value: ");
scanf("%lf",&double1);
printf("Enter a second double value: ");
scanf("%lf",&double2);
printf("Enter a character value: ");
scanf(" %c",&a);
printf("Enter a second character : ");
scanf(" %c",&b);
printf("........................................\n");
printf("The value of integer1 is %d \n",integer1);
printf("The value of integer2 is %d \n",integer2);
printf("The value of float1 is %f \n",float1);
printf("The value of float2 is %f \n",float2);
printf("The value of double1 is %lf \n",double1);
printf("The value of double2 is %lf \n",double2);
printf("Value of a is %c\n",a);
printf("Value of b is %c",b);

}
