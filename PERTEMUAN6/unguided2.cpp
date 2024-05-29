<<<<<<< HEAD
// LAPRAK 6 : UNGUIDED 2
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D

// Program Stack untuk melakukan pembalikan terhadap kalimat
#include <iostream>
#include <string> // Library untuk menggunakan string
#include <stack>  // Library untuk struktur data stack

using namespace std;

int main() {
    char LanjutkanInputKalimat_159; // Untuk melanjutkan input kalimat
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PEMBALIKAN KALIMAT BY ANANDA MAULUDIN AR ROKHMAN 2311102159 <<<<" << endl; // Judul Program

    do {
        stack<char> CharStack_159;      // Inisialisasi stack untuk menyimpan karakter
        string Kalimat_159, KalimatDibalik_159;
        cout << "\n>> Masukkan kalimat minimal 3 kata : "; // User diminta untuk memasukan kalimat yang ingin dimasukkan, dengan minimal 3 kata
        getline(cin, Kalimat_159);  // Membaca input Kalimat_159 dari pengguna

        // Periksa apakah input valid
        if (Kalimat_159.empty()) {
            cout << "!! Input tidak boleh kosong. Silakan masukkan kalimat yang valid." << endl;
            continue;
        }

        // Menambahkan setiap karakter ke dalam stack
        for (char c_159 : Kalimat_159) {
            CharStack_159.push(c_159);
        }

        // Membalikkan kalimat dengan mengambil karakter dari stack
        while (!CharStack_159.empty()) {
            KalimatDibalik_159 += CharStack_159.top();
            CharStack_159.pop(); // Menghapus karakter teratas dari stack
        }

        cout << "== Hasil kalimat yang dibalikkan : " << KalimatDibalik_159 << endl; // Hasil kalimat yang dibalikkan

        // Menanyakan kepada user apakah ingin mencoba kalimat lain atau tidak
        cout << "[2159] Apakah Anda ingin mencoba kalimat lain? (y/n) : ";
        cin >> LanjutkanInputKalimat_159;
        cin.ignore(); // Untuk membersihkan buffer Kalimat_159 sebelumnya
    } while (LanjutkanInputKalimat_159 == 'y' || LanjutkanInputKalimat_159 == 'Y'); // Untuk melanjutkan input Kalimat_159 atau selesai

    return 0;
}
=======
// LAPRAK 6 : UNGUIDED 2
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D

// Program Stack untuk melakukan pembalikan terhadap kalimat
#include <iostream>
#include <string> // Library untuk menggunakan string
#include <stack>  // Library untuk struktur data stack

using namespace std;

int main() {
    char LanjutkanInputKalimat_159; // Untuk melanjutkan input kalimat
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PEMBALIKAN KALIMAT BY ANANDA MAULUDIN AR ROKHMAN 2311102159 <<<<" << endl; // Judul Program

    do {
        stack<char> CharStack_159;      // Inisialisasi stack untuk menyimpan karakter
        string Kalimat_159, KalimatDibalik_159;
        cout << "\n>> Masukkan kalimat minimal 3 kata : "; // User diminta untuk memasukan kalimat yang ingin dimasukkan, dengan minimal 3 kata
        getline(cin, Kalimat_159);  // Membaca input Kalimat_159 dari pengguna

        // Periksa apakah input valid
        if (Kalimat_159.empty()) {
            cout << "!! Input tidak boleh kosong. Silakan masukkan kalimat yang valid." << endl;
            continue;
        }

        // Menambahkan setiap karakter ke dalam stack
        for (char c_159 : Kalimat_159) {
            CharStack_159.push(c_159);
        }

        // Membalikkan kalimat dengan mengambil karakter dari stack
        while (!CharStack_159.empty()) {
            KalimatDibalik_159 += CharStack_159.top();
            CharStack_159.pop(); // Menghapus karakter teratas dari stack
        }

        cout << "== Hasil kalimat yang dibalikkan : " << KalimatDibalik_159 << endl; // Hasil kalimat yang dibalikkan

        // Menanyakan kepada user apakah ingin mencoba kalimat lain atau tidak
        cout << "[2159] Apakah Anda ingin mencoba kalimat lain? (y/n) : ";
        cin >> LanjutkanInputKalimat_159;
        cin.ignore(); // Untuk membersihkan buffer Kalimat_159 sebelumnya
    } while (LanjutkanInputKalimat_159 == 'y' || LanjutkanInputKalimat_159 == 'Y'); // Untuk melanjutkan input Kalimat_159 atau selesai

    return 0;
}
>>>>>>> 271145339b5b9657ffd38575d3b772bcb8e925c6
