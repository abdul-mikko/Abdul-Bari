#include <stdio.h>
#include <string.h>

int main()
{
    // LENGTH-----------------------------------------------------------------
    // char *name = "Mikko";
    // int i = 0;
    // for (i = 0; name[i] != '\0'; i++)
    // {
    // }

    // printf("length of string is %d", i);

    // LOWER CASE-----------------------------------------------------------

    // char lCase[] = "MIKKO";
    // int i;
    // for (i = 0; lCase[i] != '\0'; i++)

    // {
    //     lCase[i] = lCase[i] + 32;
    // }
    // printf("%s", lCase);

    // TOGGLE-----------------------------------------------------------------
    // char toggle[] = "MikkoAdil";
    // int i;
    // for (i = 0; toggle[i] != '\0'; i++)
    // {

    //     if (toggle[i] >= 'A' && toggle[i] <= 'Z')
    //     {
    //         toggle[i] += 32;
    //     }
    //     else if (toggle[i] >= 'a' && toggle[i] <= 'z')
    //     {
    //         toggle[i] -= 32;
    //     }
    //     else
    //     {
    //     }
    // }
    // printf("toggled string is %s", toggle);

    char CheckAnagram1[] = "obseRve";
    char CheckAnagram2[] = "VERbose";

    int checkAnagram(char lowerCase[])
    {

        int i, sum = 0;
        for (i = 0; lowerCase[i] != '\0'; i++)
        {

            if (lowerCase[i] >= 'A' && lowerCase[i] <= 'Z')
            {
                lowerCase[i] += 32;
            }
            sum += lowerCase[i];
        }

        return sum;
    }

    if ((checkAnagram(CheckAnagram1) == checkAnagram(CheckAnagram2)))
    {

        printf("Anagram exist");
    }
    else
    {

        printf("Anagram does not exist");
    }

    return 0;
}