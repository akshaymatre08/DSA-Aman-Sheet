#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int arr[], int size){
    int max_sum = arr[0], max_end = 0, start=0, end;
    for(int i=0; i<size; i++){
        max_end = max_end + arr[i];
        if(max_end > max_sum ){
            max_sum = max_end;
            end = i;
        }
        if(max_end < 0 ){
            max_end = 0;
            start= i+1;
        }    
    }
    cout << "Maximum contiguous sum is " << max_sum;
    cout << "\nsubarray starting index is " << start;
    cout << "\nsubarray end index is " << end;
};
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    return 0;
}