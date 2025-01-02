#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    vector<int> L(N);
    for(int i=0; i<N; ++i) {
        cin >> L[i];
    }
    // ソート
    sort(L.begin(), L.end());

    
    long long ret = 0;
    for(int i=0; i<N; ++i) {
        for (int j=i+1; j<N; ++j) {
            for (int k=j+1; k<N; ++k){
                if (L[i]+L[j] > L[k]) {
                    ret++;
                }
            }
        }
    }
    cout << ret << endl;
}