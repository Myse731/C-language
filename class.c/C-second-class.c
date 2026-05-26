// #include <stdio.h>
// int main(void){
//     int a;
//     scanf("%d", &a);
//     printf("입력한 정수 : %d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int age;
//     double height;
//     printf("나이와 키를 입력하세요 :");
//     scanf("%d%lf", &age, &height);
//     printf("나의는 %d세,키는 %.2fcm입니다.\n", age, height);
    
//     return 0;
// }

// #include <stdio.h>
// int main (void){
//     int a,b;
//     scanf("%d%d", &a, &b);
//     printf("a + b = %d\n", a+b);
//     printf("a - b = %d\n", a-b);
//     printf("a * b = %d\n", a*b);
//     printf("a / b = %d\n", a/b);

// }

// #include <stdio.h>
// int main(void){
//     int a,b;
//     a = 10;
//     b = 3;
//     printf("a = %d, b = %d\n", a++, ++b);
//     printf("a = %d, b = %d\n", a--, --b);
//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }
// #include <stdio.h>
// int main(void){
//     int arr[5];

//     arr[0]=10;
//     arr[1]=20;
//     arr[2]= arr[0] + arr[1];
//     scanf("%d", &arr[3]);

//     printf("%d\n", arr[2]);
//     printf("%d\n", arr[3]);
//     printf("%d\n", arr[4]);
// }

// #include <stdio.h>
// int main(void){
//     int a;
//     double b;
//     char c;
//     printf("int형 변수의 주소 : %p\n", &a);
//     printf("float형 변수의 주소 : %p\n", &b);
//     printf("char형 변수의 주소 : %p\n", &c);
// }
// #include <stdio.h>
// int main(void){
//     int a;
//     int * ptr;

//     ptr = &a;
//     *ptr = 10;
//     printf("포인터로 a값 출력 : %d\n", *ptr);
//     printf("변수명으로 a값 출력 : %d\n", a);    
//     printf("포인터로 ptr의값 : %p\n", ptr);    
//     printf("변수 a의 주소 : %p\n", &a); 
// #include <stdio.h>
// int swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x =*y;
//     *y =temp;
//     return 0;
// }
// int main(void){
//     int x = 10, y = 20;
//     printf("swap 함수 호출 전 : a = %d, b = %d\n", x ,y);
//     swap(&x,&y);
//     printf("swap 함수 호출 후 : a = %d, b = %d\n", x,y);
//     return 0;

// }
// #include <stdio.h>
// int main (void){
//     int arr[3];
//     int * ptr = arr;
//     int i;

//     *(arr+0) = 10;
//     *(arr + 1) =*(arr+0) + 10;

//     printf("세 번째 배열 요소에 키보드 입력 : ");
//     scanf("%d", arr+2);

//     printf("arr 0번방 : %d\n", *(ptr++));
//     printf("arr 1번방 : %d\n", *(ptr++));
//     printf("arr 2번방 : %d\n", *(ptr));

// }

// #include <stdio.h>
// struct student {
//     int num;
//     double grade;
// };
// int main(void){
//     struct student s1;
//     s1.num = 2;
//     s1.grade = 3.5;
//     printf("학번 : %d\n", s1.num);
//     printf("학점 : %.11f\n", s1.grade);
// }
// #include <stdio.h>
// struct score{
//     int kor;
//     int eng;
//     int math; 
// };

// int main(void) {
//     struct score yuni = {90,80,70};
//     struct score* ps = &yuni;

//     printf("국어 : %d\n", (*ps).kor);
//     printf("영어 : %d\n", ps -> eng);
//     printf("수학 : %d\n", ps -> math);
//     return 0;
// }