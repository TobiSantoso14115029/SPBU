#include <iostream>

using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

int main() {
    string nama_penjaga, jenis, code, plat;
    data_BBM BBM;
    string kode_BBM[6]={"88", "85", "90", "92", "95", "86"};
    string nama_BBM[6]={"Premium", "Bio Solar", "Pertalite", "Pertamax 92", "Pertamax 95", "Pertamina Dex"};
    int jml_uang, kembali, total=0,i;
    string no_pompa, no_selang;
    float liter, harga, uang;
    char exit;
    loop :
    cout <<endl<<endl;	
    cout << "==========================================="<<endl;
    cout << "    Selamat Datang di SPBU 640.509.41.47  "<<endl;
    cout << "   Jalan Terusan Ryacudu, Lampung Selatan "<<endl;
    cout << "==========================================="<<endl;
    cout << "List Harga BBM : \n"<<endl;
    cout << " NO    KODE     Jenis BBM         Harga "<<endl;
    cout << "----   ----     ----------        -----"<<endl;
    cout << " 1      88      Premium        Rp. 6.450,00"<<endl;
    cout << " 2      85      Bio Solar      Rp. 6.950,00"<<endl;
    cout << " 3      90      Pertalite      Rp. 7.100,00"<<endl;
    cout << " 4      92      Pertamax 92    Rp. 7.750,00"<<endl;
    cout << " 5      95      Pertamax 95    Rp. 8.450,00"<<endl;
    cout << " 6      86      Pertamina Dex  Rp. 8.400,00"<<endl;
    cout << "_______________________________________"<<endl;
	cout <<endl;
	
    cout << "Kode BBM : "; 
	cin >> BBM.kode_BBM;
	    
	if (BBM.kode_BBM == "88"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 6.450/liter";
        jenis = "Premium";
        harga = 6450;
        nama_penjaga = "Rahmat Fitriadi";
        no_pompa = "1";
        no_selang = "1";
    }
    else if (BBM.kode_BBM == "85"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 6.950/liter";
        jenis = "Bio Solar";
        harga = 6950;
        nama_penjaga = "Bambang Kurniawan";
        no_pompa = "2";
        no_selang = "2";
    }
    else if (BBM.kode_BBM == "90"){
        cout << "Jenis BBM : "<<nama_BBM[2]<<endl;
        cout << "Rp. 7.100/liter";
        jenis = "Pertalite";
        harga = 7100;
        nama_penjaga = "Yoo Si Jin";
        no_pompa = "3";
        no_selang = "3";
    }
	else if (BBM.kode_BBM == "92"){
        cout << "Jenis BBM : "<<nama_BBM[3]<<endl;
        cout << "Rp. 7.750/liter";
        jenis = "Pertamax 92";
        harga = 7750;
        nama_penjaga = "Seo Dae Young";
        no_pompa = "4";
        no_selang = "4";
    }
	else if (BBM.kode_BBM == "95"){
        cout << "Jenis BBM : "<<nama_BBM[4]<<endl;
        cout << "Rp. 8.450/liter";
        jenis = "Pertamax 95";
        harga = 8450;
        nama_penjaga = "Dedi Munandar";
        no_pompa = "5";
        no_selang = "5";
	}
	else if (BBM.kode_BBM == "86"){
        cout << "Jenis BBM : "<<nama_BBM[5]<<endl;
        cout << "Rp. 8.400/liter";
        jenis = "Pertamina Dex";
        harga = 8400;
        nama_penjaga = "Muhammad Riski Oktarlius Setia Budi";
        no_pompa = "6";
        no_selang = "6";
	}
    
	else if (BBM.kode_BBM != "88,85,90,92,95,86") {
        cout << "Maaf anda salah memasukkan kode BBM"<<endl;
        cout << "\nKode BBM : ";
        cin >> BBM.kode_BBM;
    } 
    
        cout << endl;
        
		cout << "Plat nomor : "; 
		cin >> plat;
        cout << "Beli       : "; 
		cin >> uang;
        cout << "Bayar      : "; 
		cin >> jml_uang;
        
		total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
   
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                   *PERTAMINA*                        "<<endl;
    cout << "               *SPBU 640.509.41.47*                     "<<endl;
    cout << "        *Jl. Terusan Ryacudu, Lampung Selatan*          "<<endl;
    cout << "                *Telp. 0721 750 6451*                    "<<endl;
    cout << "________________________________________________________"<<endl;
    cout << "Nomor Pompa    : "<<no_pompa<<endl;
    cout << "Nomor Selang   : "<<no_selang<<endl;
    cout << "Nomor Plat     : "<<plat<<endl;
    cout << "Jenis BBM      : "<<jenis<<endl;
    cout << "Liter          : "<<liter<<" L"<<endl;
    cout << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout << "Total          : Rp. "<<total<<",00"<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    cout << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    cout << "======================================================"<<endl;
    cout << "Operator       : "<<nama_penjaga<<endl<<endl<<endl;
    cout << "        BBM Subsidi 'HANYA' untuk Golongan TIDAK MAMPU        \n"<<endl;
    cout << "           TERIMA KASIH DAN SELAMAT JALAN             "<<endl<<endl;

	cout << "\n Keluar Dari Program? (Y/N) : "; 
	cin >> exit;
		if (exit=='n') 
		{
				
			goto loop;
		}
		else 
			cout << "\n Anda Keluar Dari Program.. Terima kasih \n"<<endl;

    return 0;
    
}
