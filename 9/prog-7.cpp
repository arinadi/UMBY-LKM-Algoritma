#include <unit1.h>

void main() {
int pj,lb,jari; // Variabel lokal
int luasP; // Variabel lokal
float luasL;
printf("Menghitung Luas Persegi\n");
printf("Masukan Lebar : ");
scanf("%i", &pj);
printf("Masukan Tinggi : ");
scanf("%i", &lb);
hitungLuas(pj, lb, luasP);
printf("Luas Persegi : %i", luasP);
printf("Menghitung Luas Lingkaran\n");
printf("Masukan Jari-jari Lingkaran : ");
scanf("%i", &jari);
luasL = luasLingkaran(jari);
printf("Luas Lingkaran : %f", luasL);
getch();
} 