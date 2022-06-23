#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
};
void revereseArray(int arr[], int start, int end){
    int temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        start++;
        end--;
    }

};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array is" << endl;
    printArray(arr, n);
     
    revereseArray(arr, 0, n-1);
     
    cout << "\nReversed array is" << endl;
     
    printArray(arr, n);
     
    return 0;
}