#include <stdio.h>
#include <locale.h>
int main(void) {
   int a,k;
   setlocale(LC_ALL, "");
   scanf("%d", &k);
    
  printf("%d", k%2);
    switch (k) {
        case 1: printf("Мне %d год", k); break;
        case 2: printf("Мне %d года", k); break;
        case 3: printf("Мне %d года", k); break;
        case 4: printf("Мне %d года", k); break;
        case 11: printf("Мне %d лет", k); break;
        case 12: printf("Мне %d лет", k); break;
        case 13: printf("Мне %d лет", k); break;
    default: switch (k%10){
        case 0: printf("Мне %d лет", k);break; 
        case 1: printf("Мне %d год", k); break;    
        case 2: printf("Мне %d года", k); break; 
        case 3: printf("Мне %d года", k); break; 
        case 4: printf("Мне %d года", k); break; 
        case 5: printf("Мне %d лет", k); break;
        case 6: printf("Мне %d лет", k); break;
        case 7: printf("Мне %d лет", k); break;
        case 8: printf("Мне %d лет", k); break;
        case 9: printf("Мне %d лет", k); break;
    }
    
    }
  return 0;
}