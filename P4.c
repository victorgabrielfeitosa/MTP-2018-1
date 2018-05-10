// Victor Gabriel Feitosa - 11721ECP002 

int main() 
{
	int cum=0, i;
	char n[256];

	printf("Digite um numero: ");
	scanf("%s", &n);
	getchar ();
	
	for (i=0; n[i] != '\0'; i++)
	{
		if (n[i] >=48 && n[i] <= 57)
		{
			n[i] = n[i] - '0';
			cum = cum*10 + n[i];
		}
	}
	
	printf("\nO numero digitado: %d", cum);
	return 0;
}
