
#include <stdio.h>
#include <limits.h>

int main()
{
    int num;
    scanf("%d",&num);
    switch(num){
      case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
        
    default:
        printf("invalid");
        break;
    }   

    return 0;
}


