#include <iostream>
using namespace std;

// Identitas Pembuat
// Nama  : Nanang Saepudin
// NPM   : 2510631170011
// Kelas : 1B Informatika

// untuk menyimpan data dalam struct mahasiswa
struct mahasiswa {
    string nama;
    string npm;
    string kota;
    string asal_sekolah;
};

int main() {
    // mendeklarasikan tipe data dan array
    mahasiswa mhs[100];
    mahasiswa mhs_karawang[100];
    mahasiswa mhs_subang[100];
    mahasiswa mhs_indramayu[100];

    int n;
    cout << "Masukkan jumlah data : "; // jumlah data mahasiswa yang ingin di input
    cin >> n;
    cin.ignore(); // menghapus newline
    cout << endl;
    
    // input data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan nama            : ";
        getline(cin, mhs[i].nama);
        cout << "Masukkan NPM             : ";
        cin >> mhs[i].npm;
        cout << "Masukkan kota tinggal    : ";
        cin >> mhs[i].kota;
        cout << "Masukkan asal sekolah    : ";
        cin.ignore();
        getline(cin, mhs[i].asal_sekolah);
        cout << endl;
    }

    // menampilkan semua data mahasiswa
    cout << "======Data Mahasiswa====== " << endl;
    
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama          : " << mhs[i].nama << endl;
        cout << "NPM           : " << mhs[i].npm << endl;
        cout << "Kota tinggal  : " << mhs[i].kota << endl;
        cout << "Asal sekolah  : " << mhs[i].asal_sekolah << endl;
        cout << endl;
    }

    // sorting data sesuai nama kota
    int kota_karawang = 0, kota_subang = 0, kota_indramayu = 0;
    
    for (int i = 0; i < n; i++) { 
        if (mhs[i].kota == "Karawang" || mhs[i].kota == "karawang") { // 1, 2
            mhs_karawang[kota_karawang++] = mhs[i];
        } 
        else if (mhs[i].kota == "Subang" || mhs[i].kota == "subang") {
            mhs_subang[kota_subang++] = mhs[i];
        } 
        else if (mhs[i].kota == "Indramayu" || mhs[i].kota == "indramayu") {
            mhs_indramayu[kota_indramayu++] = mhs[i];
        }
    }

    // sebagai pembatas
    cout << "=============================================" << endl;

    // memilih kota untuk menampilkan data mahasiswa sesuai dengan kota yang di pilih
    string pilih_kota;
    cout << "Pilih kota (Karawang/Subang/Indramayu) : ";
    cin >> pilih_kota;

    // menampilkan data mahasiswa yang dari kota karawang
    if (pilih_kota == "Karawang" || pilih_kota == "karawang" ){
        if (kota_karawang == 0) {
            cout << "Tidak ada mahasiswa dari Karawang.\n";
        }
        for (int i = 0; i < kota_karawang; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama          : " << mhs_karawang[i].nama << endl;
        cout << "NPM           : " << mhs_karawang[i].npm << endl;
        cout << "Kota tinggal  : " << mhs_karawang[i].kota << endl;
        cout << "Asal sekolah  : " << mhs_karawang[i].asal_sekolah << endl;
        cout << endl;
        }
    }
    // menampilkan data mahasiswa yang dari kota subang
    else if (pilih_kota == "Subang" || pilih_kota == "subang"){
        if (kota_subang == 0){
            cout << "Tidak ada mahasiswa dari Subang.\n";
        }
        for (int i = 0; i < kota_subang; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama          : " << mhs_subang[i].nama << endl;
        cout << "NPM           : " << mhs_subang[i].npm << endl;
        cout << "Kota tinggal  : " << mhs_subang[i].kota << endl;
        cout << "Asal sekolah  : " << mhs_subang[i].asal_sekolah << endl;
        cout << endl;
        }
    }
    // menampilkan data mahasiswa yang dari kota indramayu
    else if (pilih_kota == "Indramayu" || pilih_kota == "indramayu" ){
        if (kota_indramayu == 0){
            cout << "Tidak ada mahasiswa dari Indramayu.\n";
        }
        for (int i = 0; i < kota_indramayu; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama          : " << mhs_indramayu[i].nama << endl;
        cout << "NPM           : " << mhs_indramayu[i].npm << endl;
        cout << "Kota tinggal  : " << mhs_indramayu[i].kota << endl;
        cout << "Asal sekolah  : " << mhs_indramayu[i].asal_sekolah << endl;
        cout << endl;
        }
    }
    // apabila memasukkan kota yang tidak ada di dalam pilihan akan tampilkan seperti ini
    else {
        cout << "Kota yang anda masukkan tidak ada didalam pilihan." << endl;
    }

    cout << "\nDibuat oleh : Nanang Saepudin\n";

    return 0;
}
