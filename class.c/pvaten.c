// #include <stdio.h>

// int chars(char * arr){
//     int sum = 0;
//     while(*(arr++) != '\0'){
//         sum += 1;
//     }

//     return sum;
// }

// void pal(char * arr){
//     char arr2[11];

//     int len = chars(arr);

//     for(int i = 0; i < len; i++){
//         *(arr2 + len -1 -i) = *(arr + i);
//     }

//     arr2[len] = '\0';

//     int same = 1;

//     for(int i = 0; i < len; i++){
//         if(*(arr2 + i) == *(arr + i)){
//             same = 0;
//             break;
//         }
//     }

//     if(same == 1){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }

// int main(void){
//     char arr[11];

//     scanf("%10s", arr);

//     pal(arr);
// }

// #include <stdio.h>
// int main() {
// 	double a, b;
// 	scanf("%lf%lf", &a, &b);
// 	swap(&a, &b);
// 	printf("%.2f %.2f", a, b);
// 	return 0;
// }
// void swap(double *a, double *b){
// 	double temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// #include <stdio.h>
// void sort(int *a, int *b, int *c)
// {
//     if (*a > *b)
//     {
//         swap(a, b);
//     }
//     if (*a > *c)
//     {
//         swap(a, c);
//     }
//     if (*b > *c)
//     {
//         swap(b, c);
//     }
// }
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
// 	int a, b, c;
// 	scanf("%d%d%d", &a, &b, &c);
// 	sort(&a, &b, &c);
// 	printf("%d %d %d", a, b, c);
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5], i;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", arr + i);
//     }
//     printf("%d", max(arr));
// }
// int max(int *arr)
// {
//     int max = 0;
//     for (int j = 0; j < 5; j++)
//     {
//         if (max <= *(arr + j))
//         {
//             max = *(arr + j);
//         }
//     }
//     return max;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int max(int *, int);
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int j;
//     int *arr = (int *)malloc(sizeof(int) * n);

//     for (j = 0; j < n; j++)
//     {
//         scanf("%d", arr + j);
//     }

//     printf("%d", max(arr, n));
// }
// int max(int *arr, int n)
// {
//     int max = 0;
//     for (int h = 0; h < n; h++)
//     {
//         if (max <= *(arr + h))
//         {
//             max = *(arr + h);
//         }
//     }
//     return max;
// }

// #include <stdio.h>
// int main()
// {
//     char arr[11];
//     scanf("%s", arr);
//     printf("%d", chars(arr));
// }
// int chars(char *arr)
// {
//     int sum = 0;
//     while (*(arr++) != '\0')
//     {
//         sum += 1;
//     }
//     return sum;
// }

// #include <stdio.h>

// int chars(char * arr){
//    int sum = 0;

//    while(*(arr++) != '\0'){
//        sum += 1;
//    }

//    return sum;
// }

// void pal(char *arr){

//     char arr2[11];

//     int len = chars(arr);

//     for(int i = 0; i < len; i++){
//         *(arr2 + len - i - 1) = *(arr + i);
//     }

//     arr2[len] = '\0';

//     int same = 1;

//     for(int i = 0; i < len; i++){
//         if(*(arr2 + i) != *(arr + i)){
//             same = 0;
//             break;
//         }
//     }

//     if(same == 1){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }

// int main(void){

//     char arr[11];

//     scanf("%10s", arr);

//     pal(arr);
// }

// #include <stdio.h>
// void swap(int *a, int *b){
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// int min(int * arr,int start, int n){
// 	int idx = start;
// 	for(int i = start; i < n; i++){
// 		if(*(arr + idx) >= *(arr + i)){
// 			idx = i;
// 		}
// 	}
// 	return idx;
// }


// int main(void){
// 	int n;
// 	scanf("%d", &n);
// 	int arr[n];
// 	for(int i = 0; i < n; i++){
// 		scanf("%d", arr + i);
// 	}
// 	for(int i = 0; i < n-1; i++){
// 		swap(arr+i, arr+min(arr, i, n));
// 	}
// 	for(int i = 0; i < n; i++){
// 		printf("%d ", *(arr + i));
// 	}
// }

// #include <stdio.h>

