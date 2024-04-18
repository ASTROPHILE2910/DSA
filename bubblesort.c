#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter array elements:");
        scanf("%d",&a[i]);
    }
    int size=n;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }

    }
    printf("sorted array:\t");
    for(int k=0;k<size;k++){
        printf("%d\t",a[k]);

    }
    return 0;
}