#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,n,mx = INT_MAX;
    vector<int> ar;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(int i = 0; i < ar.size() - 1; i++){
        if(ar[i+1]-ar[i] < mx)mx = ar[i+1]-ar[i];
    }
    cout << mx << endl;
    return 0;
}
