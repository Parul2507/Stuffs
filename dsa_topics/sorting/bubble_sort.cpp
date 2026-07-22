#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=n-1; i>0; i--){
        bool swap = true;
        for(int j=0; j < i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = false;
            }
        }
        if(swap){
            break;
        }
    }
}

void bubble_sort1(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool swap = true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = false;
            }
        }
        if(swap){
            break;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubble_sort1(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}