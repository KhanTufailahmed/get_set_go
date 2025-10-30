# include<stdio.h>
int main(){
  int arr[]={1,2,0,4,5,0,6,7};
  int n=8;
  int temp[n];
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      temp[j]=arr[i];
      j++;
    }
  }

  for(int i=j;i<n;i++){
    temp[i]=0;
  }

  for(int i=0;i<n;i++){
    printf("%d\t",temp[i]);
  }
  return 0;
}