#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    long long factorial = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << factorial << endl;
    
    return 0;
}
