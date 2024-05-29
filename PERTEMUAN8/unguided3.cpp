// ANANDA MAULUDIN AR ROKHMAN
// 2311102159
// S1 IF-11-D


#include <iostream>
using namespace std;

int main(){
    int n_159 = 10;
    int Data_159[n_159] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int Target_159 = 4;
    int Count_159 = 0;

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4
    for (int i = 0; i < n_159; i++) {
        if (Data_159[i] == Target_159) {
            Count_159++;
        }
    }
    cout << "===== SELAMAT DATANG DI PROGRAM SEQUENTIAL SEARCH BY ANANDA MAULUDIN AR ROKHMAN =====" << endl;
    cout << "Data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Angka " << Target_159 << " ditemukan sebanyak " << Count_159 << " kali." << endl;
    return 0;
}
