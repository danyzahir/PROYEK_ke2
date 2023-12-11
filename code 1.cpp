#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

struct Data {
    string nama;
    string tempatTanggalLahir;
    int usia;
    string jenisKelamin;
    string agama;
    string statusPerkawinan;
    string riwayatPekerjaan;
    string partai;
};

vector<Data> database;

void inputData() {
    Data newData;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nama: ";
    getline(cin, newData.nama);

    cout << "Tempat Tanggal Lahir: ";
    getline(cin, newData.tempatTanggalLahir);

    cout << "Usia: ";
    cin >> newData.usia;

    cin.ignore();
    cout << "Jenis Kelamin: ";
    getline(cin, newData.jenisKelamin);

    cout << "Agama: ";
    getline(cin, newData.agama);

    cout << "Status Perkawinan: ";
    getline(cin, newData.statusPerkawinan);

    cout << "Riwayat Pekerjaan: ";
    getline(cin, newData.riwayatPekerjaan);

    cout << "Partai: ";
    getline(cin, newData.partai);

    database.push_back(newData);

    // Menambahkan pembatas
    cout << "\n----------------------------------------\n";
}
