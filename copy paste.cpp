#include <iostream>
using namespace std;

int main() {
    float hargaAwal = 150000;
    float diskonPersen = 12.5;
    float besarnyaDiskon, hargaBersih;

     besarnyaDiskon = (diskonPersen / 100) * hargaAwal;

     hargaBersih = hargaAwal - besarnyaDiskon;

    printf("Harga awal: Rp %.2f\n", hargaAwal);
    printf("Besarnya diskon: Rp %.2f\n", besarnyaDiskon);
    printf("Harga bersih: Rp %.2f\n", hargaBersih);

    return 0;
}
