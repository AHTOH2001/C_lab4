#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

#define true 1
#define false 0
#define err -2000123000
#define max 2147483646
int problem1()
{
    char pc,c,ans[10000];
    int i=0;
    setlocale (LC_ALL, "ru_RU.CP866"); /* выбрать локейл консоли!!*/
    printf ("proga1\n(ctr+z or ctr+x or ctr+c to exit,\nhren znaet pochemu ctr+enter to new line)\n");
    while (true)
    {
        c = getch();
        if (c==26 || c==24 || c==3) break;
        if (pc=='ж' && c=='ы') c = 'и';
        if (pc=='ш' && c=='ы') c = 'и';
        if (pc=='ч' && c=='я') c = 'а';
        if (pc=='щ' && c=='я') c = 'а';
        if (pc=='ч' && c=='ю') c = 'у';
        if (pc=='щ' && c=='ю') c = 'у';
        ans[i] = c;
        printf ("%c",c);
        i++;
        /*if (pc == '-' && c =='-') break;*/
        pc = c;
    }
    

    printf ("\n%s",ans);
    return 0;
}