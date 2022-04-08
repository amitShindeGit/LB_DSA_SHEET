#include <iostream>
#include <set>

using namespace std;

int intersection(int a[], int n, int b[], int m){
    set<int> s1;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j]){
                s1.insert(a[i]);    //works for duplicate element array as well
                break;
            }
        }
    }
    
    return s1.size();
}

int main()
{
        int n=5, m=3;
	    cin >> n >> m;
	    int a[n]={1,2,3,4,5}, b[m]={1,2,3};
	    int x[4]={1,2,2,1}, y[2]={2,2};
	    int ans = intersection(a,n,b,m);
	    int ans2 = intersection(x,4,y,2);
	    cout << ans << endl;
	    cout << ans2;
   
         return 0;
}