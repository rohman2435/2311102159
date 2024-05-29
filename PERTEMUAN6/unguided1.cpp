<<<<<<< HEAD
// LAPRAK 6 : UNGUIDED 1
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D

// Program Stack untuk menentukan apakah kalimat tersebut Palindrom/tidak
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack> //library untuk menggunakan stack

using namespace std;

// Fungsi untuk membersihkan Kata_159 dari spasi dan karakter non-alphanumeric
string BersihkanKata_159 (string Kata_159) {
    string KataBersih_159;
    for (char & c_159 : Kata_159) {
        if (isalpha(c_159)) { // Memeriksa apakah karakter adalah huruf
            KataBersih_159 += tolower(c_159); // Mengubah huruf menjadi huruf kecil atau bersih
        }
    }
    return KataBersih_159;
}

// Fungsi untuk memeriksa apakah sebuah string adalah palindrom
bool Palindrom_159 (string Kata_159) {
    stack<char> TumpukkanKata_159;
    int Length_159 = Kata_159.length();

    // Memasukkan setengah karakter pertama ke dalam tumpukan
    for (int i_159 = 0; i_159 < Length_159 / 2; i_159++) {
        TumpukkanKata_159.push(Kata_159[i_159]);
    }

    // Menentukan titik awal untuk membandingkan karakter kedua setengah
    int Mulai_159 = Length_159 / 2;
    if (Length_159 % 2 != 0) {
        Mulai_159++;
    }

    // Membandingkan karakter kedua setengah dengan karakter dalam tumpukan
    for (int i_159 = Mulai_159; i_159 < Length_159; i_159++) {
        if (TumpukkanKata_159.empty() || Kata_159[i_159] != TumpukkanKata_159.top()) {
            return false;
        }
        TumpukkanKata_159.pop();
    }

    return true;
}

int main() {
    char LanjutkanInputKata_159;
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PALINDROM BY ANANDA MAULUDIN AR ROKHMAN 2311102159 <<<<" << endl; // Judul Program

    do {
        // Memasukkan Kata_159 atau kalimat yang ingin dimasukkan
        string Kata_159;
        cout << "\n>> Masukkan kalimat : "; // User diminta untuk memasukan kata atau kalimat yang ingin dimasukkan
        getline(cin, Kata_159);

        // Membersihkan Kata_159 dari spasi, karakter non-alphanumeric, dan mengubah huruf menjadi huruf kecil
        string KataBersih_159 = BersihkanKata_159 (Kata_159);

        // Memeriksa apakah Kata_159 adalah palindrom setelah dibersihkan
        if (Palindrom_159 (KataBersih_159)) {
            cout << "== Kalimat tersebut adalah : Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Palindrom
        } else {
            cout << "== Kalimat tersebut adalah : Bukan Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Bukan Palindrom
        }

        cout << "[2159] Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKata_159;
        cin.ignore(); // Untuk membersihkan buffer Kata_159 sebelumnya
    } while (LanjutkanInputKata_159 == 'y' || LanjutkanInputKata_159 == 'Y'); // Untuk melanjutkan input kata atau selesai

    return 0;
}
=======
// LAPRAK 6 : UNGUIDED 1
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D

// Program Stack untuk menentukan apakah kalimat tersebut Palindrom/tidak
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack> //library untuk menggunakan stack

using namespace std;

// Fungsi untuk membersihkan Kata_159 dari spasi dan karakter non-alphanumeric
string BersihkanKata_159 (string Kata_159) {
    string KataBersih_159;
    for (char & c_159 : Kata_159) {
        if (isalpha(c_159)) { // Memeriksa apakah karakter adalah huruf
            KataBersih_159 += tolower(c_159); // Mengubah huruf menjadi huruf kecil atau bersih
        }
    }
    return KataBersih_159;
}

// Fungsi untuk memeriksa apakah sebuah string adalah palindrom
bool Palindrom_159 (string Kata_159) {
    stack<char> TumpukkanKata_159;
    int Length_159 = Kata_159.length();

    // Memasukkan setengah karakter pertama ke dalam tumpukan
    for (int i_159 = 0; i_159 < Length_159 / 2; i_159++) {
        TumpukkanKata_159.push(Kata_159[i_159]);
    }

    // Menentukan titik awal untuk membandingkan karakter kedua setengah
    int Mulai_159 = Length_159 / 2;
    if (Length_159 % 2 != 0) {
        Mulai_159++;
    }

    // Membandingkan karakter kedua setengah dengan karakter dalam tumpukan
    for (int i_159 = Mulai_159; i_159 < Length_159; i_159++) {
        if (TumpukkanKata_159.empty() || Kata_159[i_159] != TumpukkanKata_159.top()) {
            return false;
        }
        TumpukkanKata_159.pop();
    }

    return true;
}

int main() {
    char LanjutkanInputKata_159;
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PALINDROM BY ANANDA MAULUDIN AR ROKHMAN 2311102159 <<<<" << endl; // Judul Program

    do {
        // Memasukkan Kata_159 atau kalimat yang ingin dimasukkan
        string Kata_159;
        cout << "\n>> Masukkan kalimat : "; // User diminta untuk memasukan kata atau kalimat yang ingin dimasukkan
        getline(cin, Kata_159);

        // Membersihkan Kata_159 dari spasi, karakter non-alphanumeric, dan mengubah huruf menjadi huruf kecil
        string KataBersih_159 = BersihkanKata_159 (Kata_159);

        // Memeriksa apakah Kata_159 adalah palindrom setelah dibersihkan
        if (Palindrom_159 (KataBersih_159)) {
            cout << "== Kalimat tersebut adalah : Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Palindrom
        } else {
            cout << "== Kalimat tersebut adalah : Bukan Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Bukan Palindrom
        }

        cout << "[2159] Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKata_159;
        cin.ignore(); // Untuk membersihkan buffer Kata_159 sebelumnya
    } while (LanjutkanInputKata_159 == 'y' || LanjutkanInputKata_159 == 'Y'); // Untuk melanjutkan input kata atau selesai

    return 0;
}
>>>>>>> 271145339b5b9657ffd38575d3b772bcb8e925c6
