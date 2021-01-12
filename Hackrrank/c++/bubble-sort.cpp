#include <bits/stdc++.h>

using namespace std;

int arr[600];

int main() {
    int n, swaps = 0;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;

                swaps++;
            }
        }
    }

    cout<<"Array is sorted in "<< swaps <<" swaps.";
    cout<<"\nFirst Element: "<< arr[0];
    cout<<"\nLast Element: "<< arr[n-1];
    return 0;
}
