#include <iostream>
#include <string> // Untuk memanipulasi string ke variable tujuan
#include <vector> // untuk menggunakan struktur data vektor
#include <iomanip> // Untuk mengatur format tabel bidang dalam output

using namespace std;

// Konstanta untuk ukuran tabel hash
const int TABLE_SIZE = 100;

// Kelas HashNode untuk menampung data mahasiswa
class HashNode
{
public:
    string Nama_159; // Menyimpan Nama
    string NIM_159; // Menyimpan NIM
    int Nilai_159; // Menyimpan Nilai

    // Konstruktor untuk inisialisasi data mahasiswa
    HashNode(string Nama_159, string NIM_159, int Nilai_159)
    {
        this->Nama_159 = Nama_159;
        this->NIM_159 = NIM_159;
        this->Nilai_159 = Nilai_159;
    }
};

// Kelas HashMap untuk mengelola data mahasiswa dalam tabel hash
class HashMap
{
private:
    vector<HashNode *> table_159[TABLE_SIZE]; // Tabel hash untuk menyimpan data

public:
    // Fungsi hash untuk menghitung nilai hash dari kunci (nama)
    int hashFunc(string key)
    {
        int hash_val = 0;
        for (char c : key)
        {
            hash_val += c; // Menambahkan nilai ASCII dari setiap karakter
        }
        return hash_val % TABLE_SIZE; // Mengembalikan nilai hash yang terbatas pada ukuran tabel
    }

