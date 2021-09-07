# include <stdio.h>

int biggest(int a, int b);

int main() {
    
    int a, b, c, result;

scanf("%d %d %d", &a,&b,&c);

if ((a == b) && ( a == c))
    result = -1;
        else 
    result = biggest(c,biggest(a,b));

printf("%d", result);
return 0;
}


int biggest(int a, int b) {
    int y=0;

    y= (a > b ) ? a : b;
    return y;
}
