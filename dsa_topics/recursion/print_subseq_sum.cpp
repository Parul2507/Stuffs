#include <bits/stdc++.h>
using namespace std;

void printF(int indx, vector <int>& ds, int s, int sum, int arr[], int size)
{
    if(indx == size)
    {
        if(s == sum)
        {
            for(auto x : ds)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[indx]);
    s += arr[indx];
    printF(indx+1, ds, s, sum, arr, size);

    ds.pop_back();
    s -= arr[indx];
    printF(indx+1, ds, s, sum, arr, size);
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int arr[] = {1, 2, 1};
    int size = 3;
    vector <int> ds;
    int sum = 2;
    printF(0, ds, 0, sum, arr, size);
}
