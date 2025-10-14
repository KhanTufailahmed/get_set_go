# include<stdio.h>
int main(){
  int arr1[]={1,2,3,4,6};
  int n1=5;
  int arr2[]={2,4,6,8,10};
  int n2=5;
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j]){
        printf("%d\t",arr1[i]);
      }
    }
  }
  return 0;
}