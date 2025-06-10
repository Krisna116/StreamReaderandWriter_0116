#include <iostream>
using namespace std;

int main () {
    try{
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernytssn tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selian integer maka blok ini akan diekskusi*/
        cout << "Default pengecualian dieksekusi" << endl;

    }
    return 0;

}