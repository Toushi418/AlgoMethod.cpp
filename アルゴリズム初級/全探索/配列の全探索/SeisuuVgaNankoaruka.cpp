
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;

    int count = 0;
    for (int i = 0; i < N; i++){
        int A;
        cin >> A;

        if (V == A){
            count++;
        }
    }
    cout << count << endl;
}