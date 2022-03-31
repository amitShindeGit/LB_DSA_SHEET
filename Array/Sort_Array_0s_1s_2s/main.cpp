#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int left, int mid, int right){
        int i = left;
        int j= mid+1;
        int k = left;
        int temp[right];
        
        while(i <= mid && j <= right){
            if(arr[i] <= arr[j]){
                temp[k] = arr[i];
                i++;
            }else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        
        while(i <= mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        
        while(j <= right){
            temp[k] = arr[j];
            j++;
            k++;
        }
        
        for(int x=left; x<k; x++){
            arr[x] = temp[x];
        }
    }
    
    void mergeSort(int arr[], int left, int right){
        int mid = (left+right) / 2;
        
        if(left >= right){
            return;
        }
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
        
    }
    
    void sort012(int a[], int n)
    {
        // coode here 
        int l = 0;
        int r = n-1;
       
        mergeSort(a, l,r);
        
        // for(int i=0; i<n;i++){
        //     cout << a[i] << ' ';
        // }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}