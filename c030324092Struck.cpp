#include "conio.h"
#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

struct mahasiswa
{
    int ipk;
    string nim;
    string nama;
    string alamat;
    string jurusan;
    string kelas;
};


int main() {
    struct mahasiswa Rajwa;
    Rajwa.ipk = 4;
    Rajwa.nim = "C030324092";
    Rajwa.nama = "Rajwa";
    Rajwa.alamat = "Handil";
    Rajwa.jurusan = "TI";
    Rajwa.kelas = "Kelas 2B";
    

    cout << "NIM: " << Rajwa.nim << endl;
    cout << "IPK: " << Rajwa.ipk << endl;
    cout << "Nama: " << Rajwa.nama << endl;
    cout << "Rajwaat: " << Rajwa.alamat << endl;
    cout << "Jurusan: " << Rajwa.jurusan << endl;
    cout << "Kelas: " << Rajwa.kelas << endl;
}