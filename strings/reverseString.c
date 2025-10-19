# include<stdio.h>
int main(){

  char str[]="hello";
  int n=5;
  char temp;
  for(int i=0;i<n/2;i++){
    temp=str[n-i-1];
    str[n-i-1]=str[i];
    str[i]=temp;
  }

  printf("%s",str);
  return 0;
}