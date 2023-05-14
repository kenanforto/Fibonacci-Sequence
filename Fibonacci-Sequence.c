#include <stdio.h>

int izbaci_fib(int niz[],int kap)
{
	int i=0,pom,j;
	int prebacio;
	int a=1;
	int b=1;
	while(i<kap)
	{
		prebacio=1;
		a=1;
		b=1;
		while(niz[i]>=a && prebacio==1)
		{
			if(niz[i]==a)
			{
				prebacio=0;
				j=i;
				while(j<(kap-1))
				{
					niz[j]=niz[j+1];
					j++;
				}
				kap--;
			}
			pom=a;
			a=a+b;
			b=pom;
		}
		if(prebacio==1)
		i++;
	}
	return kap;
}
int main() {
	int niz[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int vel = izbaci_fib(niz, 10);
int i;
for (i=0; i<vel; i++)
   printf("%d ", niz[i]);
	return 0;
}
