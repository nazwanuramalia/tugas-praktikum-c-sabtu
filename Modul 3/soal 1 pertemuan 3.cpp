#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, luas, keliling;
	
	printf("Masukkan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukakan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	float sisi_Miring = sqrt((alas /2) * (alas / 2) + tinggi * tinggi);
	keliling = alas + 2 * sisi_Miring;
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n, keliling");
	
	return 0;
}
