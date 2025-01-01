#include <bits/stdc++.h>
using namespace std;

int countOfYakusu(int n){
    int N = n;
    

    int count = 0;

    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            count++;
        }
    }
    // cout << count << endl;
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0;

    
    for (int i = 1;i <= N;i++){
        int iOfYakusu = countOfYakusu(i);
        if (iOfYakusu == K){
            count++;
        }
    }

    cout << count << endl;
}