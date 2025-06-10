#include <iostream>
using namespace std;

int main () {
    try{
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernytssn tidak akan dieksekusi" << endl;
    }
}