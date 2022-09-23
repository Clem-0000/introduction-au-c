#include <stdio.h>
int main(){
int i=5,j=2,k ;
float w,x,y,z ;


int B= 15 ;
char c = 'A';
printf("\n\t\tValeur de B en decimal est : %o \n\t\t et en hexa A vaut %x" , B, B );
printf(" \n \nBonjour \t******** tout le monde\n\n\n Il est beau il est gentil\n") ;

x = 1.2345;
printf(" * cas 1 : %f\n" , x );
x = 12.3456789;
printf(" ** cas 2 : %f\n" , x );
x = 1.234500000;
printf(" *** cas 3 : %f\n" , x );
x = 1.2345E5;
printf(" **** cas 4 : %e\n" , x );
x = 1.2345;
printf(" ***** cas 5 %10f\n " , x );
x = 123.45;
printf("****** cas6 %10f\n" , x );
w=i/2+1;
x=i/2.+1;
y=++i/2 +1/2.;
z=i++/j + 1/2;
printf (" Les valeurs de w : %f celle de x= %f y vaut %f z vaut : %f , et enfin i = %d
\n", w,x, y , z,i) ;
return 0 ;
}
3.3 F