#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int N;
	printf("ââåäèòå âðåìÿ N â ìèíóòàõ");
	scanf_s("%d", &N);

	int t1 = N;
	int t2 = N + 10;
	int t3 = N + 20;
	int t4 = N + 30;
	int totaltime = t1 + t2 + t3 + t4;
	printf("îáùåå âðåìÿ: %d ìèíóò\n", totaltime);
	return 0;

}
