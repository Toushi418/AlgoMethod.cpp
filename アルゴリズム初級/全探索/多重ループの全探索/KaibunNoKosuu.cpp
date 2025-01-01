#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    vector<string> vecS(N);
    for (int i = 0;i < N;i++){
        cin >> vecS.at(i);
    }

    for (int i = 0;i < N;i++){
        string vecScopy = vecS.at(i);
        reverse(vecS[i].begin(), vecS[i].end());
        if (vecScopy == vecS[i]){
            count++;
        }
    }

    cout << count << endl;

    // reverse(配列変数.begin(), 配列変数.end()) 配列を逆順にする。（参照渡し系なので元の配列に影響）
}