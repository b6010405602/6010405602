#include <stdio.h>
main()
{
	float sgpa, rgpa, now, ner, wer;
	int cre, tsm;
	printf("Input the previous semester GPA: ");
	scanf("%f", &sgpa);
	printf("Input the previous credits: ");
	scanf("%d", &cre);
	printf("Input the credits this semester: ");
	scanf("%d", &tsm);
	printf("Input the required GPA: ");
	scanf("%f", &rgpa);
	now = rgpa*(cre+tsm);
	ner = sgpa*cre;
	wer = (now - ner)/tsm;
	printf("The GPA this semester should be %.2f", wer ); 
}