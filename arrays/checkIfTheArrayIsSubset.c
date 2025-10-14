# include<stdio.h>
int main(){
  int arr1[]={1,2,3,11,0,9};
  int n1=6;
  int arr2[]={2,3,0};
  int n2=3;
  int flag=1;
  for(int i=0;i<n2;i++){
    int found=0;
    for(int j=0;j<n1;j++){
      if(arr2[i]==arr1[j]){
        found=1;
        break;
      }
    }
    if(found==0){
      flag=0;
      break;
    }
  }
  printf("flag:%d",flag);
}