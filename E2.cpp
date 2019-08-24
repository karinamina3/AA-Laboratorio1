#include <iostream>

using namespace std;

int Potencia (int base, int n) {
    if (n == 0){
        return 1;
    } else {
        return base * Potencia(base, n-1);
    }
}

int main() {
    cout << Potencia(8,3);
    return 0;
}
