#include<iostream>
#include <exception>
//untuk objek exeption yang akan digunakan
#include <array>
//untuk objek array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal program" << endl; //penanda 1:...
    try{
        array<int, 3> data= {10, 20, 30 };
        //pesan array integer 3 elemen
        cout << data. at (5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan objek exeption
        cout << e. what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir" << endl;
    /*Petanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
    
}