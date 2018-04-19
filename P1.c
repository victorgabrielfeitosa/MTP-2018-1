// Victor Gabriel Feitosa - 11721ECP002

#include <stdio.h>

int main()
{
int i=0, est;
char bits[256];
    printf("Entre com um numero: ");
scanf("%s", bits);
for (i=0; bits[i]!='\0'; i++)
{
if (bits[i]=='0')
{
if (est==0)
est=0;
else if (est==1)
est=2;
else if (est==2)
est=1;
}
if (bits[i]=='1');
{
if (est==0)
est=1;
if (est==1)
est=0;
if (est==2)
est=2;
}
}
if (est==0)
    printf("\nO numero %s eh um multiplo de 3", bits);
else
    printf("\nO numero %s nao eh um multiplo de 3", bits);
return 0;
}