    // Fungsi untuk memasukkan data mahasiswa ke dalam tabel hash
    void insert(string Nama_159, string NIM_159, int Nilai_159)
    {
        int hash_val = hashFunc(Nama_159);                               // Mendapatkan nilai hash dari nama mahasiswa
        HashNode *node_159 = new HashNode(Nama_159, NIM_159, Nilai_159); // Membuat objek HashNode baru
        table_159[hash_val].push_back(node_159);                         // Menambahkan data mahasiswa ke dalam tabel
        cout << "----------------------------------------------------------\n";
        cout << "Data Mahasiswa dengan Nama " << Nama_159 << " berhasil ditambahkan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk menghapus data mahasiswa dari tabel hash
    void remove(string Nama_159)
    {
        int hash_val = hashFunc(Nama_159); // Mendapatkan nilai hash dari nama mahasiswa
        for (auto it = table_159[hash_val].begin(); it != table_159[hash_val].end(); ++it)
        {
            if ((*it)->Nama_159 == Nama_159)
            {                                  // Memeriksa apakah nama mahasiswa sesuai
                delete *it;                    // Menghapus objek HashNode
                table_159[hash_val].erase(it); // Menghapus elemen dari vektor
                cout << "----------------------------------------------------------\n";
                cout << "Data Mahasiswa dengan nama " << Nama_159 << " berhasil dihapus." << endl;
                cout << "==========================================================\n";
                return;
            }
        }
        cout << "----------------------------------------------------------\n";
        cout << "Data Mahasiswa dengan nama " << Nama_159 << " tidak ditemukan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NIM
    void searchByNIM(string NIM_159)
    {
        bool found_159 = false;
        for (int i_159 = 0; i_159 < TABLE_SIZE; ++i_159)
        {
            for (auto node_159 : table_159[i_159])
            {
                if (node_159->NIM_159 == NIM_159)
                {                         // Memeriksa apakah NIM sesuai
                    displayHeader();      // Menampilkan header tabel
                    displayRow(node_159); // Menampilkan baris data mahasiswa
                    found_159 = true;
                    return;
                }
            }
        }
        cout << "----------------------------------------------------------\n";
        cout << "Mahasiswa dengan NIM " << NIM_159 << " tidak ditemukan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan rentang nilai
    void CariRentangNilai(int NilaiMin_159, int NilaiMax_159)
    {
        bool found_159 = false;
        displayHeader(); // Menampilkan header tabel
        for (int i_159 = 0; i_159 < TABLE_SIZE; ++i_159)
        {
            for (auto node_159 : table_159[i_159])
            {
                if (node_159->Nilai_159 >= NilaiMin_159 && node_159->Nilai_159 <= NilaiMax_159)
                {                         // Memeriksa rentang nilai
                    displayRow(node_159); // Menampilkan baris data mahasiswa
                    found_159 = true;
                }
            }
        }
        if (!found_159)
        {
            cout << "----------------------------------------------------------\n";
            cout << "Tidak ada data Mahasiswa dengan rentang nilai " << NilaiMin_159 << " sampai " << NilaiMax_159 << "." << endl;
            cout << "==========================================================\n";
        }
    }
    // Fungsi untuk menampilkan footer penutup tabel
    void displayFooter()
    {
        cout << "==========================================================\n";
    }

    // Fungsi untuk menampilkan header tabel
    void displayHeader()
    {
        cout << "==========================================================\n";
        cout << "|                       DATA MAHASISWA                   |\n";
        cout << "==========================================================\n";
        cout << "|          NAMA          |        NIM        |   NILAI   |\n";
        cout << "==========================================================\n";
    }

    // Fungsi untuk menampilkan baris data mahasiswa
    void displayRow(HashNode *node_159)
    {
        cout << "| " << left << setw(23) << node_159->Nama_159            // Menampilkan nama
             << "| " << left << setw(18) << node_159->NIM_159             // Menampilkan NIM
             << "| " << left << setw(9) << node_159->Nilai_159 << " |\n"; // Menampilkan nilai
    }

    // Fungsi untuk menampilkan semua data mahasiswa
    void tampilkanSemuaData()
    {
        bool found = false;
        displayHeader(); // Menampilkan header tabel
        for (int i = 0; i < TABLE_SIZE; ++i)
        {
            for (auto node : table_159[i])
            {
                displayRow(node); // Menampilkan baris data mahasiswa
                found = true;
            }
        }
        displayFooter(); // Menampilkan footer penutup tabel
        if (!found)
        {
            cout << "Tidak ada data yang tersimpan." << endl;
        }
    }
};

int main()
{
    HashMap hmap_159; // Membuat objek HashMap
    int Pilihan_159;
    string Nama_159, NIM_159;
    int nilai, NilaiMin_159, NilaiMax_159;

    // Menu utama program
    do
    {
        cout << "\n==========================================================\n";
        cout << ">>>>>>> MENU PROGRAM MAHASISWA BY Ananda Mauludin Ar Rokhman <<<<<<<\n";
        cout << "==========================================================\n";
        cout << "1. TAMBAH DATA MAHASISWA\n";
        cout << "2. MENGHAPUS DATA MAHASISWA\n";
        cout << "3. MENCARI DATA BERDASARKAN NIM MAHASISWA\n";
        cout << "4. MENCARI DATA BERDASARKAN RENTANG NILAI MAHASISWA\n";
        cout << "5. TAMPILKAN SEMUA DATA\n";
        cout << "6. KELUAR\n";
        cout << "==========================================================\n";
        cout << "Masukkan pilihan: ";
        cin >> Pilihan_159; // Meminta input dari pengguna
        cout << endl;
        switch (Pilihan_159)
        {
        case 1: // Untuk pilihan menu menambah data mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<<<<<<<<<< TAMBAH DATA MAHASISWA >>>>>>>>>>>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nama : ";
            cin >> ws;
            getline(cin, Nama_159); // Meminta input nama mahasiswa
            cout << "Masukkan NIM  : ";
            cin >> NIM_159; // Meminta input NIM mahasiswa
            cout << "Masukkan Nilai: ";
            cin >> nilai;                              // Meminta input nilai mahasiswa
            hmap_159.insert(Nama_159, NIM_159, nilai); // Memanggil fungsi untuk memasukkan data mahasiswa
            break;
        case 2: // Untuk pilihan menu menghapus data mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<<<<<<<<< MENGHAPUS DATA MAHASISWA >>>>>>>>>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nama Mahasiswa untuk dihapus : ";
            cin >> ws;
            getline(cin, Nama_159);    // Meminta input nama mahasiswa yang akan dihapus
            hmap_159.remove(Nama_159); // Memanggil fungsi untuk menghapus data mahasiswa
            break;
        case 3: // Untuk pilihan menu Mencari data berdasarkan NIM mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<< MENCARI DATA BERDASARKAN NIM MAHASISWA >>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan NIM Mahasiswa untuk dicari : ";
            cin >> NIM_159;                // Meminta input NIM mahasiswa yang akan dicari
            hmap_159.searchByNIM(NIM_159); // Memanggil fungsi untuk mencari data berdasarkan NIM
            break;
        case 4: // Untuk pilihan menu Mencari data berdasarkan Rentang nilai mahasiswa
            cout << "==========================================================\n";
            cout << "<<<< MENCARI DATA BERDASARKAN RENTANG NILAI MAHASISWA >>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nilai Minimum  : ";
            cin >> NilaiMin_159; // Meminta input nilai minimum
            cout << "Masukkan Nilai Maksimum : ";
            cin >> NilaiMax_159;                                   // Meminta input nilai maksimum
            hmap_159.CariRentangNilai(NilaiMin_159, NilaiMax_159); // Memanggil fungsi untuk mencari data berdasarkan rentang nilai
            break;
        case 5: // Untuk pilihan menu Menampilkan semua data
            hmap_159.tampilkanSemuaData(); // Memanggil fungsi untuk menampilkan semua data
            break;
        case 6: // Untuk pilihan Keluar menu
            cout << "Terima kasih telah menggunakan program ini." << endl; // Pesan penutup
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih sesuai nomor pada menu." << endl; // Pesan kesalahan
        }
    } while (Pilihan_159 != 6); // Melanjutkan program sampai pengguna memilih untuk keluar

    return 0; // Mengakhiri program
}
