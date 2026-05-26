// #include <stdio.h>
// int main(void){
//     int score [10] = {95, 100, 98, 78, 65, 55, 78, 52, 97, 98};
//     int i ;
//     for(int i = 0; i < 10; i++){
//         printf("%d점\n", score[i]);
//     }

// }

// #include <stdio.h>
// int main(void){
//     int score[5];
//     int i, sum = 0;
//     for(i = 0; i < 5; i++){
//         printf("%d번 학생의 프로그래밍 성적 :", i +1);
//         scanf("%d", &score[i]);
//     }
//     for (i = 0; i < 5; i ++){
//         sum += score[i];
//     }
//     printf("합계 : %d\n", sum);
//     printf("평균 : %.2f\n", (double)sum / 5);
// }

// #include <stdio.h>
// int main(void){
//     char str[14] = "Hello, World!";
//     printf("%s\n", str);

//     scanf("%s", str);
//     printf("%s\n", str+5);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char str1[20] = "hello";
//     char str2[20] = {'h', 'e', 'l','l','o'};
//     for(int i = 0; i < 20; i++){
//         printf("%d ", str1[i]);
//     }
//     printf("\n");
//     for(int i = 0; i < 20; i++){
//         printf("%d ", str2[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void){
//     char str1[50] = "cat";
//     char str2[50];

//     strcpy(str1, "dog");
//     strcpy(str2, str1);
//     printf("%s %s\n", str1, str2);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int a;char b;
//     scanf("%d", &a);
//     scanf(" %c", &b);
//     printf("a = %d\n", a);
//     printf("b = %c\n", b);
// }

// #include <stdio.h>
// int main(void){
//     char str[100];
//     scanf("%[^\n]", str);
//     printf("%s ", str);
//     printf("출력 완료");
// }

// #include <stdio.h>
// int main(void){
//     char str[100];
//     fgets(str, 100, stdin);
//     printf("%s", str);
//     printf("출력 완료");
// }

// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str) - 1] = '\0';
//     printf("%s ", str);
//     printf("출력 완료");
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int score[10];
//     int i;
//     for(i = 0; i < sizeof(score) / sizeof(score[0]); i++){
//         scanf("%d", &score[i]);
//     }
// }