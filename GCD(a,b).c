#include <stdio.h>

unsigned int GCD(unsigned int a,unsigned int b) {

unsigned int r, new ;

if(a%b==0) {
return b;
}

while(a%b!=0) {

r = a % b;
b = b % r;

if( r ) {

new = b % r;

if(new == 0) {
return r;
}

}

}
return b;
}

int main(void) {
unsigned int a =99, b = 5 ;
unsigned int final ;
final = GCD(a,b);
printf("%u\n",final);
}
