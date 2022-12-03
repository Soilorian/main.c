#include <stdio.h>
#include <math.h>

#define PI 3.14
#define A(r) (PI*(r*r))

int cal(int a);

int main() {
    int x=0, z=0, i=0;
    char s;
    scanf("%d\n", &x);
        do{
            if(i==0){
                z = cal(x);
                i++;
            }
            if(getchar()== '\n')
                break;
            else {
                s = getchar();
                scanf(" ");
                if (s == '+')
                    z += cal(x);
                else if (s == '-')
                    z -= cal(x);
            }
        } while (s!='\n');
    printf("%d", z);

    printf("%d", A(z);)
    return 0;
}


int cal( int a) {
    int A, B=0, c=0;
    char d=0;
    scanf("%d ",&c);
    if (c == 0)
        A = 1;
    else
        A = c;
    scanf("%c", &d);
     if((int)d == 120)
        scanf(" ^ %d", &B);
    else
        scanf(" x ^ %d", &B);
    c = pow(a, B)*A;
    return c;
}

