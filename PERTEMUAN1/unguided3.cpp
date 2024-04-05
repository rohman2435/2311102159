// LAPRAK 1 : UNGUIDED 3
// ANANDA MAULUDIN AR ROHMAN
// 2311102159
// S1 IF-11-D

#include <iostream>
#include <map>

using namespace std;

// Struktur data untuk menyimpan informasi pemain sepak bola
struct PemainSepakBola {
    string nama_159;
    string klub_159;
};

int main() {
    // Deklarasi map dengan key int dan value berupa objek PemainSepakBola
    map<int, PemainSepakBola> club_159 = {
        {1, {"Bambang Pamungkas", "Persija Jakarta"}},
        {2, {"Evan Dimas", "Barito Putera"}},
        {3, {"Stefano Lilipaly", "Bali United"}},
        {4, {"Febri Haryadi", "Persebaya Surabaya"}},
        {5, {"Irfan Bachdim", "Madura United"}}
    };

    cout << "TOP SKOR PEMAIN TARKAM LIGA DANGDUD INDONESIA" << endl;

    // Perulangan for menggunakan range-based for loop
    for (const auto& entry : club_159) {
        cout << "Nomor " << entry.first << "  Atas Nama: " << entry.second.nama_159 << ",  Bermain di: " << entry.second.klub_159 << endl;
    }

    return 0;
}
