# include <stdio.h>
# include <math.h>

int calci(int a, int b, char opr);

int main(){
    int a=0;
    int b=-0;
    int result;
    char c;

    scanf("%d %d %c",&a, &b, &c);
    if ((c == '*')|| (c == '+') || (c == '-') || (c == '/')){
        if ((c == '/') && (b == 0)){
            result = -2;
        }
        else {
            result = calci(a,b,c);
    }
        
    }
    else {
        result = -1;
    }
    printf("%d",result);
    
    return 0;
}


int calci(int a, int b, char opr) {
    int result;
    switch (opr)
    {
    case '+':
        result = a + b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '-':
        result = a - b;
        break;

    default:
        break;
    }
return result;    
}