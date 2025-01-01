#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> vecN(N);
    vector<int> vecM(M);

    int count = 0; // 求める個数

    for(int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }
    for(int i = 0;i < M;i++){
        cin >> vecM.at(i);
    }
    for(int i = 0; i < N; i++){
        for (int j = 0;j < M; j++){
            if (vecN.at(i) > vecM.at(j)){
                count++;
            }
        }
    }
    cout << count << endl;
}