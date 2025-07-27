#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int idx = binarySearch(arr, n, target);
    if(idx != -1)
        cout << target << " found at index " << idx << "\n";
    else
        cout << "Not found\n";
    return 0;
}
