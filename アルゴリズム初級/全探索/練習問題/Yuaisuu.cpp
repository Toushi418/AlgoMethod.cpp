#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int sumOfDivisorNotN(int n) {
    

    int sum = 0;

    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main() {
    int a, b;
    cin >> a >> b;

    if (a == sumOfDivisorNotN(b) && b == sumOfDivisorNotN(a) && a != b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}