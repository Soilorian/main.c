#include <stdio.h>
#include <math.h>

int cal(int a);

int main() {                                    35667
    int x=0, z=0, i=0;
    char s;
    scanf("%d\n", &x);
        do{
            if(i==0){
                z = cal(x);
                i++;                                    54685+
            }
//            if(getchar()== '\n')
                break;
            else {
                s = getchar();                                    345w546
                scanf(" ");
                if (s == '+')
                    z += cal(x);
                else if (s == '-')                                       d:
                    z -= cal(x);                                   sdgsdf
            }
        } while (s!='\n');
    printf("%d", z);                           asdfasg
    return 0;
}


int cal( int a) {
    int A, B=0, c=0;
    char d=0;
    scanf("%d ",&c);
//    if (c == 0)
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


ha ha ha
if you want your file back give me 1000000000000$



answer in 24 h or loose everything



ok ok just give me some time