#include<iostream>

using namespace std;

class namaanggota {
public:
    void namakelompok() {
        //nama kelompok 
        cout << "Kelompok : 13" << endl;
        cout << "Shift : 1" << endl;
        cout << "Nama anggota 1 : Faizal Lutfi Yoga Triadi " << endl;
        cout << "Nama anggota 2 : Muhammad Baihaqi Assahaumi Mutaqo " << endl;
        cout << "Nama anggota 3 : Audi Alvan Fikri " << endl;
        cout << "Nama anggota 4 : Rizal Firdaus " << endl;
    }
};

void pembayaran(int beli);

void awal() {
    cout << "===============================================\n"
        << "=========SELAMAT DATANG DI WARNET ABCD=========\n"
        << "===============================================\n";
}
void akhir() {
    cout << "===============================================\n"
        << "========EITS BAYAR DULU BRO JANGAN PERGI=======\n"
        << "=========SAAT BERMAIN JANGAN BERISIK YA========\n"
        << "===============================================\n";
}

int main()
{
    int beli, hargapaket, paket, ch;
    int paket1, paket2, paket3, paket4;

    paket1 = 15000;
    paket2 = 20000;
    paket3 = 35000;
    paket4 = 70000;


    namaanggota myObj;
    myObj.namakelompok();
    awal();

    do
    {
        cout << "" << endl;
        cout << "||=================================================||" << endl;
        cout << "||===========SILAHKAN PILIH PAKET DIBAWAH==========||" << endl;
        cout << "||===============KETIK ANGKANYA SAJA===============||" << endl;
        cout << "||                    CONTOH : 1                   ||" << endl;
        cout << "||                                                 ||" << endl;
        cout << "||PAKET 1 Biling 3 Jam              (Rp.15000)  (1)||" << endl;
        cout << "||PAKET 2 Biling 5 Jam              (Rp.20000)  (2)||" << endl;
        cout << "||PAKET 3 Biling 10 Jam             (Rp.35000)  (3)||" << endl;
        cout << "||PAKET Bertapa 24 JAM (REKOMENDED) (Rp.70000)  (4)||" << endl;
        cout << "||PAKET Malam dari jam 22.00 - 07.00(Rp.30000)  (5)||" << endl;
        cout << "||BELI                                          (6)||" << endl;
        cout << "||=================================================||" << endl;
        cout << "" << endl;
        cout << "MASUKKAN ANGKA PADA PAKET YANG DIPILIH : "; cin >> paket;

        beli = 0;

        switch (paket) {
        case 1:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.15000)" << endl;
            cout << "" << endl;
            break;
        case 2:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.20000)" << endl;
            cout << "" << endl;
            break;
        case 3:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.35000)" << endl;
            cout << "" << endl;
            break;
        case 4:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.70000)" << endl;
            cout << "" << endl;
            break;
        case 5:
            cout << "" << endl;
            cout << "PAKET MALAM (Rp.30000)" << endl;
            cout << "" << endl;
            break;
        case 6:
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            akhir();
            break;
        default:
            cout << "PAKET TIDAK TERDAFTAR SILAHKAN PINDAH WARNET SEBELAH!" << endl;
            break;
        }

        if (paket == 1) {
            hargapaket = 15000;
        }
        else if (paket == 2) {
            hargapaket = 20000;
        }
        else if (paket == 3) {
            hargapaket = 35000;
        }
        else if (paket == 4) {
            hargapaket = 70000;
        }
        else if (paket == 5) {
            hargapaket = 30000;
        }
        else if (beli == 0) {
            return 0;
        }
        beli += hargapaket;
        pembayaran(beli);
        ch = 0;
        cout << "BELI PAKET LAGI ? \t\t>> TEKAN 1\n";
        cout << "KELUAR ? \t\t\t>> TEKAN 2\n >>";
        cin >> ch;
    }
    while (ch != 2);
    return 0;
}

void pembayaran(int beli)
{
    int masuk, lebih;
    cout << "||Harga Paket yang dipilih \t: Rp. " << beli; cout << "||" << endl;
    cout << "Pembayaran TUNAI \t\t: Rp. "; cin >> masuk;

    while (masuk < beli)
    {
        cout << "LAH UANGNYA GA CUKUP BRO PINJEM TEMEN DULU BURUAN" << endl;
        cout << "Bayar ulang \t\t\t: Rp. "; cin >> masuk;
    } 
    if (masuk == beli) 
    {
        cout << "DUITNYA PAS BRO, MANTAB" <<endl;
    }
    else
    {
        lebih = masuk - beli;
        cout << "DUITNYA KELEBIHAN \t\t: Rp. " << lebih; cout << "\t BRO!!!" << endl;
    }
}

