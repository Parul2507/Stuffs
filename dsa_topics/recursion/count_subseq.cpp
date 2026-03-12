#include <bits/stdc++.h>
using namespace std;

int printF(int indx, int s, int sum, int arr[], int size)
{
    // strictly done when the array comtains only positive value
    if(s > sum) return 0;

    if(indx == size)
    {
        if(s == sum) return 1;
        
        else return 0;
    }

    s += arr[indx];
    int l =  printF(indx+1, s, sum, arr, size);

    s -= arr[indx];
    int r = printF(indx+1, s, sum, arr, size);

    return l+r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int size = 3;
    int sum = 2;

    cout << printF(0, 0, sum, arr, size) << endl;;
}