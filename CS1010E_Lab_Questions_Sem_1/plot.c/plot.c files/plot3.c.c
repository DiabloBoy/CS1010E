#include <stdio.h>
#include <math.h>
double gridToGraph(int i,double low,double high,int n);
int graphToGrid(double x,double low,double high,int n);

int main(void){
int a,b,c,d;
double xl,xh;
int column; /*JR*/
double value;

scanf("%d %d %d %d",&a,&b,&c,&d);
scanf("%lf %lf",&xl,&xh);
printf("%d %d %d %d\n",a,b,c,d);
printf("xl = %f; xh = %f\n",xl,xh);
if((xl > 0 && xh > 0) || (xl < 0 && xh < 0)){
   printf("y-axis is outside the plot\n");}
else{
    column = graphToGrid(0.0,xl,xh,60)+ 1;
    value = gridToGraph(column-1,xl,xh,60);
                                                    /*colummn-1 is integer*/
    printf("y-axis is located at column %d\n",column);
    printf("column %d is x = %f\n",column,value);
                }


return 0;
}
int graphToGrid(double x,double low,double high,int n){
    double column,interval;
    interval = (high-low)/(n-1);
    column =(x-low)/interval;
    return rint(column);
}
double gridToGraph(int i,double low,double high,int n){
double interval;
interval = (high - low)/(n-1);
if(i == 59){ return high;}
else { return low + interval * i;}



}
