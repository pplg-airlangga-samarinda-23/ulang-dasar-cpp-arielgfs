// #include <iostream>
// using namespace std;

// void cetakData(string nama, int nisn, string jurusan, int tinggiBadan){
//     cout << endl;
//     cout << "========DATA ANDA======== \n";
//     cout << "Nama: " << nama << endl;
//     cout << "Nisn: " << nisn << endl;
//     cout << "jurusan: " << jurusan << endl;
//     cout << "Tinggi Badan: " << tinggiBadan << "cm" << endl;
// }

// int main(){
//     string nama;
//     string jurusan;
//     int nisn;
//     int tinggiBadan;

//     cout << "Masukan nama anda: ";
//     cin >> nama;
//     cout << "Masukan nisn anda: ";
//     cin >> nisn; 
//     cout << "Masukan jurusan anda: ";
//     cin >> jurusan;
//     cout << "Masukan tinggi badan anda: ";
//     cin >> tinggiBadan;


//     cetakData(nama, nisn, jurusan, tinggiBadan);
//     return 0;

// }


#include <iostream>
using namespace std;

void cetakData(string nama, int nisn, string jurusan, int tinggiBadan){
    cout << endl;
    cout << "========DATA ANDA======== \n";
    cout << "Nama: " << nama << endl;
    cout << "Nisn: " << nisn << endl;
    cout << "jurusan: " << jurusan << endl;
    cout << "Tinggi Badan: " << tinggiBadan << "cm" << endl;
}

int main(){
    string nama = "Johann";
    string jurusan = "PPLG";
    int nisn = 456789;
    int tinggiBadan = 160;


    cetakData(nama, nisn, jurusan, tinggiBadan);
    return 0;

}