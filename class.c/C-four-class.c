// #include <stdio.h>
// int main(void){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a > b){
//         printf("a > b\n");
//     }
//     else if( a < b){
//         printf("a < b\n");
//     }
//     else{
//         printf("a == b\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int rank;
//     char grade;
//     scanf("%d %c", &rank, &grade);
//     if(rank <= 10 && grade =='A'){
//         printf("전액 장학금");
//     }
//     else if(rank <= 10 && grade =='8'){
//         printf("반액 장학금");

//     }
//     else{
//         printf("장학금 대상 아님");
//     }
// }
#include <stdio.h>
int main(void){
    char ch;
    printf("영어 소문자를 입력하세요: ");
    scanf("%c", &ch);
    swih(ch){
        case 'e': printf("모음"); break;
        case 'a': printf("모음"); break;
        case 'i': printf("모음"); break;
        case 'o': printf("모음"); break;
        case 'u': printf("모음"); break;
        default : printf("자음"); break;
    }
}