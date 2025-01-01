#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> vecN(N);

    int count = 0;

    for (int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }
    for (int i = 0;i < N;i++){
        for (int j = i + 1;j < N;j++){
            if (vecN.at(i) + vecN.at(j) <= K){
                count++;
            }
        }
    }

    cout << count << endl;
}