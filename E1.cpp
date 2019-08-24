#include <iostream>

using namespace std;

int Suma(int *A, int *B, int n, int *C) {
    if (n <= -1) {
        return 0;
    } else {
        C[n] = A[n] + B[n];            
        return  C[n] + Suma(A, B, n-1, C);
    } 
}

int main() {
    int A[9] = {2,0,1,3,0,0,5,1,1};
    int B[9] = {1,0,1,1,2,1,1,1,0};
    int C[9]; 
    int i = 1;
    Suma(A, B, 8, C);
    for (int j = 0; j < 9; j++){
        cout << C[j] << ' ';
        if (i == 3) {
            cout << endl;
            i = 0;
        }
        i++;
    }
    return 0;
}