// int chars(char * arr){
//     int sum = 0;
//     while(*(arr++) != '\0'){
//         sum += 1;
//     }

//     return sum;
// }

// void pal(char * arr){
//     char arr2[11];

//     int len = chars(arr);

//     for(int i = 0; i < len; i++){
//         *(arr2 + len -1 -i) = *(arr + i);
//     }

//     arr2[len] = '\0';

//     int same = 1;

//     for(int i = 0; i < len; i++){
//         if(*(arr2 + i) == *(arr + i)){
//             same = 0;
//             break;
//         }
//     }

//     if(same == 1){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }


// int main(void){
//     char arr[11];

//     scanf("%10s", arr);

//     pal(arr);
// }

// #include <stdio.h>

// int main() {
//     int score[3][4];
//     int total;
//     double avg;
//     int i, j;

//     for(i = 0; i < 3; i++) {
//         printf("4과목의 점수 입력 : ");
//         for(j = 0; j < 4; j++) {
//             scanf("%d", &score[i][j]);
//         }
//     }

//     for(i = 0; i < 3; i++) {
//         total = 0;

//         for(j = 0; j < 4; j++) {
//             total += score[i][j];
//         }

//         avg = total / 4.0;

//         printf("%d번 학생의 총점 : %d, 평균 : %.2lf\n", i + 1, total, avg);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char animal[5][20];
//     int i;
//     int count;

//     count = sizeof(animal) / sizeof(animal[0]);
//     for(i = 0; i < count; i++){
//         scanf("%s", animal[i]);
//     }
//     for(i = 0; i < count; i++){
//         printf("%s ", animal[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int score[2][3][4] = {
//         {{72, 80, 95, 60}, {68, 98, 11, 22}, {33, 11, 24, 54}},
//         {{66, 44, 66, 33}, {13, 43, 57, 89}, {14, 34, 6, 77}}
//     };
//     int i, j, k;
//     for(i = 0; i < 2; i++){
//         printf("%d반 학생들의 점수:\n", i+1);
//         for(j = 0; j< 3; j++){
//             printf("%d반 학생 : ", j+1);
//             for(k = 0; k < 4; k++){
//                 printf("%d ", score[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int a = 10, b = 20, c= 30;
//     int *ptr[3] = {&a, &b, &c};

//     for(int i = 0; i < 3; i++){
//         printf("%d ", *ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int ary1[4] = {11, 12, 13, 14};
//     int ary2[4] = {15, 16, 17, 18};
//     int ary3[4] = {19, 20, 21, 22};
//     int *ptr[3] = {ary1, ary2, ary3};
//     int i, j;

//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 4; j++){
//             printf("%5d", ptr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char *animal[5] = {"dog", "elephant", "horse", "tiger", "lion"};
//     int i;
//     for(i = 0; i < 5; i++){
//         printf("%s", animal[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// void print_str(char **pps, int cnt);

// int main(){
//     char  *animal[5] = {"dog", "elephant", "horse", "tiger", "lion"};
//     int cnt;

//     cnt = sizeof(animal) / sizeof(animal[0]);
//     print_str(animal, cnt);
//     return 0;
// }

// void print_str(char **pps, int cnt){
//     int i;
//     for(i = 0; i < cnt; i++){
//         printf("%s ", pps[i]);
//     }
// }

// #include <stdio.h>
// int main(){
//     int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     int (*pa)[4] = ary;
//     int i, j;

//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 4; j++){
//             printf("%4d", pa[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a = 10;
//     int *pi;
//     int **ppi;

//     pi = &a;
//     ppi = &pi;

//     printf("  a : %12d %12p\n", a, &a);
//     printf(" pi : %12p %12p %12d\n", pi , &pi, *pi);
//     printf("ppi : %12p %12p %12p %12d", ppi, &ppi, *ppi, **ppi);
//     return 0;
// }


// #include <stdio.h>
// void swap_ptr(char **x, char **y);

// int main(){
//     char *pa = "success";
//     char *pb = "failure";

//     printf("pa -> %s, pb -> %s\n", pa, pb);
//     swap_ptr(&pa, &pb);
//     printf("pa -> %s, pb -> %s\n", pa, pb);

//     return 0;
// }
// void swap_ptr(char **x, char **y){
//     char *temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }