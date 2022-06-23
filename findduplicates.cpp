#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(int arr[], int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                return true;
            } 
        }
    }
    return false;
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);

    if(containsDuplicate(arr, n)){
        cout<<"true";
    }else{
        cout<<"false";
    }  
    return 0;
}