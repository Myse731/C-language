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

// #include <stdio.h>
//  struct student {
//     char a;
//     long long b;
//     char c;
//  };

// int main(){
//     struct student s1;
//     printf("%d\n", sizeof(s1.a));
//     printf("%d\n", sizeof(s1.b));
//     printf("%d\n", sizeof(s1.c));
//     printf("%d", sizeof(s1));
//     return 0;
// }

// #include <stdio.h>

// struct profile{
//     int age;
//     double height;
// };

// struct student{
//     struct profile pf;
//     int id;
//     char * name;
//     double grade;
// };

// int main(){
//     struct student s1;
//     s1.pf.age = 17;
//     s1.pf.height = 164.7;
//     s1.id = 315;
//     s1.name = "John Doe";
//     s1.grade = 3.75;
//     printf("age : %d\n", s1.pf.age);
//     printf("height : %.1lf\n", s1.pf.height);
//     printf("id : %d\n", s1.id);
//     printf("name : %s\n", s1.name);
//     printf("grade : $.2lf\n", s1.grade);
// }

// #include <stdio.h>
// struct score{
//     int kor;
//     int eng;
//     int math;
// };

// int main(){
//     struct score s = {90, 80, 70};
//     struct score *ptr = &s;

//     printf("kor : %d\n", (*ptr).kor);
//     printf("eng : %d\n", ptr -> eng);
//     printf("math : %d\n", ptr -> math);
//     return 0;
// }

// #include <stdio.h>

// struct address{
//     char name[20];
//     char phone[20];
//     char addr[30];
// };

// int main(){
//     struct address list[5] = {
//         {"Kim", "111-1111", "Busan"},
//         {"Lee", "222-2222", "Seaul"},
//         {"Park", "333-3333", "Incheon"},
//         {"Choi", "444-4444", "Daegu"},
//         {"Kang", "555-5555", "Gwangju"}
//     };

//     int i;

//     for(i = 0; i < 5; i++){
//         printf("%5s %10s % 10s\n",
//         list[i].name, list[i].phone, list[i].addr);
//     }
//     return 0;
// }

// #include <stdio.h>
// struct address{
//     char name[20];
//     char phone[20];
//     char addr[30];
// };

// void print_list(struct address *lp){
//     int i;
//     for(i = 0; i < 5; i++){
//         printf("%5s %10s %10s\n", lp[i].name, (lp+i)-> phone, (lp+1)->addr);
//     }
// }

// int main(){
//     struct address list[5] = {
//         {"Kim", "111-1111", "Busan"},
//         {"Lee", "222-2222", "Seaul"},
//         {"Park", "333-3333", "Incheon"},
//         {"Choi", "444-4444", "Daegu"},
//         {"Kang", "555-5555", "Gwangju"}
//     };
//     print_list(list);
//     return 0;
// }

// #include <stdio.h>

// struct list{
//     int num;
//     struct list * next;
// };

// int main(){
//     struct list a = {10, NULL}, b = {20, NULL}, c = {30, NULL};
//     struct list * head = &a, *current;

//     a.next = &b;
//     b.next = &c;

//     printf("list all : ");
//     current = head;
//     while(current != NULL){
//         printf("%d ", current -> num);
//         current = current -> next;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct train Train;

// struct train {
//     int seats;
//     Train *next;
// };

// int main(){
//     Train *head = NULL, *tail = NULL;
//     int i;
//     for(i = 0; i < 5; i++){
//         if(head == NULL){
//             head = tail = (Train *)malloc(sizeof(Train));
//         }
//         else{
//             tail -> next = (Train *)malloc(sizeof(Train));
//             tail = tail -> next;
//         }
//     }
//     return 0;
// }