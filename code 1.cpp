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
void updateData() {
    string searchName;
    cout << "Masukkan nama untuk update data: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, searchName);

    auto it = find_if(database.begin(), database.end(), [searchName](const Data &d) { return d.nama == searchName; });

    if (it != database.end()) {
        cout << "Update data untuk " << searchName << ":\n";
        // Implement update logic here
        cout << "Nama: ";
        getline(cin, it->nama);

        cout << "Tempat Tanggal Lahir: ";
        getline(cin, it->tempatTanggalLahir);

        cout << "Usia: ";
        cin >> it->usia;

        cin.ignore();
        cout << "Jenis Kelamin: ";
        getline(cin, it->jenisKelamin);

        cout << "Agama: ";
        getline(cin, it->agama);

        cout << "Status Perkawinan: ";
        getline(cin, it->statusPerkawinan);

        cout << "Riwayat Pekerjaan: ";
        getline(cin, it->riwayatPekerjaan);

        cout << "Partai: ";
        getline(cin, it->partai);

        cout << "Data berhasil diupdate.\n";
    } else {
        cout << "Data tidak ditemukan.\n";
    }
}

void removeData() {
    string searchName;
    cout << "Masukkan nama untuk menghapus data: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, searchName);

    auto it = remove_if(database.begin(), database.end(), [searchName](const Data &d) { return d.nama == searchName; });

    if (it != database.end()) {
        database.erase(it, database.end());
        cout << "Data untuk " << searchName << " berhasil dihapus.\n";
    } else {
        cout << "Data tidak ditemukan.\n";
    }
}
