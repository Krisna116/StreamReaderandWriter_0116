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
}