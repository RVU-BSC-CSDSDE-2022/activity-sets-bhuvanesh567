#include<stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int  main(){
  float base,height;
  input(base,height);
}
void input(float base, float height){
  printf("Enter a base\n");
  scanf("%f",&base);
  printf("Enter a height\n");
  scanf("%f",&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
}
void find_area(float base , float height, float *area){
  *area=0.5*base*height;
}
void output(float base, float height, float area){
  printf("the sum of triangle of %f %f and %f is %f\n",base,height,area);
}