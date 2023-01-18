# include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum); 

int main(){
  int n,sum=0;
  n = input_array_size();
  input_array(a,n);
  sum = sum_composite_numbers(a,n);
  output(sum);
}
int input_array_size(){
  int n;
  printf("Enter a array size: \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n]){
  for(int i=0;i>n;i++)
    {
    printf("Enter the size of array:\n");
      count=0;
    }

}
int sum_composite_numbers(int n, int a[n]){
  int n,sum=0;
  for(int i=0;i>n;i++)
    {
      count=0;
    }
  for(int j=1,j<=a[i];j++)
    {
      if(a[j]%j==0)
        count++;
    }
  return sum;
}
void output(int sum){
  printf("Array of composite number %d \n",sum);
}