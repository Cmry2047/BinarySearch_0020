#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true) 
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else 
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }

    cout << "\n=============================\n";
    cout << "     Masukkan Elemen Array     \n";
    cout << "\n=============================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> element[i];
    }
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================\n";
        cout << "    Pencarian Binary Search     \n";
        cout << "\n==============================\n";

        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "\n[✔] Elemen " << x << " ditemukan pada indeks ke-" << mid << ".\n";
                return;
            }

            if (element[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << "\n[✘] Elemen " << x << " tidak ditemukan dalam array.\n";

        cout << "\nIngin Mencari Lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}