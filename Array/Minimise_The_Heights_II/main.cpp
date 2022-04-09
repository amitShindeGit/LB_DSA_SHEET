// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

// int max(int x, int y){
//     int res = (x > y) ?  x :  y;
//     return res;
// }

// int min(int x, int y){
//     int res = (x > y) ?  y :  x;
//     return res;
// }

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int smallest = arr[0]+k; //no need to minus k from smalllest
        int largest = arr[n-1]-k; //no need to add k largest
        int diffSmallLarge = arr[n-1] - arr[0];  //without k
        int currentMin, currentMax;
        
        for(int i=0; i< n-1; i++){
            currentMin = min(smallest, arr[i+1]-k); //value minus -> compare with smallest
            currentMax = max(largest, arr[i]+k);   //value add -> compare with largest
            
            if(currentMin < 0){     
                continue;
            }
            
            diffSmallLarge = min(diffSmallLarge, currentMax-currentMin);
        }
        
        return diffSmallLarge;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends