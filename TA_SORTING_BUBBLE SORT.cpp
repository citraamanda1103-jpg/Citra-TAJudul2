#include <iostream>
using namespace std;

int main() {
    int n;
    float nilai[100];
    string nama[100];

    cout << "Program Pengurutan Nilai Ujian Siswa" << endl;

    cout << "Masukkan jumlah siswa: ";
    cin >> n;

    cout << "Masukkan nama dan nilai masing-masing siswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Siswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> nama[i];
        cout << "Nilai : ";
        cin >> nilai[i];
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nilai[j] < nilai[j + 1]) {
                float tempNilai = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = tempNilai;

                string tempNama = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = tempNama;
            }
        }
    }

    cout << "Daftar nilai siswa (dari tertinggi ke terendah):" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nama[i] << " - " << nilai[i] << endl;
    }

    return 0;
}

