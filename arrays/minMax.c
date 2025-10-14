# include<stdio.h>
int main(){
  int arr[]={1,4,5,7,4,3};
  int n=6;
  int min=arr[0];
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
    if(arr[i]>max){
      max=arr[i];
    }
  }
  printf("The min is %d\t",min);
  printf("The max is %d\t",max);
  return 0;
}