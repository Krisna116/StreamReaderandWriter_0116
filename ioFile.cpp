#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << " >= Menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while(true) {
        cout << "-";
        // mendapatkan setiap karakter daalm satu baris
        getline (cin, baris);
        // loop akan berhenti jika anda memasukkan karakter
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selwsai dalam menukis sekarang tutup filennya
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open ("contohfile.txt");
    cout << endl << ">= Membuka dan membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setipa baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file setelah selesai
        infile.close();
    }
    //jika file tidak ada
    else{
        cout << "Unable to aopen file" << endl;
        return 0;
    }

}
