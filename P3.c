// Victor Gabriel Feitosa  - 11721ECP002

#include <stdio.h>

int main ()
{
	int numero, i, e, numero_ALT;
	char bin[256], bin1[256], bin2 [256];
	printf ("Escolha a opcao desejada: \n\n"
	"1. NOT\n"
	"2. AND\n"
	"3. OR\n"
	"4. XOR\n"
	"5. Right Shift\n"
	"6. Left Shift\n");
	scanf ("%d", &e);
	
	if (e == 1)
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &numero);
		getchar();
		itoa (numero, bin, 2);
		printf ("\nNOT %d (%s)\n", numero, bin);
		i = ~numero;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	

	}
	
	else if (e == 2) 
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &numero);
		getchar();
		itoa (numero, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &numero_ALT);
		getchar();
		itoa (numero_ALT, bin1, 2);
		printf ("\n%d (%s)\n", numero, bin);
		printf ("\nAND %d (%s)\n", numero_ALT, bin1);
		i = numero&numero_ALT;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	}
	
	else if (e == 3)
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &numero);
		getchar();
		itoa (numero, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &numero_ALT);
		getchar();
		itoa (numero_ALT, bin1, 2);
		printf ("\n%d (%s)\n", numero, bin);
		printf ("\nOR %d (%s)\n", numero_ALT, bin1);
		i = numero|numero_ALT;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);
	}
	
	else if (e == 4)
	{
		printf ("\nDigite um numero:");
		scanf ("%d", &numero);
		getchar();
		itoa (numero, bin, 2);
		printf ("\nDigite outro numero:");
		scanf ("%d", &numero_ALT);
		getchar();
		itoa (numero_ALT, bin1, 2);
		printf ("\n%d (%s)\n", numero, bin);
		printf ("\nXOR %d (%s)\n", numero_ALT, bin1);
		i = numero^numero_ALT;
		itoa (i, bin2, 2);
		printf ("\n:%d (%s)\n", i, bin2);	
	}
	
	else if (e == 5) 
	{
		int n, dado;
		printf("Right Shift\n");
		dado = 0x8000;
		n = 5;
		printf("%04X | >> %d bits | %04X\n", dado, n, dado>>n );
		printf("%04d | >> %d bits | %04d\n", dado, n, dado>>n );

	}
	
	else if (e == 6) 
	{
		int n, dado;
		printf("Left Shift\n");
		dado = 0x0001;
		n = 5;
		printf("%04X | << %d bits | %04X\n", dado, n, dado<<n );
		printf("%04d | << %d bits | %04d\n", dado, n, dado<<n );

	}

	else 
	{
		printf ("Opcao invalida.");
	}
	
	return 0;
}
