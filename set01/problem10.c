#include<stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
  char string1[100], string2[100];
  int result=0;
  input_two_strings(string1,string2);
  result=stringcompare(string1, string2);
  output(string1,string2,result);
  return 0;
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{ int result;
  for(int i=0;string1[i]!='\0' && string2[i]!='\0';i++){
     if(string1[i]>string2[i]){
       
        result=1;}
     else if(string1[i]<string2[i]){
        result=-1;
     }
    else if (string1[i]==string2[i]){
       result=0;
    }}
    return result;}
  
  
  void output(char *string1, char *string2, int result){
    if(result==0)
      printf("String are equal\n");
    else if(result==1)
      printf("%s is greater\n", string1);
    else if(result==-1)
      printf("%s is greater \n", string2);
        
  }

    
    
    
    
    

