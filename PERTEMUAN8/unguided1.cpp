#include<iostream>

using namespace std;

//Prosedur untuk menampilkan huruf-huruf didalam kalimat
void TampilkanHurufKalimat_159(char ArrayKalimat_159[], int PanjangKalimat_159){
    for(int i = 0; i < PanjangKalimat_159; i++){ //perulangan for untuk menampilkan huruf
        cout << ArrayKalimat_159[i] << '\t';
    }
    cout << endl;
}

//Prosedur untuk mengurutkan huruf sesuai abjad menggunakan bubble sort
void BubbleSort_159(char ArrayKalimat_159[], int PanjangKalimat_159){
    bool Urut_159 = true; 
    int j = 0; 
    char temp_159; 
    while(Urut_159){ 
        Urut_159 = false;
        j++; 
        for(int i = 0; i < PanjangKalimat_159 - j; i++){ 
            if(ArrayKalimat_159[i] > ArrayKalimat_159[i + 1]){  
                temp_159 = ArrayKalimat_159[i]; 
                ArrayKalimat_159[i] = ArrayKalimat_159[i + 1]; 
                ArrayKalimat_159[i + 1] = temp_159; 
                Urut_159 = true; 
            }
        }
    }
}

//Prosedur untuk mencari huruf didalam kalimat menggunakan binary search
void BinarySearch_159(char ArrayKalimat_159[], int PanjangKalimat_159, char HurufYangDicari_159){
    int awal_159, tengah_159, akhir_159, Posisi_159;  
    bool b_flag = false; 
    awal_159 = 0; 
    akhir_159 = PanjangKalimat_159; 
    while(!b_flag && awal_159 <= akhir_159){ 
        tengah_159 = (awal_159 + akhir_159)/2; 
        if(HurufYangDicari_159 == ArrayKalimat_159[tengah_159]){ 
            Posisi_159 = tengah_159; 
            b_flag = true; 
            break; 
        } else if(HurufYangDicari_159 < ArrayKalimat_159[tengah_159]){ 
            akhir_159 = tengah_159 - 1; 
        } else if(HurufYangDicari_159 > ArrayKalimat_159[tengah_159]){ 
            awal_159 = tengah_159 + 1; 
        }
    }
    if(b_flag){ 
        cout << "Huruf " << HurufYangDicari_159 << " ditemukan pada index ke-";
        for(int i = 0; i < PanjangKalimat_159; i++){
            if(HurufYangDicari_159 == ArrayKalimat_159[i]){
                cout << i;
                if(ArrayKalimat_159[i + 1] == HurufYangDicari_159){
                    cout << ", ";
                }
            }
        }
    } else { 
        cout << "Huruf " << HurufYangDicari_159 << " tidak ditemukan" << endl;
    }
}

int main(){
    string InputKalimat_159, KalimatTanpaSpasi_159; 
    int PanjangKalimat_159; 
    char HurufYangDicari_159; 
    cout << "--- PROGRAM MENCARI HURUF DALAM KALIMAT BY ANANDA MAULUDIN AR ROKHMAN---" << endl;
    cout << "Masukkan kalimat = "; 
    getline(cin, InputKalimat_159); 
    cout << endl;

    // Menghapus karakter spasi dari kalimat
    KalimatTanpaSpasi_159 = ""; 
    for(char c : InputKalimat_159){
        if(c != ' ') { 
            KalimatTanpaSpasi_159 += c; 
        }
    }

    //menghitung panjang kalimat
    PanjangKalimat_159 = KalimatTanpaSpasi_159.length();
    char ArrayKalimat_159[PanjangKalimat_159];
    for(int i = 0; i < PanjangKalimat_159; i++){
        ArrayKalimat_159[i] = KalimatTanpaSpasi_159[i]; 
    }

    //Menampilkan setiap huruf dalam kalimat sebelum di urutkan
    cout << "Urutan huruf dalam kalimat sebelum diurutkan (spasi dihilangkan) = " << endl;
    TampilkanHurufKalimat_159(ArrayKalimat_159, PanjangKalimat_159); 

    //Menampilkan setiap huruf dalam kalimat setelah di urutkan
    cout << "Urutan huruf dalam kalimat setelah diurutkan (spasi dihilangkan) = " << endl;
    BubbleSort_159(ArrayKalimat_159, PanjangKalimat_159); 
    TampilkanHurufKalimat_159(ArrayKalimat_159, PanjangKalimat_159); 
    cout << endl;

    //User menginputkan huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin dicari = ";
    cin >> HurufYangDicari_159; 

    BinarySearch_159(ArrayKalimat_159, PanjangKalimat_159, HurufYangDicari_159);

    return 0;
}
