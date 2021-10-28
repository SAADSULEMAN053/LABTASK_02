#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   int n;
   char t;
   label:
   printf("\n\nEnter the number: ");
   scanf("%d",&n);
    switch(n>0)
    {
    case 1:
        printf("\nPositive number");
        break;
    case 0:
        switch(n<0)
        {
        case 1:
            printf("\nNegative Number");
            break;
        case 0:
            printf("\nNumber is zero");
            break;

        }
    }
    printf("\n\nDo you wish to check more numbers? Press y if yes, n for no: ");
    t=getche();
    if(t=='y'){
    goto label;
    }if(t=='Y')
    {
        goto label;
    }
    else ;
    return 0;
}
