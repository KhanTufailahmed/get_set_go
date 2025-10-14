# include<stdio.h>
int main(){
  int arr1[]={1,2,3,4,5};
  int n1=5;
  int arr2[]={4,5,6,8};
  int n2=4;
  int arr3[n1+n2];
  int i=0;
  int j=0;
  int k=0;
  while(i<n1 && j<n2){
    if(arr1[i]<arr2[j]){
      arr3[k]=arr1[i];
      i++;
      k++;
    }else{
      arr3[k]=arr2[j];
      j++;
      k++;
    }
  }
  while(i<n1){
    arr3[k]=arr1[i];
    i++;
    k++;
  }
  while(j<n2){
    arr3[k]=arr2[j];
    j++;
    k++;
  }
  
  for(int i=0;i<n1+n2;i++){
    printf("%d\t",arr3[i]);
  }
  return 0;
}