// #include <stdio.h>
// int main(void){
//     int a= 1;
//     while(a<10){
//         a = a * 2;
//         printf("a :%d\n", a);
//     }
// }

// #include <stdio.h>
// int main(void){
//     int a = 1;
//     do{ //조건을 안보고 무조건 한번 실행한다.
//         a = a*2;
//         printf("a : %d\n", a);
//     }while(a<10);
// }

// #include <stdio.h>
// int main(void){
//     int a = 1;
//     int i;
    
//     for(i=0;i<4;i++){
//         a = a*2;
//         printf("a : %d\n", a);
//     }
// }

// #include <stdio.h>
// int main(void){
//     for(int i = 0; i < 5; i++){
//         printf("%d", i);
//         if(1==2){
//         break;
//  }
// }
// }

#include <stdio.h>
int main(void){
    int i,j;

    for(i=2;i < 10; i++){
        for(j = 1; j < 10; j++){
            printf("%d * %d = ", i,j);
            printf("%d\n", i*j );
        }
        printf("\n");
    }
}