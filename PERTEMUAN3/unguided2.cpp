// LAPRAK 3 : UNGUIDED 2
// ANANDA MAULUDIN AR ROHMAN
// 2311102159
// S1 IF-11-D
#include <iostream>
using namespace std;

struct Node {
    string namaProduk;
    double harga;
    Node* prev;
    Node* next;
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoubleLinkedList() {
        head = NULL;
        tail = NULL;
    }

    // Menambah data di awal
    void tambahData(string nama, double harga) {
        Node* newNode = new Node();
        newNode->namaProduk = nama;
        newNode->harga = harga;
        newNode->prev = NULL;
        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;
        
        head = newNode;

        if (tail == NULL)
            tail = newNode;
    }

    // Menghapus data dengan nama tertentu
    void hapusData(string nama) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == nama) {
                if (current->prev != NULL)
                    current->prev->next = current->next;
                else
                    head = current->next;

                if (current->next != NULL)
                    current->next->prev = current->prev;
                else
                    tail = current->prev;

                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan" << endl;
    }

    // Update data dengan nama tertentu
    void updateData(string nama, string newNama, double newHarga) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == nama) {
                current->namaProduk = newNama;
                current->harga = newHarga;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan" << endl;
    }

    // Menambah data di urutan tertentu
    void tambahDataUrutanTertentu(string nama, double harga, string namaSetelah) {
        Node* newNode = new Node();
        newNode->namaProduk = nama;
        newNode->harga = harga;

        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == namaSetelah) {
                newNode->next = current->next;
                newNode->prev = current;
                if (current->next != NULL)
                    current->next->prev = newNode;
                else
                    tail = newNode;
                current->next = newNode;
                return;
            }
            current = current->next;
        }
        cout << "Produk setelahnya tidak ditemukan" << endl;
    }

    // Menampilkan semua data
    void tampilkanData() {
        Node* current = head;
        cout << "Nama Produk\tHarga" << endl;
        while (current != NULL) {
            cout << current->namaProduk << "\t\t" << current->harga << endl;
            current = current->next;
        }
    }

    // Mencari produk berdasarkan harga
    void cariProdukBerdasarkanHarga(double harga) {
        Node* current = head;
        bool found = false;
        cout << "Produk dengan harga " << harga << ":" << endl;
        while (current != NULL) {
            if (current->harga == harga) {
                cout << current->namaProduk << endl;
                found = true;
            }
            current = current->next;
        }
        if (!found) {
            cout << "Tidak ada produk dengan harga tersebut." << endl;
        }
    }

    // Hapus semua data
    void hapusSeluruhData() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
        tail = NULL;
    }
};

int main() {
    DoubleLinkedList list;
    list.tambahData("bumbu", 5000);
    list.tambahData("kecap", 1000);
    list.tambahData("Sarimi", 3000);
    list.tambahData("Win clic", 23500);
    list.tambahData("Teh Gelas", 1000);
    
    int choice;
    string nama, newNama, namaSetelah;
    double harga, newHarga;

    do {
        cout << "\nToko SRC ITTP\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Update Data\n";
        cout << "4. Tambah Data Urutan Tertentu\n";
        cout << "5. Cari Produk Berdasarkan Harga\n";
        cout << "6. Hapus Seluruh Data\n";
        cout << "7. Tampilkan Data\n";
        cout << "8. Exit\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama produk: ";
                cin >> nama;
                cout << "Masukkan harga produk: ";
                cin >> harga;
                list.tambahData(nama, harga);
                break;
            case 2:
                cout << "Masukkan nama produk yang akan dihapus: ";
                cin >> nama;
                list.hapusData(nama);
                break;
            case 3:
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> nama;
                cout << "Masukkan nama baru: ";
                cin >> newNama;
                cout << "Masukkan harga baru: ";
                cin >> newHarga;
                list.updateData(nama, newNama, newHarga);
                break;
            case 4:
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> nama;
                cout << "Masukkan harga produk: ";
                cin >> harga;
                cout << "Masukkan nama produk setelahnya: ";
                cin >> namaSetelah;
                list.tambahDataUrutanTertentu(nama, harga, namaSetelah);
                break;
            case 5:
                cout << "Masukkan harga produk yang ingin dicari: ";
                cin >> harga;
                list.cariProdukBerdasarkanHarga(harga);
                break;
            case 6:
                list.hapusSeluruhData();
                cout << "Semua data telah dihapus." << endl;
                break;
            case 7:
                list.tampilkanData();
                break;
            case 8:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 8);

    return 0;
}
