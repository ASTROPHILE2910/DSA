#include<stdio.h>
int main(){
    int l,r,mid,n,key;
    int a[n];
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&key);
    l=0;
    r=n-1;
    while(l<=r){
        mid=(l+r/2);
        if(a[mid]==key){
            printf("Element found at location:",key,mid);
            break;
        }
        else if(a[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }

    }
    if(l>r){
        printf("element not found");
    }
    return 0;

    
    
    

}