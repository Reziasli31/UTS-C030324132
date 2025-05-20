#include <iostream>
#include <conio.h>
using namespace std;

int data[6];
int jumlahData = 6;
void dMenu()
{
  system("cls");
  cout << "Aplikasi Tampilan Menu" << "\n";
  cout << "1. Memasukan data" << "\n";
  cout << "2. Menampilkan data" << "\n";
  cout << "3. Sorting" << "\n";
  cout << "4. Sepatah Kata" << "\n";
  cout << "5. Exit" << "\n";
  cout << "Masukan angka :";
}
void Memasukandata()
{
  system("cls");
  cout << "MEMASUKKAN DATA\n";
  cout << "===============\n";
  for (int i = 0; i < jumlahData; i++)
  {
    cout <<  << i + 1 << ": ";
    cin >> data[i];
  }
  getch();
}

void Menampilkandata()
{
  system("cls");
  cout << "DATA YANG TERSIMPAN\n";
  cout << "===================\n";
  for (int i = 0; i < jumlahData; i++)
  {
    cout <<  << i + 1 << ": " << data[i] << "\n";
  }
  getch();
}

void Sorting(string pesan)
{
  system("cls");
  cout << "PROSES SORTING\n";
  cout << "========================\n";

  for (int i = 0; i < jumlahData - 1; i++)
  {
    for (int j = i + 1; j < jumlahData; j++)
    {
      if (data[i] < data[j])
      {
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
}
  void sepatahkata()
  {
    system("cls");
    cout << "Pesan akhir\n";
    cout << "=============\n";
    cout << "Master Rezi\n";
    cout << "@Reziasli31\n";
    getch();
  }

  int main()
  {
    char pl;
    do
    {
      dMenu();
      pl = getch();
      switch (pl)
      {
      case '1':
        /* code */
        Memasukandata();
        break;
      case '2':
        Menampilkandata();
        /* code */
        break;
      case '3':
        Sorting();
        /* code */
        break;
      case '4':
        sepatahkata();
        /* code */
        break;
      case '5':
        /* code */
        break;

      default:
        system("cls");
        cout << "Pilihan Tidak Tersedia";
        getch();
        break;
      }

    } while (pl != '5');
    return 0;
  }