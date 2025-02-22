// calculation of simple interest
/*
p= principal
r= rate
t= time
SI= simple interest
*/
#include<stdio.h>
int main() {
int p=0;
int r=0;
int t=0;
int R=(r/100);
printf("p:");
scanf("%d",&p);
printf("R:");
scanf("%d",&R);
printf("t:");
scanf("%d",&t);
int SI=p*R/100*t;
printf("SI:%d\n",SI);
return 0;
}