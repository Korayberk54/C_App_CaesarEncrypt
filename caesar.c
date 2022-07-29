#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int k;
    
    if ( argc != 2 )
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0 , n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]) || argv[1][i] < 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        k = atoi(argv[1]);
    }
    string p = get_string("plaintext: ");
    int l = strlen(p);
    char c[l];
    for (int i = 0; i < l; i++)
    {
        c[i] = p[i];
    }
    printf("ciphertext: ");
    for ( int i = 0; i < l; i++)
    {
        if(c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = (((c[i] + k)%97)%26)+97;
            printf("%c", c[i]);
        }
        else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = (((c[i] + k)%65)%26)+65;
            printf("%c", c[i]);
        }
        else
        {
            c[i] = c[i];
            printf("%c", c[i]);
        }
    }
    printf("\n");
}


