#include<stdio.h>

int linear_Search(int n,int a[30],int ele){
  int pos = -1;
  for(int i = 0;i < n;i++){
          if(a[i] == ele){
                 pos = i;
                 }
                 }
  if(pos == -1){
         return -1;
         }
  else{
         return pos;
         }
}

int main(){
     int a[30],ele,i,n;
     int x;
     printf("Enter the size of the array");
     scanf("%d",&n);
     for(i = 0;i < n;i++){
            scanf("%d",&a[i]);
            }
    printf("Enter the element to be searched");
    scanf("%d",&ele);
    x = linear_Search(n,a,ele);
    if(x == -1){
        printf("Element is not found");
        }
    else{
        printf("Element is found at %d position",x);
        }
        }
                                                 
