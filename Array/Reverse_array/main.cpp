#include <iostream>

using namespace std;

void swap_arr(int arr[], int start, int last){
    int temp = 0;
    temp = arr[start];
    arr[start] = arr[last];
    arr[last] = temp;
}

//Recursion approach
void reverse_arr(int start, int arr[], int last){
    if(start >= last){
        return ;
    }
     swap_arr(arr, start, last);

     reverse_arr(start+1, arr, last-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int start = 0;
    int last = sizeof(arr)/sizeof(arr[0])-1;
    reverse_arr(start,arr,last);

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << ' ';
    }

    return 0;
}
