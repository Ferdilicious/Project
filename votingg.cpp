#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int MAX = 3;
    string kandidat[MAX] = {"Ferdi", "Nefer", "Bagas"};
    int suara[MAX] = {0, 0, 0};

    int pilihan;
    char lanjut;

    do {
        cout << "\n====================================\n";
        cout << "      PROGRAM SISTEM VOTING \n";
        cout << " ==================================\n";
        cout << "Daftar Kandidat\n";
        for (int i = 0; i < MAX; i++) {
            cout << i + 1 << "." << kandidat[i] << endl;
        }
        
        cout << "\nPilih kandidat (1-" << MAX << "): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <=MAX) {
            suara[pilihan - 1]++;
            cout << "Terima kasih suara anda telah dicatat\n";
        } else {
            cout << "Pilihan tidak valid\n";
        }

        cout << "Apakah ingin voting lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\n==================================\n";
    cout << "       HASIL VOTING\n";
    cout << "===================================\n";
    cout << left << setw(15) << "Kandidat" << "Jumlah Suara\n";
    cout << "----------------------------------\n";

    int maxSuara = suara[0];
    int indexPemenang = 0;

    for (int i = 0; i < MAX; i++) {
        cout << left << setw(15) << kandidat[i] << suara[i] << endl;
        if (suara[i] > maxSuara) {
            maxSuara = suara[i];
            indexPemenang = i;
        }
    }

    cout << "\nPemenang Voting :" << kandidat[indexPemenang] << endl;
    cout << "Dengan jumlah suara :" << maxSuara << endl;

    return 0;
}