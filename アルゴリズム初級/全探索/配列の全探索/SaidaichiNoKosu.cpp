#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> listA(N);
    int count = 1;

    for (int i = 0;i < N; i++){
        cin >> listA.at(i);
        
    }
    sort(listA.rbegin(), listA.rend());
    for (int i = 0;i < N - 1; i++){
        if (listA.at(i) == listA.at(i + 1)){
        count++; 
        } else {
            break;
        }

    
    }
    cout << count << endl;
}