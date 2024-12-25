#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    bool flag = false; 
    for (int i = 0;i < N; i++){
        int A = 0;
        cin >> A;
        if (V == A){
            flag = true;
        }
    }

    if (flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}