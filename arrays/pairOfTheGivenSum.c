# include<stdio.h>
int main(){
  int arr[]={1,1,1,1};
  int sum=2;
  int count=0;
  for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
      if(arr[i]+arr[j]==sum){
        count++;
      }
    }
  }
  printf("Count is %d",count);
  return 0;
}