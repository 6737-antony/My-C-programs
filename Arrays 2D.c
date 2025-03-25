// Arrays, 2D array
#include<stdio.h>
int main () {
  int i;
  int j;
  int marks[3][2]={
    {1,2},
    {3,4},
    {5,6}
 };
 for (i=0; i<3; i++){
   for (j=0; j<2; j++){
     printf("%d\t", marks [i][j]);
   }
   printf("\n");
 }
    return 0;
}