void hoanvi(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (int a[], int low, int high)
{
    int pivot = a[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) {
		left++;}
        while(right >= left && arr[right] > pivot) {
		right--;}
        if (left >= right)
		 break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    haonvi(a[left], a[high]);
    return left;
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
       
        int pi = partition(arr, low, high);
 
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
