#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    int max = 1; // デフォルトの最大公約数
    int bigger = 0; // A.Bのうち大きいものを格納
    if (A >= B){
        bigger = A;
    }else{
        bigger = B;
    }

    for (int i = 1;i <= bigger;i++ ){
        if (A % i == 0 && B % i == 0){
            max = i;
        }
    }

    cout << max << endl;
}