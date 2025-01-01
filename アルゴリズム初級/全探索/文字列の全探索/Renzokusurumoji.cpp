#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int count = 0;
    int sizeOfS = S.length();
    char temp;
    for (int i = 0;i < sizeOfS;i++){
        if (S.at(i) == temp){
            count++;
        }
        temp = S.at(i);
    }

    cout << count << endl;
}