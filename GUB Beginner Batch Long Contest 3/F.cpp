#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) { 
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0; 
    for (int i = 0; i < n; i++) 
         sum += arr[i];
    
    cout << sum << endl;
    

}