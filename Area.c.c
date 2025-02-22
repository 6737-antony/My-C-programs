#include<stdio.h>
int main() {
  int length=0;
  int width=0;
  printf("length:");
  scanf("%d",&length);
  printf("width:");
  scanf("%d",&width);
  int area= length *width;
  printf("area:%d\n",area);
  return 0;
}