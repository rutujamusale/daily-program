#include <iostream>

using namespace std;

void fibonacci(int n, int *fn, int *fn1) {
    // Complete the function.
    if(n==1){
        *fn=1;
        *fn1=0;
        return;
    }
    int fn_, fn1_;
    fibonacci(n-1, &fn_, &fn1_);
    *fn = fn_+fn1_;
    *fn1 = fn_;
}
int main() {
    int n;
    int fn, fn1;
    cin >> n;
    fibonacci(n,&fn,&fn1);
    cout << fn;
    return 0;
}
