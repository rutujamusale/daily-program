/*Given an array, , of size  distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following  lines:

Array is sorted in numSwaps swaps.
where  is the numswaps that took place.
First Element: firstElement
where  is the firstelement in the sorted array.
Last Element: lastElement
where  is the lastelement in the sorted array.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,numswap=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                numswap++;

            }
        }
    }
    cout<<"Array is sorted in "<<numswap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
