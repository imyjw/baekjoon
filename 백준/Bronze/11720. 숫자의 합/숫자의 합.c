#include<stdio.h>

int main(void)
{
	int x;
	char a[100];
	int n=0;
	int ans = 0;

	scanf("%d", &x);
	scanf("%s", a);


	for (;n < x;n++)
	{
		ans = ans + (a[n] - '0');
	}
	printf("%d", ans);

	return 0;
}