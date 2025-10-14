# include<stdio.h>
int main(){
  int arr1[]={1,2,2,3,4,6};
  int n1=6;
  int arr2[]={2,4,6,8,10};
  int n2=5;
  int last=-1;
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j]){
        if(arr1[i]!=last){
          printf("%d\t",arr1[i]);
          last=arr1[i];
        }
      }
    }
  }
  return 0;
}