#include <stdio.h>
void dizi(int ustLimit)
{

if (ustLimit == 1)
{
    printf("1\n");
    return;
}

dizi(ustLimit - 1);
printf("%d\n", ustLimit);
}

int main(void)
{
int ustLimit;
printf("Ust limiti giriniz: ");
scanf("%d", &ustLimit);
dizi(ustLimit);
return 0;
}


