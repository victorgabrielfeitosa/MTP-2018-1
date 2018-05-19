// Victor Gabriel Feitosa - 11721ECP002

#include <stdio.h>

int main()
{
	int y , x, numero[64], *pnumero;
	char frase[256], *pfrase;
	for(x = 0; x < 256; x++) frase[x] = '\0';
	printf("\t 1 - Codifica \n\t 2 - decodifica \n ");
	scanf("%d",&y);
	getchar();
	switch(y)
	{
		case 1:{
			printf("\tDigite a frase a ser codificada \n\n\t"); 
			gets(frase);
			char *pfrase= frase;
			printf("\n\tFrase codificada:\n\t\t");
			
			for(y=0;frase[y];y++){
				pnumero = (int*)pfrase;
				if(pnumero[x]!=0) printf("%d",pnumero[x]);
				if(pnumero[x+1]!=0) printf(", ");}
			break;
		}
		case 2:
		{
			printf("\tDigite a frase a ser decodifica\n\n\n]");
			
			for(x=0;x<64;x++)
			 {
				printf("\tn%d:\t ", x+1); scanf("%d", &numero[x]);
				pfrase = (char*)numero;
				if(numero[x]==0) 
				break;
			 }
			 printf("\n\n\tFrase decodificada: %s", pfrase);
	    }	
	}
	return 0;
}
