#include<stdio.h>
int input();
int sum_func(int a, int b);
void output(int a, int b, int sum);

int main(void){
  int a, b, sum;
  a =input();
  b= input();
  sum=sum_func(a, b);
  output(a, b, sum);
  return 0;
}
int input(){
  int a;
  printf("Enter the number\n");
  scanf("%d", &a);
  return a;
}
int sum_func(int a, int b){
  int sum;
  sum = a + b;
  return sum;
}
void output(int a, int b, int sum){ 
printf("The sum of %d + %d is %d",sum,a,b);
}
  
