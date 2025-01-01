#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y , Z;
    cin >> X >> Y >> Z;
    vector<int> vecX(X);
    vector<int> vecY(Y);
    vector<int> vecZ(Z);

    for (int i = 0;i < X;i++)
    {
        cin >> vecX.at(i);
    }
    for (int i = 0;i < Y;i++)
    {
        cin >> vecY.at(i);
    }
    for (int i = 0;i < Z;i++)
    {
        cin >> vecZ.at(i);
    }

    int count = 0; // 回答となる条件を満たす組の個数

    for (int i = 0;i < X;i++){
        for (int j = 0; j < Y;j++){
            for (int k = 0;k < Z;k++){
                if (vecX.at(i) + vecY.at(j) == vecZ.at(k)){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}