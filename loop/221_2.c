#include <stdio.h>
double CelToFah(double num);
double FahToCel(double num);

int main(void)
{
	int type; 
	double num;
	printf("What do you want to convert (1. Cel->Fah, 2. Fah->Cel): ");
	scanf("%d", &type);

	switch(type)
	{
	case 1:
		printf("Write down the temperature: ");
		scanf("%lf", &num);
		CelToFah(num);
		break;
	case 2:
		printf("Write down the temperature: ");
		scanf("%lf", &num);
		FahToCel(num);
		break;
	default:
		printf("Wrong type! Choose between 1 and 2!\n");
		main();
	}
}

double CelToFah(double num)
{
	double res;
	res = 1.8 * num + 32;	
	printf("Resulting temperature in Fahrenheit: %lf", res);
	return 0;
}

double FahToCel(double num)
{
	double res;
	res = (num - 32) * 5 / 9;
	printf("Resulting temperature in Celcius: %lf", res);
	return 0;
}
