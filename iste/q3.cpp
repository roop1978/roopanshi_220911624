// C++ program to demonstrate
// full pyramid pattern using *
using namespace std;
#include <bits/stdc++.h>
#include <iostream>

int main() {
    int i, j, r;
 
    printf("Enter the number of rows\n");
    scanf("%d", &r);
 
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= 2*r-1; j++) {
            if (j >= r-(i-1) && j<= r+(i-1)) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
