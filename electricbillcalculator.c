*/
muigai kelvin njunge 
CT101/G/24553/24
22 October 2025
program:electricbillcalculator
*/
#include<stdio.h>
float calculateelectricbill(float units);
int main(){
float unitsconsumed;
float electricbill;
printf("enter units consumed\n");
scanf("%f",&unitsconsumed);
electricbill=calculateelectricbill(unitsconsumed);
printf("electricbill:%.2f",electricbill);
if(unitsconsumed<=100)
{
printf("ksh 10 per unit\n");
}
else if(unitsconsumed<=200)
{
printf("ksh 15 per unit\n");
}
else
{
printf("ksh 20 per unit\n");
}
electricbill=calculateelectricbill(unitsconsumed);
printf("electricbill :%.2f",electricbill);
return 0;
}
float calculateelectricbill(float unitsconsumed)
{
float electricbill;
float rateperunit;
if(unitsconsumed<=100)
{rateperunit=10;}
else if(unitsconsumed<=200)
{rateperunit=15;}
else
{rateperunit=20;}            electricbill=rateperunit*unitsconsumed;
return electricbill;
}

