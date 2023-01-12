#include <stdio.h>
#include<conio.h>
#include <string.h>

int main()
{
    char sifre[100];
    printf("Buyuk harflerle ADFGVX sifresini giriniz:");
    scanf("%s",sifre);
     char harfTablo[26][2] = {
        {'D', 'A'},
        {'F', 'B'},
        {'G', 'C'},
        {'V', 'D'},
        {'X', 'E'},
        {'A', 'F'},
        {'G', 'G'},
        {'V', 'H'},
        {'X', 'I'},
        {'A', 'J'},
        {'G', 'K'},
        {'V', 'L'},
        {'X', 'M'},
        {'A', 'N'},
        {'G', 'O'},
        {'V', 'P'},
        {'X', 'Q'},
        {'A', 'R'},
        {'G', 'S'},
        {'V', 'T'},
        {'X', 'Y'},
        {'A', 'V'},
        {'G', 'W'},
        {'V', 'X'},
        {'X', 'Y'},
        {'A', 'Z'}
    };
    int i;
    for (i = 0; i < strlen(sifre); i++)
    {
        char c = sifre[i];
        int j;
        for (j = 0; j < 26; j++)
        {
            if (harfTablo[j][0] == c)
            {
                printf("%c", harfTablo[j][1]);
                break;
            }
        }
    }
    return 0;
}
