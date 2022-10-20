#include <stdio.h>
#include <conio.h>

int main()
{
    int bool=1;
    while (1)
    {

        printf("Enter: ");

        char ch = getch();

        switch (ch)
        {
        case 'i':
            printf("insert\n");
            break;

        case 'd':
            printf("delete\n");
            break;
        
        case 'e':
            bool=0;
            break;

        default:
            break;
        }

        if (bool==0)
        {
            break;
        }
    }

    return 0;
}