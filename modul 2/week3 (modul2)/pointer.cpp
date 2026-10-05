#include <iostream>
using namespace std;

int main() {
    int angka = 100;

    int *pointer;

    pointer = &angka;

    cout << "nilai angka: " << angka << endl;
    cout << "alamat angka: " << &angka << endl;
    cout << "isi pointer: " << pointer << endl;
    cout << "Nilai dari pointer: " << *pointer << endl;

    return 0;
}