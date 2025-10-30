# include<stdio.h>
int main(){
  int arr[]={1,1,2,3,3,4,4,5,5};
  int n=9;
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(arr[i]==arr[j]){
        count++;
      }
    }
    if(count==1){
      printf("%d",arr[i]);
    }
  }
  return 0;
}