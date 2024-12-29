#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 1){
        cout << "No" << endl;
        return 0;
    }
    double root = sqrt(N);
    bool flag = true;
    
    // cout << (int)root << endl;
    for (int i = 2;i <= (int)root;i++){
        if (N % i == 0){
            flag = false;
        }
    }

    if (flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}