/*
Muigai kelvin njung'e 
CT101/G/24553/24
program:2D array program to display hotel room occupancy
30:10:2025
*/
#include<stdio.h>
int main(){
int occupancy[5][10];
int room,floor;
int occupied,vacant;
printf("enter room(1=occupied,0=vacant):\n");
for(floor=0;floor<5;floor++){
printf("floor:%d\n",floor+1);
occupied=0;
vacant=0;
for(room=0;room<10;room++){
printf("room:%d\n",room+1);
scanf("%d",&occupancy[floor][room]);
if(occupancy[floor][room]==1)
occupied ++;
else
vacant++;
}
printf("occupied roomsonfloor:%d,%d\n",floor+1,occupied);
printf("vacantroomsonfloor:%d,%d\n",floor+1,vacant);
}
return 0;
}
