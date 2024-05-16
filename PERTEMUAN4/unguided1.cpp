// LAPRAK 4 : UNGUIDED 
// ANANDA MAULUDIN AR
// 2311102159
// S1 IF-11-D

// Program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa
#include <iostream>
#include <iomanip> // untuk mengatur format output, seperti mengatur presisi desimal, lebar bidang, dan tata letak output

using namespace std;

// Deklarasi Struct Node
struct Node {
    string Nama_159; // Menyimpan Nama
    string NIM_159; // Menyimpan NIM
    Node *next_159; // Pointer ke node berikutnya dalam linked list
};

Node *head_159; // Pointer ke node awal dari linked list
Node *tail_159; // Pointer ke node terakhir dari linked list

// Inisialisasi linked list
void init_159() {
    head_159 = nullptr;
    tail_159 = nullptr;
}

// Pengecekan apakah linked list kosong atau tidak
bool isEmpty_159() {
    return head_159 == nullptr;
}

// Tambah Node di depan linked list
void insertDepan_159(const string& Nama_159, const string& NIM_159) {
    Node *baru_159 = new Node;
    baru_159->Nama_159 = Nama_159;
    baru_159->NIM_159 = NIM_159;
    baru_159->next_159 = head_159;

    if (isEmpty_159()) {
        tail_159 = baru_159;
    }

    head_159 = baru_159;
}

// Tambah Node di belakang linked list
void insertBelakang_159(const string& Nama_159, const string& NIM_159) {
    Node *baru_159 = new Node;
    baru_159->Nama_159 = Nama_159;
    baru_159->NIM_159 = NIM_159;
    baru_159->next_159 = nullptr;

    if (isEmpty_159()) {
        head_159 = tail_159 = baru_159;
    } else {
        tail_159->next_159 = baru_159;
        tail_159 = baru_159;
    }
}

// Menghitung jumlah Node dalam linked list
int hitungList_159() {
    int jumlah_159 = 0;
    for (Node *current = head_159; current != nullptr; current = current->next_159) {
        jumlah_159++;
    }
    return jumlah_159;
}

// Tambah Node di posisi tertentu dalam linked list
void insertTengah_159(const string& Nama_159, const string& NIM_159, int posisiNama_159) {
    if (posisiNama_159 < 2 || posisiNama_159 > hitungList_159()) {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    }

    Node *baru_159 = new Node;
    baru_159->Nama_159 = Nama_159;
    baru_159->NIM_159 = NIM_159;

    Node *current = head_159;
    for (int i = 1; i < posisiNama_159 - 1; i++) {
        current = current->next_159;
    }

    baru_159->next_159 = current->next_159;
    current->next_159 = baru_159;
}

// Hapus Node di depan linked list
void hapusDepan_159() {
    if (isEmpty_159()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *hapus_159 = head_159;
    head_159 = head_159->next_159;
    delete hapus_159;

    if (head_159 == nullptr) {
        tail_159 = nullptr;
    }
}

// Hapus Node di belakang linked list
void hapusBelakang_159() {
    if (isEmpty_159()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (head_159 == tail_159) {
        delete head_159;
        head_159 = tail_159 = nullptr;
    } else {
        Node *current = head_159;
        while (current->next_159 != tail_159) {
            current = current->next_159;
        }
        delete tail_159;
        tail_159 = current;
        tail_159->next_159 = nullptr;
    }
}

// Hapus Node di posisi tertentu dalam linked list
void hapusTengah_159(int posisi_159) {
    if (posisi_159 < 2 || posisi_159 > hitungList_159()) {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    }

    Node *current = head_159;
    for (int i = 1; i < posisi_159 - 1; i++) {
        current = current->next_159;
    }

    Node *hapus_159 = current->next_159;
    current->next_159 = hapus_159->next_159;
    delete hapus_159;
}

// Ubah Node di depan linked list
void ubahDepan_159(const string& Nama_159, const string& NIM_159) {
    if (isEmpty_159()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    head_159->Nama_159 = Nama_159;
    head_159->NIM_159 = NIM_159;
}

// Ubah Node di belakang linked list
void ubahBelakang_159(const string& Nama_159, const string& NIM_159) {
    if (isEmpty_159()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    tail_159->Nama_159 = Nama_159;
    tail_159->NIM_159 = NIM_159;
}

// Ubah Node di posisi tertentu dalam linked list
void ubahTengah_159(const string& Nama_159, const string& NIM_159, int posisiNama_159) {
    if (posisiNama_159 < 2 || posisiNama_159 > hitungList_159()) {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    }

    Node *current = head_159;
    for (int i = 1; i < posisiNama_159; i++) {
        current = current->next_159;
    }

    current->Nama_159 = Nama_159;
    current->NIM_159 = NIM_159;
}

// Menghapus seluruh Node dalam linked list
void clearList_159() {
    while (!isEmpty_159()) {
        hapusDepan_159();
    }
}

// Menampilkan seluruh Node dalam linked list
void tampilList_159() {
    if (isEmpty_159()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    cout << left << setw(20) << "Nama" << "NIM" << endl;
    for (Node *current = head_159; current != nullptr; current = current->next_159) {
        cout << left << setw(20) << current->Nama_159 << current->NIM_159 << endl;
    }
}

// Fungsi utama main
int main() {
    int pilihan_159;
    string Nama_159, NIM_159;
    int posisi_159;

    do {
        cout << "\nMenu Linked List Non Circular\n";
        cout << "1. Tambah Depan\n";
        cout << "2. Tambah Belakang\n";
        cout << "3. Tambah Tengah\n";
        cout << "4. Hapus Depan\n";
        cout << "5. Hapus Belakang\n";
        cout << "6. Hapus Tengah\n";
        cout << "7. Ubah Depan\n";
        cout << "8. Ubah Belakang\n";
        cout << "9. Ubah Tengah\n";
        cout << "10. Tampil List\n";
        cout << "11. Clear List\n";
        cout << "12. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan_159;

        cin.ignore(); // Mengabaikan newline character setelah input pilihan
        switch (pilihan_159) {
            case 1:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                insertDepan_159(Nama_159, NIM_159);
                break;
            case 2:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                insertBelakang_159(Nama_159, NIM_159);
                break;
            case 3:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                cout << "Posisi: ";
                cin >> posisi_159;
                insertTengah_159(Nama_159, NIM_159, posisi_159);
                cin.ignore(); // Mengabaikan newline character setelah input posisi
                break;
            case 4:
                hapusDepan_159();
                break;
            case 5:
                hapusBelakang_159();
                break;
            case 6:
                cout << "Posisi: ";
                cin >> posisi_159;
                hapusTengah_159(posisi_159);
                cin.ignore(); // Mengabaikan newline character setelah input posisi
                break;
            case 7:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                ubahDepan_159(Nama_159, NIM_159);
                break;
            case 8:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                ubahBelakang_159(Nama_159, NIM_159);
                break;
            case 9:
                cout << "Nama: ";
                getline(cin, Nama_159);
                cout << "NIM: ";
                getline(cin, NIM_159);
                cout << "Posisi: ";
                cin >> posisi_159;
                ubahTengah_159(Nama_159, NIM_159, posisi_159);
                cin.ignore(); // Mengabaikan newline character setelah input posisi
                break;
            case 10:
                tampilList_159();
                break;
            case 11:
                clearList_159();
                break;
            case 12:
                cout << "Keluar dari program\n";
                break;
            default:
                cout << "Pilihan tidak valid\n";
        }
    } while (pilihan_159 != 12);

    return 0;
}
