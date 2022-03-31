void merge(int arr[], int left, int mid, int right){
    int i = left;
    int j = right;
    int k = left;
    int tempArr[right];
    
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            tempArr[k] = arr[i];
            i++;
        }else{
            tempArr[k] = arr[j];   
            j++;
        }
        k++;
    }
    
    //remainig values
    while(i <= mid){
        tempArr[k] = arr[i];
        i++;
        k++;
    }
    
    while(j <= right){
        tempArr[k] = arr[j];
        j++;
        k++;
    }
    
    for(int x=left; x<k; x++){
        arr[x] = tempArr[x];
    }
}

void mergeSort(int arr[], int left, int right){
    int mid = (left + right) / 2;
    if(left >= right){
        return;
    }
    
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}


int kthSmallest(int arr[], int l, int r, int k)
    {
        mergeSort(arr, l,r);
        for(int i=0;i<6;i++){
            cout << arr[i];
        }
        return arr[k];
    }