#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    int nokt_isrt_sys = 0;
    int i;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    for (i=0;i<strlen(cumle);i++)
    {
        if (cumle[i] == '.' || cumle[i] == ',' || cumle[i] == '!' || cumle[i] == '?' || cumle[i] == ':' || cumle[i] == ';' || cumle[i] == '-' || cumle[i] == '\'' || cumle[i] == '\"')
        {
            nokt_isrt_sys++;
        }
    }

    printf("Cumlede %d tane noktalama isareti var.\n", nokt_isrt_sys);

    return 0;
}
