#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> listA(N);
    for (int i = 0;i < N;i++){
        cin >> listA.at(i);
    }

    sort(listA.rbegin(), listA.rend());

    cout << listA.at(0) << endl;
}