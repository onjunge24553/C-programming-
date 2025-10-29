/*
Muigai kelvin njunge,
OCTOBER 29 2025,
program:1D array to display daily hotel revenue,
CT101/G/24553/24,
*/
#include<stdio.h>
int main(){
int i;
float sum=0;
float average;
float daily_hotel_revenue[7]={1000.67,1453.00,1897.66,1789.89,1766.78,2000.00,3456.87};
for(i=0;i<7;i++){
printf("%d:%.2f\n" , i,daily_hotel_revenue[i]);
sum+=daily_hotel_revenue[i];}
average=sum/7;
printf("sum:%.2f\n",sum);
printf("average:%.2f\n",average);
return 0;
}
