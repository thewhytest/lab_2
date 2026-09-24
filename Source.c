#include <stdio.h>
#include <locale.h>
#define		G	3.79
#define		B	134.6
int main()
{
	int kg;
	float result_g, result_b;
	setlocale(LC_CTYPE, "RUS");
	puts("¬ведите килограммы:");
	scanf("%d", &kg);


	result_g = G * kg;
	result_b = B * kg;

	printf("%d галлоны - %.2f", kg, result_g);
	printf("%d баррели - %.2f", kg, result_b);

	return 0;
}