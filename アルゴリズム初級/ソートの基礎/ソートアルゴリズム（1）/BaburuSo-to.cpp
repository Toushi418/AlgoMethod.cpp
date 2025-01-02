#include <iostream>
#include <vector>
using namespace std;


void coutArray(vector<int> A) {
    for (int i=0; i<A.size(); i++) {
        cout << A[i];
        if (i!=A.size()-1) cout << " ";
        else cout << endl;
    }
}

int main() {
    
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) cin >> A[i];

    
    for (int lp=0; lp<N; lp++) {
        bool flag = false;
        for (int i=0; i<N-1; i++) {
            if (A[i]>A[i+1]) {
                flag = true;
                swap(A[i], A[i+1]);
            }
        }

        if (flag) coutArray(A);
        else break;
    }
}