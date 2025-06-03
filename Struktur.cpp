#include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
} mahasiswa_Rezi;
int main()
{
    mahasiswa Rezi;
    Rezi.NIM = "c030324132";
    Rezi.NAMA = "Muhammad Fachrezi";
    Rezi.alamat = "Jalan HKSN, AMD Permai";
    Rezi.ipk = 3.7;

    cout << Rezi.nim << "\n";
    cout << Rezi.nama << "\n";
    cout << Rezi.alamat << "\n";
    cout << Rezi.ipk << "\n";
}