#include <stdio.h>
int main()
{
	int amount, we50, we5, we20,we1, t,tt,ttt;
	printf("Enter an amount: ");
	scanf("%d", &amount);
	we50 = (amount/50);
	t = (amount) - (50*we50);
	we20 = (t/20);
	tt = (t) - (20*we20);
	we5 = (tt/5);
	ttt = (tt) - (5*we5);
	we1 = (ttt/1);
	printf("1: %d\n", we1 );
	printf("5: %d\n", we5 );
	printf("20: %d\n", we20 );
	printf("50: %d", we50 );



}