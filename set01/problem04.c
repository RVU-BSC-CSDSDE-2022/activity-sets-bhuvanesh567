#include <stdio.h>

int input();
int sum_func(int a, int b, int *sum);
void output(int a, int b, int sum);

int main(){
   int x, y, sum;
  printf("Enter the number");
  scanf("%d",&x);
  printf("Enter the number");
  scanf("%d",&y);
  sum_func(&x, &y,&sum);
  printf("%d", sum);
  return 0;
}
int sum_func(int *x,int *y, int *sum)
{
  *sum=*x+*y;
}
void output(int x, int y, int sum){
  printf(" %d and %d is %d\n",x, y, sum);
}

