#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
int a,b,c,isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
int input_side(){
  int x;
  printf("Enter a scalene: \n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b, int c){
  int ans;
  if(a!=b && b!=c && c!=a)
  {
    ans=0;
  }
  else
  {
    ans=1;
  }
  return ans;
}
void output(int a, int b, int c, int isscalene){
  if(isscalene == 0)
  {
    printf("the triangle is side of %d %d %d is scalene\n",a,b,c);
  }
  else
  {
    printf("triangle is not scalene\n");
  }
}