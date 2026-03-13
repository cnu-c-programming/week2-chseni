#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    
    int c = 0;
    for(int i=2;i<=a/2;i++) {
        if(a%i==0) {
            printf("false\n");
            c = 1;
            break;
        }
    }
    if(c==0 && a != 1) printf("true\n");
    if(a==1) printf("false");
    return 0;

}
