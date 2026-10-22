#include <iostream>
#include <string>

using namespace std;

int main() {
    string ulang;
    string menu[5] = {"Soto", "Rawon", "Pecel", "Teh", "Kopi"};
    int harga[5] = {10000, 20000, 10000, 3000, 5000};
    int porsi[5];
    int total[5];

    do {
        int totalBayar = 0; 

        cout << "=================================" << endl;
        cout << "        WARUNG MAKAN SEDERHANA    " << endl;
        cout << "=================================" << endl;

        for(int i = 0; i < 5; i++) {
            cout << "Menu   : " << menu[i] << endl;
            cout << "Harga  : Rp" << harga[i] << endl;
            cout << "Porsi  : ";
            cin >> porsi[i];

            total[i] = porsi[i] * harga[i];
            totalBayar += total[i];
            cout << "Subtotal : Rp" << total[i] << endl;
            cout << "---------------------------------" << endl;
        }

        cout << "TOTAL KESELURUHAN : Rp" << totalBayar << endl;
        cout << "=================================" << endl;
        
        cout << "Apakah anda mau mengulang? (y/Y): ";
        cin >> ulang;
        cout << endl;

    } while(ulang == "y" || ulang == "Y");

    system("pause");

    return 0;
}
