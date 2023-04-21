#include <iostream>
#include "stdlib.h"

int main()
{
    int a[5]  = {6,4,5,1,3};
    for(int i=0;i<5;i++){
        printf("%d ", a[i]) ;
    }
    printf("\n start\n") ;
    for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5-i-1; j++) {//最后一个数组元素不参与比较
                if (a[j]>a[j+1] ) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
                
            }
            printf(" 打印剩余数组 每次获取到最大的那个数 %d\n", a[5-i-1]) ;//打印剩余数组 每次获取到最大的那个数
    }
    printf("end\n") ;
    for(int i=0;i<5;i++){
        printf(" %d ", a[i]) ;
    }
}




