#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah vokal
bool isVowel_159(char Karakter_159) {
    // Konversi karakter menjadi huruf kecil
    Karakter_159 = tolower(Karakter_159);
    // Periksa apakah karakter adalah salah satu dari 'a', 'e', 'i', 'o', 'u'
    return (Karakter_159 == 'a' || Karakter_159 == 'e' || Karakter_159 == 'i' || Karakter_159 == 'o' || Karakter_159 == 'u');
}

// Fungsi untuk menghitung banyaknya huruf vokal dalam sebuah kalimat
int countVowels_159(const string &Kalimat_159) {
    int Count_159 = 0;
    for (char Karakter_159 : Kalimat_159) {
        if (isVowel_159(Karakter_159)) {
            Count_159++;
        }
    }
    return Count_159;
}

int main() {
    string Kalimat_159;
    cout << "\n===== SELAMAT DATANG DI PROGRAM MENCARI KALIMAT VOKAL BY ANANDA MAULUDIN AR ROKHMAN =====";
    cout << "\n>> Masukkan sebuah kalimat : ";
    getline(cin, Kalimat_159); // Membaca input kalimat dari pengguna

    int vowelCount_159 = countVowels_159(Kalimat_159);
    cout << "[2159] Banyaknya huruf vokal dalam kalimat adalah : " << vowelCount_159 << endl;
    return 0;
}
