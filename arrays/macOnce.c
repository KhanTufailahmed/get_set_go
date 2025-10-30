# include<stdio.h>
int max(int a,int b){
  int ma=0;
  if(a>b){
    ma=a;
  }else{
    ma=b;
  }
  return ma;
}
int main(){
  int arr[]={1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,1};
  int n=17;
  int count=0;
  int big=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
      big=max(big,count);
    }else{
      count=0;
    }
  }
  printf("%d",big);
  return 0;
}