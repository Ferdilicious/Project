#include <iostream>
#include <iomanip>
using namespace std;

struct Karyawan {
    string nik;
    string nama;
    string jabatan;
    int gaji;
};

int main () {
    Karyawan karyawan[100];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=============================================\n";
        cout << "   PROGRAM MANAJEMEN DATA KARYAWAN     \n";
        cout << "=============================================\n";
        cout << "1. Tambah Data Karyawan\n";
        cout << "2. Tampilkan Data Karyawan\n";
        cout << "3. Cari Data Karyawan\n";
        cout << "4. Keluar\n";
        cout << "---------------------------------------------\n";
        cout << " Pilih Menu (1-4) :";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "=== Tambah Data Karyawan ===\n";
            cout << "NIK        :";
            cin >> karyawan[jumlah].nik;
            cin.ignore();
            cout << "Nama       :";
            getline(cin, karyawan[jumlah].nama);
            cout << "Jabatan    :";
            getline(cin, karyawan[jumlah].jabatan);
            cout << "Gaji       :";
            cin >> karyawan[jumlah].gaji;

            jumlah++;
            cout << "\nData karyawan berhasil ditambahkan\n";
            break;

            case 2:
            if (jumlah == 0) {
                cout << "Data karyawan masih kosong\n";
            } else {
                cout << "=== Daftar Data Karyawan ===\n";
                cout << left << setw(10) << "NIK"
                    << setw (20) << "Nama"
                    << setw (15) << "Jabatan"
                    << setw (10) << "Gaji" << endl;
                cout << "----------------------------------------------\n";

                for (int i = 0; i < jumlah; i++) {
                    cout << left << setw(10) << karyawan[i].nik
                        << setw(20) << karyawan[i].nama
                        << setw(15) << karyawan[i].jabatan
                        << setw(10) << karyawan[i].gaji << endl;
                }
            }
            break;

            case 3: {
                string cariNIK;
                bool ditemukan = false;

                cout << "Masukan NIK yang dicari";
                cin >> cariNIK;

                for (int i = 0; i < jumlah; i++) {
                    if (karyawan[i].nik == cariNIK) {
                        cout << "\nData ditemukan\n";
                        cout << "Nama    :" << karyawan[i].nama << endl;
                        cout << "Jabatan :" << karyawan[i].jabatan << endl;
                        cout << "Gaji    :" << karyawan[i].gaji << endl;
                        ditemukan = true;
                        break ;
                    }
                }
                if (ditemukan) {
                    cout << "Data karyawan dengan NIK tersebut tidak ditemukan\n";
                }
                break;
            }
            case 4:
            cout << "Terima kasih telah menggunakan program\n";
            break;

            default:
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan!= 4);

    return 0;
}