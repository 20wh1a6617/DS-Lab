#include<stdio.h>
int binary_search(int a[30],int n,int ele,int low,int high)
{ 
  int pos = -1;
  int mid = (low + high)/2;
  while(low <= high)
  {
     if(a[mid]>ele)
     {
        high = mid - 1;
     }
     else if(a[mid]<ele)
     {
       low = mid + 1;
     }
     else if(a[mid] == ele)
        return mid;

  }
  if(pos == -1)
  {
      return -1;
  }
  else
  {
      return pos;
  }

}
int main(){
         int a[30],ele,low,high,i,n;
         int pos;
         printf("Enter the size the array :");
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
           printf("Enter the array elements :");
           scanf("%d",&a[i]);
         }  
         printf("Enter the element to be searched:");
         scanf("%d",&ele);

         pos = binary_search(a,n,ele,low,high);
         if(pos == -1){
            printf("Element is not found");
         }
         else{

            printf("Element is found at %d position",pos);
            }
  


}
