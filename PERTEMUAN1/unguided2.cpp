// LAPRAK 1 : UNGUIDED 2
// ANANDA MAULUDIN AR ROHMAN
// 2311102159
// S1 IF-11-D

#include <iostream>
#include <string>

using namespace std;

// Class PemainSepakBola
class PemainSepakBola {
public:
    // Attributes
    string nama;
    int umur;
    int Goal;
    int assistGoal;
    string tim;

    // Method to display player information
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Goal: " << Goal << endl;
        cout << "Assist Goal: " << assistGoal << endl;
        cout << "Tim: " << tim << endl;
        cout << "----------------------" << endl;
    }
};

// Struct PemainSepakBolaStruct
struct PemainSepakBolaStruct {
    // Attributes
    string nama;
    int umur;
    int Goal;
    int assistGoal;
    string tim;
};

int main() {
    // Create object of class PemainSepakBola and fill in data
    PemainSepakBola pemain1;
    pemain1.nama = "Markus";
    pemain1.umur = 36;
    pemain1.Goal = 30;
    pemain1.assistGoal = 15;
    pemain1.tim = "Persija";

    // Display information of pemain1
    pemain1.displayInfo();

    // Create object of struct PemainSepakBolaStruct and fill in data
    PemainSepakBolaStruct pemain2;
    pemain2.nama = "Nadeo";
    pemain2.umur = 25;
    pemain2.Goal = 2;
    pemain2.assistGoal = 10;
    pemain2.tim = "BALI U";

    // Display information of pemain2
    cout << "Nama: " << pemain2.nama << endl;
    cout << "Umur: " << pemain2.umur << endl;
    cout << "Goal: " << pemain2.Goal << endl;
    cout << "Assist Goal: " << pemain2.assistGoal << endl;
    cout << "Tim: " << pemain2.tim << endl;
    cout << "----------------------" << endl;

    return 0;
}
