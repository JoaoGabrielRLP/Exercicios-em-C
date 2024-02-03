#include <stdio.h> 

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= i; j++){
            if(i % 2 == 0){
                printf("%d", i);
            }
            else{
                printf("%d", j);

                printf("\n");
            }
        }
    }
    
   
}