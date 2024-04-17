#include<stdio.h>

int main(){
    int l, r, mid, n, key;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n]; // Declare array after getting the value of n
    for(int i = 0; i < n; i++){
        printf("Enter array element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter number to search:");
    scanf("%d", &key);
    l = 0;
    r = n - 1;
    while(l <= r){
        mid = (l + r) / 2; // Correct calculation of mid
        if(a[mid] == key){
            printf("Element found at location: %d\n", mid + 1); // Added format specifier for mid
            return 0; // Return after element found
        }
        else if(a[mid] < key){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    printf("Element not found\n"); // Moved outside the loop
    return 0;
}
 
