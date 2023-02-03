#include <stdio.h>
main(){
float V = 12.00; // Voltage value in circuit
float Req = 10.00; // Equivalent resistance value
float I = V/Req; // total current in the circuit
printf("Total current %.2f \n",I);
float VR2 = 5*I; // 5 is the value of the equivalent circuit
float VR3 = 5*I;
printf("Voltage across R2 is %.2f \n",VR2);
printf("Voltage across R3 is %.2f\n",VR3);
float i2 = (0.5*I);
float i3 = (0.5*I);
printf("Current through R2 is %.2f \n",i2);
printf("Current through R3 is %.2f \n",i3);
}
