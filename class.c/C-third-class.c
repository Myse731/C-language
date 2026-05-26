// #include <stdio.h>
// int main(void){
//     char a = 'A';
//     printf("%c\n", a);
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     double apple;
//     int banana;

//     apple = 5.0 / 2.0;
//     banana = 5 / 2;
//     printf("Apple : %.1f\n", apple);
//     printf("Banana : %.1f\n", apple);

//     apple = 5 / 2.0;
//     banana = 5.0 / 2;
//     printf("Apple : %.1f\n", apple);
//     printf("Banana : %d\n", banana);
//     printf("5 / 2: %.1f\n", (float)(5/2));
//     return 0;

//}

// #include <stdio.h>
// int main(void){
//     int a = 30;
//     int res;

//     res = (a > 10) && (a < 20);
//     printf("%d\n", res);
//     res = (a < 10) || (a > 20);
//     printf("%d\n", res);
//     res = (a >= 30);
//     printf("%d\n", res);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int a = 10,b = 20, res;
//     res = (a < 10) && (++b>20);
//     printf("res : %d, a : %d, b : %d\n", res,a,b);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int a = 10;
//     printf("%.1f", (float)a);
// }

// #include <stdio.h>
// int main(void){
//     int a = 10, b = 20;
//     int res = 2;

//     a += 20;
//     res *= b + 10;

//     printf("a : %d, b = %d\n", a, b);
//     printf("res: %d\n", res);
//     return 0;

// }

// #include <stdio.h>
// int main(void){
//     int a = 10, b = 20,res;
//     res = (a>b) ? a : b;
//     printf("큰 값 : %d\n", res);
//     return 0; 
// }
#include <stdio.h>
int main(void){
    int a = 10, b = 20,res;
    res = (a>b) ? a : b;
    printf("큰 값 : %d\n", res);
    return 0; 
}