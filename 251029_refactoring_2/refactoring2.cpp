#include <iostream>

void merge(int arr[], int left, int mid, int right) {
    int size = right - left + 1;
    int* temp = new int[size];
        
    int i = left; 
    int j = mid + 1; 
    int k = 0;
    
    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    for (int i = 0; i < k; i++) {
        arr[left + i] = temp[i];
    }
    
    delete[] temp;
}

void merge_sort_recursive(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort_recursive(arr, left, mid);
    merge_sort_recursive(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

void merge_sort(int arr[], int size) {
    if (size == 0) {
        return;
    }

    merge_sort_recursive(arr, 0, size - 1);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10, 1, 6, 20, 50, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;   
    
    merge_sort(arr, size);
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}