*/
Muigai kelvin Njunge
23 October 2025
CT101/G/24553/24
Program=convert fahrenheittocelsius
*/
#include<stdio.h>
float convertTocelsius(float fahrenheit);
int main(){
float C;
float F;
printf("enter temparatureinF\n");
scanf("%f",&F);
C=convertTocelsius(F);
printf("C:%.2f",C);
return 0;
}
float convertTocelsius(float fahrenheit)
{
float F;
float C;
C=(fahrenheit-32)*5/9;
return C;
}

