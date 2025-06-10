#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;
    string NamaFile;
    cout << "Masukkan nama file :" ;
    cin >> NamaFile;
    //Membuka file dalam mode menulis.
    ofstream outfile;
    // Menunjuk ake sebuah nama file
    outfile.open (NamaFile + ",txt" , ios::out);
    cout << ">= Menulis file, \'q\'untuk keluar" << endl;
    //unlimited loop untuk menuis
    while(true) {
        cout << "-";
        // mendapatkan setiap karakter daalm satu baris
        getline (cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
}