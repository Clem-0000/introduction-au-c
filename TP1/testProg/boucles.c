#include <stdio.h>
#define MAX 10
int main()
{
int i,j,k ;
for (i=0 ; i < MAX ; i++) {
printf("Valeur de i : %d \n " , i );
}
k= 11 ;
while ( j < MAX ) {
printf("Valeur de k : %d \n " ,k );
i++ ;
}
j= 4 ;
do {
printf("\n\n\t Valeur de j : %d \n ", j );
j= j + j;
} while ( j < MAX );
return 0;
}