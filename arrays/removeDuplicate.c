# include<stdio.h>
int main(){
  int arr[]={1,2,2,3,4,4,5};
  int n=7;
  for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){
      if(arr[i]==arr[i-1]){
        printf("%d",arr[i]);
        arr[i]=0;
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  return 0;
}