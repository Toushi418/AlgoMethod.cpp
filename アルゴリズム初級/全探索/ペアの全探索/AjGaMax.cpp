#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vecN(N);
    for (int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }

    int count = 0;

    for (int i = 0;i < N;i++){
        for (int j = i + 1;j < N;j++){
            for(int k = j + 1;k< N;k++){
                if (vecN.at(i) <= vecN.at(j) && vecN.at(j) >= vecN.at(k)){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}