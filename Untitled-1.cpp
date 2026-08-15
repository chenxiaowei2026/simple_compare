#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("请输入两个数字");
    scanf("%d%d",&a,&b);

    if (a > b)
        printf("%d比%d大",a,b);
    else if (a == b)
        printf("%d和%d一样大",a,b);
    else
        printf("%d比%d小",a,b);

    return 0;
}