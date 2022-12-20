#include <stdio.h>
int input();
int compare (int a,int b,int c);
void output (int a, int b, int c, int largest);

int main(){
  int a, b,c, largest;
  a= input();
  b= input();
  c= intput();
  largest = compare(a, b, c);
  output(a, b, c, largest);
  return 0;
}
  
int input(){
  int x;
  printf("Enter the number\n");
  scanf("&d",&x);
  return 0;
}

int compare (int a, int b,int c)
{
  if((a>b)&&(a>c))
    return a;
  if((b>a)&&(b>c))
    return b;
  if((c>a)&&(c>b))
    return c;
}
  
void output (int a, int b, int c, int largest){
  printf("the largest is %d %d %d is %d,a, b,c, largest");
}

