#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
int problem2()
{
    FILE *fp = fopen("file.txt", "r");
    int i, min = 5000000, max = -1, o, x, sm, d, m, y;
    char s[10000];
    while (!feof(fp))
    {
        fscanf(fp, "%s", s);
        i = 0, o = 0, x = 0, sm = 0;
        while (s[i] != '\0')
        {
            if (!(s[i] >= '0' && s[i] <= '9') && s[i] != '.')
            {
                printf("Extraneous symbol");
                return 0;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                x = x * 10 + s[i] - '0';
                if ((o == 0 && x > 30) || (o == 1 && x > 12) || (o == 2 && x > 9999))
                {
                    printf("Wrong date");
                    return 0;
                }
            }
            else if (s[i] == '.')
            {
                if (x == 0)
                {
                    printf("Wrong date");
                    return 0;
                }
                if (o == 0)
                    sm += x;
                else if (o == 1)
                    sm += (x - 1) * 30;
                else
                {
                    printf("Extraneous symbol");
                    return 0;
                }
                o++;
                x = 0;
            }

            i++;
        }
        if (o != 2)
        {
            printf("Wrong date");
            return 0;
        }
        sm += x * 365;
        if (sm > max)
            max = sm;
        if (sm < min)
            min = sm;
        //printf("%s\n", s);
    }

    y = min / 365;
    min %= 365;
    if (min % 30 == 0)
    {
        d = 30;
        m = (min - 30) / 30;
    }
    else
    {
        m = min / 30;
        d = min % 30;
    }
    printf("%02d.%02d.%04d\n", d, m + 1, y);
    y = max / 365;
    max %= 365;
    if (max % 30 == 0)
    {
        d = 30;
        m = (max - 30) / 30;
    }
    else
    {
        m = max / 30;
        d = max % 30;
    }
    printf("%02d.%02d.%04d\n", d, m + 1, y);
    //for (i=0;i<)
}