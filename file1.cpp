#include <iostream>
#include <string>
using namespace std;

class barang
{
public :
    string namabarang;
    int kodebarang;
     barang(string namabarang, int kodebarang);

void tampilkaninformasi()
{
    cout << " nama barang : " << namabarang << endl;
    cout << " kode barang : " << kodebarang << endl;
}
};

barang::barang(string namabarang, int kodebarang)
{
  namabarang = namabarang;
  kodebarang = kodebarang;  
}

int main()
{
    barang brg("buku", 25);
    brg.tampilkaninformasi();
    return 0;
}