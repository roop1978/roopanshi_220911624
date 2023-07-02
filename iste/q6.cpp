//bubble sort
#include <iostream>

int main() {
   int i,arr[100],n,temp,j,k;
   printf("enter number of elements:");
   scanf("%d",&n);
   printf("enter elements:");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
   
   for(int i=0; i<=n-1;i++){
            int swap=0;
            for(int j=0; j<=n-2;j++){
                if( arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]= temp;

 swap++;
                }
            }
   }
      for(int k=0;k<n;k++){
                printf("%d ",arr[k]);
            }

    return 0;
}