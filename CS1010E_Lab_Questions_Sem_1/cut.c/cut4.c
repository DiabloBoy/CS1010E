#include <stdio.h>
#include <stdlib.h>
#define SIZE 21

int main(void){
int n,a[SIZE] = {0},i,j,x,y;

scanf("%d",&n);
printf("Length: %d\n",n);
for(i = 0; i < n;i++){
scanf("%d",&a[i]);
}
for(i = 0; i < n;i++ ){
printf("Price of length %d: %d\n",i+1,a[i]);

if((i+1)>1){

for(j = 1;(j<=(i+1))&&(((i+1)-j) != 0); j++){

if( j <= ((i+1)/2)){
x = ((i+1)-j)-1;
printf("[%d,%d] = %d\n",j,(i+1)-j, (a[j-1]+a[x]));
y = a[x]+a[j-1];
if(y > a[i]){ a[i] = y;
}

}
  }
     }
       }printf("Max price of length %d: %d\n",i+1,a[i]);
return 0;
          }