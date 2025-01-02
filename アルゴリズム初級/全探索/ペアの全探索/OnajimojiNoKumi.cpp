#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int count = 0; // 回答の個数

    for (int i = 0;i < N;i++){
        for (int j = i + 1; j < N;j++){
            if (S.at(i) == S.at(j)){
                count++;
            }
        }
    }

    cout << count << endl;;
}