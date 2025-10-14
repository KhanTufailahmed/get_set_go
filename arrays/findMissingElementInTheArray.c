# include<stdio.h>
int main(){
  int arr[]={2,4,1,8,9,3,6,7};
  int n=9;
  int sum=(n*(n+1))/2;
  int actualSum=0;
  for(int i=0;i<n-1;i++){
    actualSum=actualSum+arr[i];
  }
  printf("The missing number is %d",sum-actualSum);
  return 0;
}