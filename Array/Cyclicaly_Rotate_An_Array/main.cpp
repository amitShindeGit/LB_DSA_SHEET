// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void rotate(int arr[], int n)
{
    int pointer = n-1; 
    
    while(pointer > 0){
        swap(arr[pointer], arr[pointer-1]);
        pointer--;
    }
}