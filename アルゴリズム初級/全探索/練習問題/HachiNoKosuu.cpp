#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin>> N;

    int ans = 0;
    vector<int> vecN(N);

    for (int i = 0;i < N;i++){
        cin >> vecN.at(i);
    }

    
    int iterator = *std::max_element(vecN.begin(), vecN.end());

    for (int i = 0;i < N;i++){
        if (vecN.at(i) == iterator){
            ans = i;
        }
    }

    cout << ans << endl;
}