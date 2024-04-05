// LAPRAK 1 : UNGUIDED 2
// ANANDA MAULUDIN AR ROHMAN
// 2311102159
// S1 IF-11-D

#include <iostream>
#include <cmath>

using namespace std;

char pilihan_159; // Pilihan menu sebagai data char
float x_159, y_159; // Bilangan pertama dan kedua dalam format float

void TampilkanMenu_159() { // Fungsi untuk menampilkan menu pilihan
    cout << "KALKULATOR ANANDA MAULUDIN AR";
    cout << "\n1. Hitung Penjumlahan";
    cout << "\n2. Hitung Pengurangan";
    cout << "\n3. Hitung Perkalian";
    cout << "\n4. Hitung Pembagian";
    cout << "\n5. Hitung Pangkat";
    cout << "\n0. Keluar" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan_159;
}

float LogikaPenjumlahan_159() { // Fungsi untuk penjumlahan
    cout << "\n1. HITUNG PENJUMLAHAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_159;
    cout << "Ditambah bilangan kedua : ";
    cin >> y_159;
    cout << "Hasil penjumlahan : " << x_159 + y_159 << "\n" << endl;
    return x_159 + y_159;
}

float LogikaPengurangan_159() { // Fungsi untuk pengurangan
    cout << "\n2. HITUNG PENGURANGAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_159;
    cout << "Dikurangi bilangan kedua : ";
    cin >> y_159;
    cout << "Hasil pengurangan : " << x_159 - y_159 << "\n" << endl;
    return x_159 - y_159;
}

float LogikaPerkalian_159() { // Fungsi untuk perkalian
    cout << "\n3. HITUNG PERKALIAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_159;
    cout << "Dikali bilangan kedua : ";
    cin >> y_159;
    cout << "Hasil perkalian : " << x_159 * y_159 << "\n" << endl;
    return x_159 * y_159;
}

float LogikaPembagian_159() { // Fungsi untuk pembagian
    cout << "\n4. HITUNG PEMBAGIAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_159;
    cout << "Dibagi bilangan kedua : ";
    cin >> y_159;
    if (y_159 != 0) {
        cout << "Hasil pembagian : " << x_159 / y_159 << "\n" << endl;
        return x_159 / y_159;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n" << endl;
        return 0; // Mengembalikan 0 dalam kasus pembagian dengan nol
    }
}

float LogikaPemangkatan_159() { // Fungsi untuk pemangkatan
    cout << "\n5. HITUNG PEMANGKATAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_159;
    cout << "Dipangkatkan bilangan kedua : ";
    cin >> y_159;
    cout << "Hasil pemangkatan : " << pow(x_159, y_159) << "\n" << endl;
    return pow(x_159, y_159);
}

int main() {
    do {
        TampilkanMenu_159();
        switch (pilihan_159) {
            case '1':
                LogikaPenjumlahan_159();
                break;
            case '2':
                LogikaPengurangan_159();
                break;
            case '3':
                LogikaPerkalian_159();
                break;
            case '4':
                LogikaPembagian_159();
                break;
            case '5':
                LogikaPemangkatan_159();
                break;
            case '0':
                cout << "\nProgram berakhir. Sampai jumpa, jangan lupa mencoba lagi" << endl;
                break;
            default:
                cout << "\nInput tidak valid, silakan mencoba lagi dengan nomor yang sesuai" << endl;
                return 0;
        }
    } while (pilihan_159 != '0');

    return 0;
}
