#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    char c;
    cin >> S >> c;
    bool flag = false;
    int sizeOfS = S.size();
    for (int i = 0;i < sizeOfS;i++){
        if (S.at(i) == c){
            flag = true;
        }
    }

    if (flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}