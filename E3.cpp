#include <iostream>

using namespace std;

int MenorValor (int *A, int t, int i, int n) {
    if (t == 1) {
        if(A[i] <= n){
            return A[i];
        }
        return n;
    } else{
        if (A[i] <= A[i+1] && A[i] <= n){
            return MenorValor(A, t-1, i+1, A[i]);
        }else{
            return MenorValor(A, t-1, i+1, n);
        }
    }
}

int main() {
    int A[5] = {1,2,3,4,-5};
    cout << MenorValor(A, 5, 0, 0);
    return 0;
}
