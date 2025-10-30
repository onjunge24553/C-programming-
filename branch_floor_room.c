/*
muigai kelvin njunge
CT101/G/24553/24
Program:to calculate number of occupied and vacant rooms;
30:10:2025
*/
#include<stdio.h>
int main(){
int chain[3][5][10];
int branch,floor,room;
int vacant,occupied;
printf("enter room occupancy(1=occupied,0=vacant):\n");
for(branch=0;branch<3;branch++){
printf("branch:%d\n",branch+1);
for(floor=0;floor<5;floor++){
vacant=0;
occupied=0;

printf("floor:%d\n",floor+1);

for(room=0;room<10;room++){
printf("room:%d\n",room+1);
scanf("%d",&chain[branch][floor][room]);
if(chain[branch][floor][room]==1)
occupied ++;
else
vacant ++;}
printf("%d\n",occupied);
printf("%d\n",vacant);}
}
return 0;
}
