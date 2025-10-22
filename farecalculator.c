/*
muigai kelvin njunge
CT101/G/24553/24
PROGRAM:fare calculator
22 October 2023
*/
#include<stdio.h>
float calculatefare(float kilometers);
int main(){
float fare;
float kilometers;
printf("enter the kilometers \n");
scanf("%f",&kilometers);
fare= calculatefare(kilometers);
printf("fare:%.2f",fare);
return 0;
}
float calculatefare(float kilometers)
{
float rateperkilometer=50.0;
float fare=rateperkilometer*kilometers;
return fare;
}

