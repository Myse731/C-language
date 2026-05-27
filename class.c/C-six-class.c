// #include <stdio.h>
// int a;
// void assign_a(void){
//     a = 10;
// }
// void assign_b(void){
//     int a;
//     a = 20;
// }
// int main(void){
//     printf("main a : %d\n", a);
//     assign_a();
//     printf("assign_a a : %d\n", a);
//     assign_b();
//     printf("assign_b a : %d\n", a);
//     return 0;
// }

// #include <stdio.h>
// void st(void){
//     static int a = 1;
//     printf("%d ", a++);
// }
// void at(void){
//     int a = 1;
//     printf("%d ", a++);
// }
// int main(void){
//     st();
//     st();
//     st();
//     at();
//     st();
//     st();
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int arr[3];
//     int *ptr  = arr;
//     int i;
//     *(arr + 0) = 10;
//     *(arr + 1) = *(arr + 0) + 10;

//     printf("세 번째 배열 요소에 키보드 입력 : ");
//     scanf("%d", arr + 2);

//     printf("arr 0번방 : %d\n", *(ptr++));
//     printf("arr 1번방 : %d\n", *(ptr++));
//     printf("arr 2번방 : %d\n", *(ptr));
// }

// int main(void){
//     int ary[3];
//     int *ptr = ary;
//     int i;

//     *ptr = 10;
//     *(ptr + 1) = 20;
//     ptr[2] = ptr[0] + ptr[1];
//     for(i = 0; i < 3; i++){
//         printf("%d ", ptr[i]);
//     }
// }
// #include <stdio.h>
// int main(void){
//     int a[5] = {10, 20, 30, 40, 50};
//     int *ptr = a;
//     int *ptr2 = a+3;
//     if(ptr2 > ptr){
//     printf("%ld\n", ptr2 - ptr);
//     }
//     else{
//         printf("ptr2 <= ptr\n");
//     }
//     return 0;
// }