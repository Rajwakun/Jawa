#include <iostream>
#include <string>
using namespace std;

    struct mahasiswa{
	string nim;
	string nama;
	string alamat;
	float ipk;
};

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";          getline(cin, *nim);
    cout << "Nama = ";         getline(cin, *nama);
    cout << "Alamat = ";       getline(cin, *alamat);
    cout << "IPK = ";          cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasiswa &Rajwa) {
    system("cls");
    cout << "\n------------- Data Pribadi ------------- :\n";
    cout << "NIM    : " << Rajwa.nim << endl;
    cout << "Nama   : " << Rajwa.nama << endl;
    cout << "Alamat : " << Rajwa.alamat << endl;
    cout << "IPK    : " << Rajwa.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasiswa Rajwa;
    inputData(&Rajwa.nim, &Rajwa.nama, &Rajwa.alamat, &Rajwa.ipk);
    outputData(Rajwa);
    return 0;
}