#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, miring;
	
	printf("Masukkan panjang sisi alas segitiga (dalam cm): ");
	scanf("%f", &alas);
	printf("Masukkan panjang sisi tinggi segitiga (dalam cm): ");
	scanf("%f", &tinggi);
	
	miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	printf("Panjang sisi miring segitiga siku-siku adalah: %.2f cm\n", miring);
	
	return 0;
}
