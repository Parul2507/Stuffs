#include<bits/stdc++.h>
using namespace std;

void printF(int index, vector <int>& ds, int arr[], int size)
{
    if(index == size)
    {
        for (auto x : ds)
        {
            cout << x << " ";
        }
        if(ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    printF(index+1, ds, arr, size);
    ds.push_back(arr[index]);

    printF(index+1, ds, arr, size);
    ds.pop_back();
}

int main()
{
    int arr[] = {3, 2, 1};
    vector <int> ds;
    int n = 3;
    printF(0, ds, arr, n);
}