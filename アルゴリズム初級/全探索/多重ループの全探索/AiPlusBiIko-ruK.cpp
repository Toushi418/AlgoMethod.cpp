#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,K;
    cin >> N >> M >> K;

    vector<int> vecN(N);
    vector<int> vecM(M);
    for (int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }
    for (int i = 0;i < M;i++){
        cin >> vecM.at(i);
    }
    int count = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (vecN[i] + vecM[j] == K){
                count++;
            }
        }
    }
    cout << count << endl;
}