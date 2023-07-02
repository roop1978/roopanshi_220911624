// selection sort
#include <iostream>

int main() {
    int i,n,j,arr[100],temp;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0; i< n-1; i++){
            int mini=i;
            for(int j=i+1; j< n;j++){
                if (arr[mini]> arr[j]){
                    mini=j;

                }
                
            }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
    
 //printing sorted array
        for(int i=0; i<n;i++){
            printf("%d ",arr[i]);
        }
        
    
    
       
  
    return 0;
}