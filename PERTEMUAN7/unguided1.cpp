// LAPRAK 7 : UNGUIDED 1
// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D

// Program penerapan konsep queue pada bagian guided dari array menjadi linked list
#include <iostream>
using namespace std;

const int maksimalQueue_159 = 5;  // Maksimal antrian adalah 5

// Node untuk menyimpan data_159 dan pointer ke node berikutnya
struct Node {
    string data_159;
    Node* next_159;
};

class Queue {
private:
    Node* front_159; // Node depan dari antrian
    Node* rear_159;  // Node belakang dari antrian

public: 
    Queue() { // Konstruktor untuk menginisialisasi antrian kosong
        front_159 = nullptr;
        rear_159 = nullptr;
    }

    // Fungsi untuk menambahkan data_159 ke antrian
    void enqueue_159(const string& data_159) {
        Node* newNode_159 = new Node;
        newNode_159->data_159 = data_159;
        newNode_159->next_159 = nullptr;
        
        // Jika antrian kosong
        if (isEmpty_159()) { // Jika antrian kosong maka front_159 dan rear_159 menunjuk ke newNode_159 yang baru dibuat 
            front_159 = rear_159 = newNode_159;
        } else { // Jika antrian tidak kosong maka rear_159 menunjuk ke newNode_159 yang baru dibuat
            rear_159->next_159 = newNode_159;
            rear_159 = newNode_159;
        }
        
        cout << ">> " << data_159 << " telah ditambahkan ke dalam antrian." << endl;
    }

    // Fungsi untuk menghapus data_159 dari antrian
    void dequeue_159() {
        if (isEmpty_159()) { // Jika antrian kosong maka tampilkan pesan "Antrian kosong" dan kembalikan nilai void
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp_159 = front_159; // Simpan node front_159 ke dalam variabel temp_159 untuk dihapus nantinya 
        front_159 = front_159->next_159; // Geser front_159 ke node selanjutnya 

        cout << ">> " << temp_159->data_159 << " telah dihapus dari antrian." << endl; // Tampilkan data_159 yang dihapus dari antrian 
        delete temp_159; // Hapus node yang disimpan di variabel temp_159

        // Jika setelah penghapusan antrian menjadi kosong
        if (front_159 == nullptr) {
            rear_159 = nullptr;
        }
    }

    // Fungsi untuk menampilkan seluruh antrian
    void displayQueue_159() {
        if (isEmpty_159()) { // Jika antrian kosong maka tampilkan pesan "Data antrian:" dan tampilkan pesan "(kosong)"
            cout << "\n[2159] Data Antrian :" << endl;
            for (int i_159 = 0; i_159 < maksimalQueue_159; i_159++) {
                cout << i_159 + 1 << ". (kosong)" << endl;
            }
        } else { // Jika antrian tidak kosong maka tampilkan data_159 antrian yang ada
            cout << "\n[2159] Data Antrian :" << endl;
            Node* current_159 = front_159;
            int i_159 = 1;
            while (current_159 != nullptr) { // Selama current_159 tidak menunjuk ke nullptr maka tampilkan data_159 antrian yang ada 
                cout << i_159 << ". " << current_159->data_159 << endl;
                current_159 = current_159->next_159;
                i_159++;
            }
            for (; i_159 <= maksimalQueue_159; i_159++) { // Tampilkan pesan "(kosong)" untuk antrian yang kosong 
                cout << i_159 << ". (kosong)" << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah antrian kosong
    bool isEmpty_159() {
        return front_159 == nullptr;
    }

    // Fungsi untuk mengembalikan jumlah elemen dalam antrian
    int countQueue_159() {
        int count = 0;
        Node* current_159 = front_159;
        while (current_159 != nullptr) { // Selama current_159 tidak menunjuk ke nullptr maka hitung jumlah elemen dalam antrian
            count++;
            current_159 = current_159->next_159;
        }
        return count; // Kembalikan jumlah elemen dalam antrian
    }

    // Fungsi untuk menghapus semua elemen dalam antrian
    void clearQueue_159() {
        while (!isEmpty_159()) { // Selama antrian tidak kosong maka hapus elemen dalam antrian
            dequeue_159(); // Hapus elemen dalam antrian 
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue; // Buat objek queue dari class Queue
    queue.enqueue_159("ANANDA MAULUDIN AR ROKHMAN");
    queue.enqueue_159("ANGGUN");
    queue.displayQueue_159();
    cout << "[2159] Jumlah Antrian = " << queue.countQueue_159() << endl;
    queue.dequeue_159();
    queue.displayQueue_159();
    cout << "[2159] Jumlah Antrian = " << queue.countQueue_159() << endl;
    queue.dequeue_159();
    queue.displayQueue_159();
    cout << "[2159] Jumlah Antrian = " << queue.countQueue_159() << endl;

    return 0;
}
