// #include <stdio.h>
// #define PI 3.14159
// #define LIMIT 100.0
// #define MSG "passed!"
// #define ERR_PRN printf("Exceed limits\n")

// int main(){
//     double radius, area;

//     printf("input radius : ");
//     scanf("%lf", &radius);
//     area = PI * radius * radius;
//     if(area > LIMIT) ERR_PRN;
//     else printf("circle area : %.2lf (%s)\n", area, MSG);
// }

// #include <stdio.h>
// #define MUL(a, b) (a * b)
// #define SUB(a, b) (a - b)
// #define SWAP(a, b) {int temp = a; a = b; b = temp;}

// int main(void){
//     int a = 20, b = 10;
//     printf("Sub : %d\n", SUB(a, b));
//     printf("Product: %d\n", 400/MUL(a, b));
//     SWAP(a, b);
//     printf("swap_Sub : %d\n", SUB(a, b));
//     return 0;
// }

// #include <stdio.h>

// struct student{
//     int num;
//     char name[20];
//     double grade;
// };

// int main(){
//     struct student s1;
//     scanf("%d", &s1.num);
//     scanf("%s", s1.name);
//     scanf("%lf", &s1.grade);
//     printf("num : %d\n", s1.num);
//     printf("name : %s\n", s1.name);
//     printf("grade : %.1lf\n", s1.grade);
// }

#include <stdio.h>
 struct student {
    char a;
    long long b;
    char c;
 };

int main(){
    struct student s1;
    printf("%d\n", sizeof(s1.a));
    printf("%d\n", sizeof(s1.b));
    printf("%d\n", sizeof(s1.c));
    printf("%d", sizeof(s1));
    return 0;
}