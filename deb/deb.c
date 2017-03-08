#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i;
    int a=0, b=0;
    int c[10];
    double d;
    for (i=0; i<=12; i++)
    {
        a++;
        if(a%2==0){
	    b++;
            c[i]=b;	
	}
	else{
	    c[i]=0;	
	}
    }
    for (i=0; i<=12; i++)
    {
        printf("%i ", c[i]);
    }

    return 0;
}