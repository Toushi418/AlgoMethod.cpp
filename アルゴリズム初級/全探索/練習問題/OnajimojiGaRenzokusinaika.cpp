#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.length();

    bool flag = false;
    for (int i = 0;i < N - 1;i++){
        if (S.at(i) == S.at(i + 1)){
            flag = true;
        }
    }

    if(flag){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
}