#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        if(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndx = partition(arr, low, high);
        qs(arr, low, pIndx-1);
        qs(arr, pIndx+1, high); 
    }
}
vector<int> quick_sort(vector<int> &arr, int low, int high){
    qs(arr, 0 , arr.size()-1);
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    quick_sort(arr, low, high);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}