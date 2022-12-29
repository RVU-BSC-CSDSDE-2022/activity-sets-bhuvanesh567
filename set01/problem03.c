#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main() {
int a, b, sum;
a = input();
b = input();
add(a, b);
output(a, b, sum);
return 0;  
}

int input(){
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  return x;
}

int add (int a, int b){
  int sum; 
  sum=a+b;
}

void output(int a, int b, int sum){   
printf("th sum of %d + %d is %d",a,b,sum);

}