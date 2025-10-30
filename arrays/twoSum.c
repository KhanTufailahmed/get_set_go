# include<stdio.h>
int main(){
  int arr[]={3,2,4};
  int target=6;
  int sum=0;
  for(int i=0;i<4;i++){
    sum=sum+arr[i];
    printf("%d",i);
    if(sum==target){
      break;
    }
  }

  return 0;
}