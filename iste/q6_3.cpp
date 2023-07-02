//insertion sort


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, k, j,n,arr[100];
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for (i = 0; i < n; i++) {
	    scanf("%d",&arr[i]);
	}
	for (i = 1; i < n; i++) {
		k = arr[i];
		j = i - 1;

	
		while (j >= 0 && arr[j] > k) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = k;
	}




	for (i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}



	return 0;
}

