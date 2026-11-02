#include <iostream>

using namespace std;

int main() {
    int angka[10];
    int temp;

    for (int i = 0; i < 10; i++) {
        cout << "masukan angka ke " << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << "\ndaftar angka" << endl;
    for (int i = 0; i < 10; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        if (angka[i] % 2 == 0) {
            for (int j = 5; j < 10; j++) {
                if (angka[j] % 2 != 0) {
                    temp = angka[i];
                    angka[i] = angka[j];
                    angka[j] = temp;
                    break;
                }
            }
        }
    }

    cout << "hasil sorting" << endl;
    for (int i = 0; i < 10; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}