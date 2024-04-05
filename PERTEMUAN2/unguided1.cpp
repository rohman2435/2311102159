#include <iostream>
#include <vector>
using namespace std;

vector<int> filterArray(const int arr[], int size, bool even) {
    vector<int> result;
    for (int i = 0; i < size; ++i) {
        if ((arr[i] % 2 == 0) == even) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int bilangan141[10];

    cout << "Data Array: ";
    for (int i = 0; i < 10; i++) {
        cin >> bilangan141[i];
    }

    vector<int> evenNumbers = filterArray(bilangan141, 10, true);
    vector<int> oddNumbers = filterArray(bilangan141, 10, false);

    cout << "Nomor Genap: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
