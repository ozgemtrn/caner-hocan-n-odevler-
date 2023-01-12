#include <stdio.h>
#include<conio.h>
#include <string.h>

int main()
{
    char kelime[100];
    printf("Buyuk harflerle kelimeyi giriniz:");
    scanf("%s", kelime);
    char harfTablo[26][2] = 
	{
        {'A', 'D'},
        {'B', 'F'},
        {'C', 'G'},
        {'D', 'V'},
        {'E', 'X'},
        {'F', 'A'},
        {'G', 'G'},
        {'H', 'V'},
        {'I', 'X'},
        {'J', 'A'},
        {'K', 'G'},
        {'L', 'V'},
        {'M', 'X'},
        {'N', 'A'},
        {'O', 'G'},
        {'P', 'V'},
        {'Q', 'X'},
        {'R', 'A'},
        {'S', 'G'},
        {'T', 'V'},
        {'U', 'X'},
        {'V', 'A'},
        {'W', 'G'},
        {'X', 'V'},
        {'Y', 'X'},
        {'Z', 'A'}
    };

    int i;
    for (i = 0; i < strlen(kelime); i++)
    {
        char c = kelime[i];
        int j;
        for (j = 0; j < 26; j++)
        {
            if (harfTablo[j][0] == c)
            {
                printf("%c%c", harfTablo[j][1], harfTablo[j][1]);
                break;
            }
        }
    }
    return 0;
}


