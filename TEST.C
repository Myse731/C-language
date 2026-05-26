// #include <stdio.h>
// int main(void){
//     double a = 4.0,b =1.2;
//     printf("%.1f + %.1f =%.1f\n", a, b, a+b);
//     printf("%.1f  %.1f =%.1f\n", a, b, a-b);
//     printf("%.1f * %.1f =%.1f\n", a, b, a*b);
//     printf("%.1f / %.1f =%.1f\n", a, b, a/b);
// }

// #include <stdio.h>
// int main(void){
//     int a,b,tot;
//     double avg;
//     scanf("%d %d", &a,&b);
//     tot = a + b;
//     printf("두 과목의 점수 : %d %d\n", a, b);
//     avg = tot / 2.0;
//     printf("평균 : %.1f\n", avg);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int kor = 3, eng = 5, math = 4;
//     int credit = kor + eng + math;
//     double ks = 3.8, es = 4.4, ms = 3.9;
//     double avg = (ks + es +ms)/ 3;
//     printf("%d", credit >= 10 && avg > 4.0); 

//}

#include <stdio.h>
int main(void){
	double a, b, v, vv;
	scanf("%lf %lf", &a, &b);
	if(a < 150) {
		v = a-100;
	}
	else if(a >= 150 && a < 160){
		v = ((a-150)/2) +50;
	}
	else if(a >= 160){
		v = (a - 100) * 0.9;
	}
    vv = ((b - v) * 100) / v;
    printf((vv <= 10) ? "정상" : (vv >10 || vv <= 20) ? "과체중" :"비만");
}