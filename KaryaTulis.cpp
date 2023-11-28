#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk membalikkan string
string balikKalimat(string kalimat) {
    int panjang = kalimat.length();
    for (int i = 0; i < panjang / 2; i++) {
        swap(kalimat[i], kalimat[panjang - i - 1]);
    }
    return kalimat;
}

// Fungsi untuk mengganti ejaan sesuai aturan
string ejaanLama(string kalimat) {
    int panjang = kalimat.length();
    for (int i = 0; i < panjang; i++) {
        switch (kalimat[i]) {
            case 'u':
                kalimat[i] = 'o';
                break;
            case 'j':
                kalimat[i] = 'd';
                break;
            case 'y':
                kalimat[i] = 'j';
                break;
            case 'c':
                kalimat[i] = 't';
                break;
        }
    }
    return kalimat;
}

int main() {
    // Input kalimat dari pengguna
    cout << "Masukkan Kalimat: ";
    string kalimat;
    getline(cin, kalimat);

    // Memanggil fungsi untuk membalikkan kalimat
    string kalimatTerbalik = balikKalimat(kalimat);

    // Memanggil fungsi untuk mengganti ejaan sesuai aturan
    string kalimatEjaanLama = ejaanLama(kalimatTerbalik);

    // Menampilkan hasil akhir
    cout << "Kalimat dibalik: " << kalimatTerbalik << endl;
    cout << "Ejaan Lama: " << kalimatEjaanLama << endl;

    return 0;
}
