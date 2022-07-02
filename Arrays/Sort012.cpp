
// Problem url : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

#include <stdio.h>
void sort012(int a[], int n)
{
    int zero = 0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
        else two++;
    }
   
    int currentIndex = 0;
    while(currentIndex<zero){
        a[currentIndex++]=0;
    }
    while(currentIndex<zero+one){
        a[currentIndex++]=1;
    }
     while(currentIndex<zero+one+two){
        a[currentIndex++]=2;
    }
    
    
}

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}