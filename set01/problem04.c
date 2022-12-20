#include <stdio.h>

int input();
int sum_func(int a, int b, int *sum);
void output(int a, int b, int sum);

int main(){
   int a, b, sum;
  printf("Enter the number");
  scanf("%d",&a);
  printf("Enter the number");
  scanf("%d",&b);
  sum_func(&a, &b,&sum);
  printf("%d", sum);
  return 0;
}
int sum_func(int a,int b, int *sum){
  *sum=a+b;
}
void output(int a, int b, int sum){
  printf("the sum of %d and %d is %d\n",a,b,sum);
}

