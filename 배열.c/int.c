#include <stdio.h>
// int sum(int x, int y);

// int main(void){
//     int a, b;
//     int result;

//     scanf("%d%d", &a, &b);
//     result = sum(a, b);
//     printf("a + b = %d\n", result);
//     return 0;
// }

// int sum(int x, int y){
//     return x + y;
// }

// #include <stdio.h>
// void print_line(void);

// int main(void){
//     print_line();
//     printf("학넌\t이름\t전공\t성적\n");
//     print_line();
//     return 0;
// }

// void print_line(){
//     int i;
//     for(i = 0; i < 30; i++){
//         printf("-");
//     }
//     printf("\n");
// }

// #include <stdio.h>

// void hello();

// int main(){
//     hello();
//     return 0;
// }

// void hello(){
//     printf("hello");
//     hello();
// }

// #include <stdio.h>
// void hello(int n);

// int main(){
//     int n;
//     scanf("%d", &n);
//     hello(n);
//     return 0;
// }

// void hello(int n){
//     if (n == 0){
//         return;
//     }
//     else{
//         printf("hello ");
//         hello(n -1);
//     }
//     printf("hi ");
// }

// #include <stdio.h>
// long long fact(int n){
//     if (n == 1) return 1;
//     else{
//         return n * fact(n-1);
//     }
// }

// int main(void){
//     long long f;
//     int n;
//     scanf("%d", &n);
//     f = fact(n);
//     printf("%lld", f);
//     return 0;
// }

// #include <stdio.h>
// int fibo(int n){
//     if (n == 1 || n == 2) return 1;
//     return fibo(n - 1) + fibo(n - 2);
// }

// int main(){
//     int i, n;
//     scanf("%d", &n);
//     printf("%d", fibo(n));
//     return 0;
// }

// #include <stdio.h>
// int two(int n){
// 		if(n == 0){
// 			return 0;
// 		}
// 		else if(n % 2 == 0){
// 			two(n / 2);
// 			printf("0");
// 		}
// 		else if(n % 2 != 0){
// 			two(n / 2);
// 			printf("1");
// 		}
// 	}		

// int main(){
// 	int n;
// 	scanf("%d", &n);
// 	two(n);
// }