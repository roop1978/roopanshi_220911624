// C++ program to demonstrate
// right triangle star pattern
using namespace std;
#include <bits/stdc++.h>
#include <iostream>

int main() {
    int i, j, rows;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (j > i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
