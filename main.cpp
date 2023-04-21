#include <iostream>
#include "myHeader.hpp"

using namespace std;



int main() {
    int A, B;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    int resultado = soma(A, B);

    cout << "A soma de todos os números compreendidos entre " << A << " e " << B << " é " << resultado << endl;

    return 0;
}
