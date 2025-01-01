#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool flag = false;
    vector<string> vecS(N);
    for (int i = 0;i < N;i++){
        cin >> vecS.at(i);
    }

    for (int i = 0;i < N;i++){
        for (int j = i + 1;j < N;j++){
            if (vecS.at(i) == vecS.at(j)){
                flag = true;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}