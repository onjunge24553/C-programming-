*/
muigai kelvin njunge,
CT101/G/24553/24,
11october 2025
/*
#include<stdio.h>
int main(){
float bill;
float rate;
float unitsconsumed;
printf("enter unitsconsumed:\n");
scanf("%f",&unitsconsumed);
if(unitsconsumed>0&&unitsconsumed<=30){rate=20;}
else if(unitsconsumed>30&&unitsconsumed<=60){rate=25;}
else if(unitsconsumed>60){rate=30;}
else
printf("invalid:\n");
bill=unitsconsumed*rate;
printf("bill:%.2f\n",bill);
return 0;
}

