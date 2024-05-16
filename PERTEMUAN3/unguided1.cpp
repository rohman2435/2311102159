// LAPRAK 3 : UNGUIDED 1
// ANANDA MAULUDIN AR
// 2311102159
// S1 IF-11-D
#include <iostream>
using namespace std;

struct Node {
    string nama_159;
    int usia_159;
    Node* next_159;
};

Node* head_159 = nullptr;

void tampilkanList_159() {
    cout << "[ Nama ]" << "\t" << "[ Usia ]" << endl;
    Node* saatIni_159 = head_159;
    while (saatIni_159 != nullptr) {
        cout << saatIni_159->nama_159 << "\t\t" << saatIni_159->usia_159 << endl;
        saatIni_159 = saatIni_159->next_159;
    }
}

void insertDepan_159(string nama_159, int usia_159) {
    Node* baru_159 = new Node;
    baru_159->nama_159 = nama_159;
    baru_159->usia_159 = usia_159;
    baru_159->next_159 = head_159;
    head_159 = baru_159;
}

void insertBelakang_159(string nama_159, int usia_159) {
    Node* baru_159 = new Node;
    baru_159->nama_159 = nama_159;
    baru_159->usia_159 = usia_159;
    baru_159->next_159 = nullptr;
    if (head_159 == nullptr) {
        head_159 = baru_159;
    }
    else {
        Node* temp_159 = head_159;
        while (temp_159->next_159 != nullptr) {
            temp_159 = temp_159->next_159;
        }
        temp_159->next_159 = baru_159;
    }
}

void insertTengah_159(string nama_159, int usia_159, int posisi_159) {
    Node* baru_159 = new Node;
    baru_159->nama_159 = nama_159;
    baru_159->usia_159 = usia_159;
    Node* bantu_159 = head_159;
    for (int i_159 = 1; i_159 < posisi_159 - 1; i_159++) {
        if (bantu_159 != nullptr) {
            bantu_159 = bantu_159->next_159;
        }
    }
    if (bantu_159 != nullptr) {
        baru_159->next_159 = bantu_159->next_159;
        bantu_159->next_159 = baru_159;
    }
}

void hapusData_159(string nama_159) {
    Node* hapus_159 = head_159;
    Node* prev_159 = nullptr;
    while (hapus_159 != nullptr && hapus_159->nama_159 != nama_159) {
        prev_159 = hapus_159;
        hapus_159 = hapus_159->next_159;
    }
    if (hapus_159 == nullptr) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }
    if (prev_159 == nullptr) {
        head_159 = hapus_159->next_159;
    }
    else {
        prev_159->next_159 = hapus_159->next_159;
    }
    delete hapus_159;
}

void ubahData_159(string nama_159, string newnama_159, int newusia_159) {
    Node* temp_159 = head_159;
    while (temp_159 != nullptr && temp_159->nama_159 != nama_159) {
        temp_159 = temp_159->next_159;
    }
    if (temp_159 != nullptr) {
        temp_159->nama_159 = newnama_159;
        temp_159->usia_159 = newusia_159;
    }
}

void tampilkanData() {
    Node* temp_159 = head_159;
    while (temp_159 != nullptr) {
        cout << temp_159->nama_159 << " " << temp_159->usia_159 << endl;
        temp_159 = temp_159->next_159;
    }
}

int main() {
    insertBelakang_159("Depa", 19);
    insertBelakang_159("John", 19);
    insertBelakang_159("Jamet", 20);
    insertBelakang_159("Manto", 18);
    insertBelakang_159("Yusuep", 19);
    insertBelakang_159("Asep", 20);
    insertBelakang_159("Haryono", 18);
    insertBelakang_159("Karina", 18);

    char pilihan_159;
    do {
        cout << "\nMenu:\n";
        cout << "a. Tampilkan data sesuai urutan tersedia (Data pertama adalah nama dan usia pengguna)\n";
        cout << "b. Hapus data Akechi\n";
        cout << "c. Tambahkan data berikut diantara John dan Jane : Futaba 18\n";
        cout << "d. Tambahkan data berikut diawal : igor 20\n";
        cout << "e. Ubah data Michael menjadi : Reyn 18\n";
        cout << "f. Tampilkan seluruh data\n";
        cout << "g. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan_159;

        switch (pilihan_159) {
            case 'a':
                cout << "\nData yang tersedia:\n";
                tampilkanList_159();
                break;
            case 'b':
                hapusData_159("Adep");
                cout << "Data Asep berhasil dihapus.\n";
                cout << "\nData yang tersedia setelah penghapusan:\n";
                tampilkanList_159();
                break;
            case 'c':
                insertTengah_159("Futaba", 18, 3); 
                cout << "Data Futaba berhasil ditambahkan.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_159();
                break;
            case 'd':
                insertDepan_159("Igor", 20);
                cout << "Data Igor berhasil ditambahkan di awal.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_159();
                break;
            case 'e':
                ubahData_159("Mant0", "Reyn", 18);
                cout << "Data Manto berhasil diubah menjadi Reyn 18.\n";
                cout << "\nData yang tersedia setelah perubahan:\n";
                tampilkanList_159();
                break;
            case 'f':
                cout << "\nTampilan seluruh data sekarang:\n";
                tampilkanList_159();
                break;
            case 'g':
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi.\n";
                break;
        }
    } while (pilihan_159 != 'g');

    return 0;
}
