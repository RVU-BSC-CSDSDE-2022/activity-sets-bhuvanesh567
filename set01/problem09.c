#include <stdio.h>
#include <math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main(){
  double n=input();
  double sq=square_root(n);
  output(n,sq);
}

double input(){
  double a;
  printf("Enter the number\n");
  scanf("%lf",&a);
  return a;
}
double square_root(double n){
  double x;
  x=sqrt(n);
  return x;
}
void output(double n, double sqrroot){
  printf("square root of %.2lf and %2.lf",n, sqrroot);
}