#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++){
        int A;
        cin >> A;
        if (A > 0){
            count++;
        }
    }

    cout << count++ << endl;
}