#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d",&a);
    
    int b = sqrt(a);
    int c = 0;
    for(int i=2;i<=b;i++) {
        if(a%i==0) {
            printf("false\n");
            c = 1;
            break;
        }
    }
    if(c==0) printf("true\n");
    return 0;

}
