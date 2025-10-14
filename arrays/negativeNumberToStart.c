# include<stdio.h>
int main(){
  int arr[]={1,2,-1,4,-8,9};
  int n=6;
  int j=0;
  int temp;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      j++;
    }
  }

  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  return 0;
}