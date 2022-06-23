// method 1 by using linear search
#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    int i;

    if (n==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if (arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
        return minmax;
    }else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for(i=2; i<n; i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
        
    }
    return minmax;
}

int main(){
    int arr[] = {100, 12,56,87,2,3000};
    int arr_size = 6;

    struct Pair minmax = getMinMax(arr, arr_size);

    cout<< "minimum element is "<< minmax.min <<endl;
    cout<< "maximum element is "<< minmax.max <<endl;
    return 0;
}