#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count = 0;
    vector<int> vecN(N);

    for (int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }

    for (int i = 0;i < N;i++){
        int yakusuCount = 0;
        if (vecN.at(i) == 1){
            continue;
        }
        for (int j = 1; j <= vecN.at(i); j++){
            if (vecN.at(i) % j == 0){
                yakusuCount++;
            }
        }

        if(yakusuCount == 2){
            
            count++;
        }
    }

    cout << count << endl;
}