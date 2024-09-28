#include <stdio.h>

int main() {
    // Deklarasi variabel
    float hargaAwal = 150000;
    float diskonPersen = 12.5;
    float besarnyaDiskon, hargaBersih;

    // Menghitung besarnya diskon
    besarnyaDiskon = (diskonPersen / 100) * hargaAwal;

    // Menghitung harga bersih yang harus dibayar
    hargaBersih = hargaAwal - besarnyaDiskon;

    // Menampilkan hasil
    printf("Harga awal: Rp %.2f\n", hargaAwal);
    printf("Besarnya diskon: Rp %.2f\n", besarnyaDiskon);
    printf("Harga bersih: Rp %.2f\n", hargaBersih);

    return 0;
}