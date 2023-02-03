#include <stdio.h>
main(){
int ai = 0,bi = 0;
float af = 0.00,bf = 0.00;
double ad = 0.00,bd = 0.00;
char ac = 0,bc = 0;
printf("Enter an integer1 value: ");
scanf("%d" ,&ai);
printf("Enter an integer2 value: ");
scanf("%d",&bi);
printf("Enter a float value1: ");
scanf("%f",&af);
printf("Enter a float value2: ");
scanf("%f",&bf);
printf("Enter a double value1: ");
scanf("%lf",&ad);
printf("Enter a double value2: ");
scanf("%lf",&bd);
printf("Enter a character value1: ");
scanf("%c\n",&ac);
printf("Enter a character value2: ");
scanf("%c\n",&bc);
printf("\n");
printf("The value of ai is %d \n",ai);
printf("The value of bi is %d \n",bi);
printf("The value of af is %f \n",af);
printf("The value of bf is %f \n",bf);
printf("The value of ad is %lf \n",ad);
printf("The value of bd is %lf \n",bd);
printf("The value of ac is %c \n",ac);
printf("The value of bc is %c \n",bc);

}
