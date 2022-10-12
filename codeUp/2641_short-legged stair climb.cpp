#include <stdio.h>
int cnt;
int n;

void f(int a, int t){
    if (t > 0) t--;
    if (n == a) cnt++;
    else if (n > a){
        if (t == 0) f(a + 3, 3);
        f(a + 2, t);
        f(a + 1, t);
    }
}

int main(){
    scanf("%d", &n);
    f(0, 0);
    printf("%d", cnt);

    return 0;
}
