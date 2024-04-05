// LAPRAK 2 : UNGUIDED 3
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D
#include <iostream>
#include <iomanip>
#include <cstdlib> // Untuk random
#include <ctime> // Untuk waktu

using namespace std;

// Fungsi untuk mencari nilai maksimum
int Mauludin_Maksimum(const int array_159[], int size_159, int& lokasi_159) {
    int maks_159 = array_159[0];
    lokasi_159 = 0;
    for (int i_159 = 1; i_159 < size_159; ++i_159) {
        if (array_159[i_159] > maks_159) {
            maks_159 = array_159[i_159];
            lokasi_159 = i_159;
        }
    }
    return maks_159;
}

// Fungsi untuk mencari nilai minimum
int Mauludin_Minimum(const int array_159[], int size_159, int& lokasi_159) {
    int min_159 = array_159[0];
    lokasi_159 = 0;
    for (int i_159 = 1; i_159 < size_159; ++i_159) {
        if (array_159[i_159] < min_159) {
            min_159 = array_159[i_159];
            lokasi_159 = i_159;
        }
    }
    return min_159;
}

// Fungsi untuk mencari nilai rata-rata atau Average
double Mauludin_Average(const int array_159[], int size_159) {
    int total_159 = 0;
    for (int i_159 = 0; i_159 < size_159; ++i_159) {
        total_159 += array_159[i_159];
    }
    return static_cast<double>(total_159) / size_159;
}

int main() {
    int n_159;
    cout << "Masukkan panjang array: ";
    cin >> n_159;

    int array_159[n_159];
    cout << "Pilihan: \n1. Input manual\n2. Random\n";
    int pilihanInput;
    cin >> pilihanInput;

    if (pilihanInput == 1) {
        cout << "Masukkan " << n_159 << " angka\n";
        for (int i_159 = 0; i_159 < n_159; ++i_159) {
            cout << "Array ke-" << i_159 << ": ";
            cin >> array_159[i_159];
        }
    } else if (pilihanInput == 2) {
        srand(time(0)); // Untuk inisialisasi seed dengan waktu saat ini
        cout << "Array random dengan " << n_159 << " angka: \n";
        for (int i_159 = 0; i_159 < n_159; ++i_159) {
            array_159[i_159] = rand() % 100; // Angka random antara 0 sampai 99
            cout << array_159[i_159] << " ";
        }
        cout << endl;
    } else {
        cout << "Pilihan tidak valid. Keluar dari program.\n";
        return 0;
    }

    int Pilihan_159;
    int lokasi_159;
    do {
        cout << "\nMENU OPERASI ARRAY ANANDA MAULUDIN AR ROKHMAN:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih Nomor: ";
        cin >> Pilihan_159;

        switch (Pilihan_159) {
            case 1:
                cout << "Nilai maksimum adalah: " << Mauludin_Maksimum(array_159, n_159, lokasi_159) << " \nberada di Array ke-" << lokasi_159 << endl;
                break;
            case 2:
                cout << "Nilai minimum adalah: " << Mauludin_Minimum(array_159, n_159, lokasi_159) << " \nberada di Array ke-" << lokasi_159 << endl;
                break;
            case 3:
                cout << "Nilai rata-rata adalah: " << fixed << setprecision(2) << Mauludin_Average(array_159, n_159) << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini!\n";
                break;
            default:
                cout << "Pilihan tidak valid, Silahkan coba lagi menggunakan nomor yang tersedia!\n";
        }
    } while (Pilihan_159 != 4);
    return 0;
}
