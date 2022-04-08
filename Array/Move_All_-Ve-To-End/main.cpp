// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void swap(int &x,int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        //First approach, time exceeding too much
        //Constant Space!!
        // int first = n-2;
        // int second = n-1;
        
        // while(first >= 0 && second >= 0){
        //     if(arr[first] > 0 ){
        //         first--;
        //     }else if(arr[first] < 0){
        //         for(int m=0;m < ((second - first)-1); m++){
        //         swap(arr[first+m], arr[first+(m+1)]);
        //         }
        //         if(arr[second] > 0){
        //         swap(arr[second-1], arr[second]);
        //         }
        //         first--;
        //         second--;
        //     }
        // }
        
        int temp[n];
        int i=0;
        int j=0;
        int index=0; //change
        int count = n-1;
        
        while(count >= 0){
            if(arr[i] > 0){
                temp[index] = arr[i];
                index++;
            }
            
            i++;
            count--;
        }
        
        count = n-1;
         while(count >= 0){
            if(arr[j] < 0){
                temp[index] = arr[j];
                index++;
            }
            j++;
            count--;
        }
        
        for(int i=0; i<n; i++){
            arr[i] = temp[i]; 
        }
        
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends