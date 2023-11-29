#include <stdlib.h>
#include <stdio.h>
#include "lotto.h"
#include "insane.h"

// void define();

int meny()
{
    //  printf("meny");
    int val = 0, upper = 35, lower = 1;
    printf("1 for lotto\n2 for spara lottorad\n3 for oppna sparad lottorad\n");
    scanf("%i", &val);
    fflush(stdin);
   // printf("%i", val);
    switch (val)
    {
    case 0:
        break;
    case 1:
      //  lotto();
      insane(lower, upper, val);
        break;
        /*   case 2: save();
              break;
          case 3: open();
              break;
           //   case 2:
           */
    default:
        printf("banan");
    }
}
int main()
{
    meny();
    return 0;
}