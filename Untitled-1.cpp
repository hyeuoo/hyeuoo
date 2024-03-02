
#include <stdio.h>

// int main()
// {
//   int num1, num2;
//   int num3 = 30, num4 = 40;

//   printf("num1: %d, num2 : %d \n" , num1,num2);

//   num1 = 10;
//   num2 = 20;
//   printf("num1: %d num2 : %d \n" , num1,num2);
//   printf("num3: %d num4 : %d \n" , num3,num4);
//   return 0;
// }

// int main(){

//   int num1 =3 ;
//   int num2 = 4;
//   int result = num1 + num2;  

//   printf("덧셈 결과 : %d \n" , result);
//   printf("%d + %d = %d \n",num1 , num2 , result);
//   printf("%d와 %d의 합은 %d 입니다.\n" , num1, num2, result);

//   return 0;

// }

// int main(){

//   int a,b,c,d;
//   int sum, minus;

//   printf("a~d까지의 값을 입력하세요 : ");
//   scanf("%d %d %d %d", &a,&b,&c,&d);
//   sum = a + b;
//   minus = a - b;
//   printf("%d + %d = %d\n",a,b,sum);
//   printf("%d - %d = %d\n", a,b,minus);

//   a = a+2;
//   b = b-2;
//   c = c*2;
//   d = d/2;

//   printf("%d %d %d %d\n",a ,b ,c ,d );
//   printf("%d %d %d %d\n",a++ , b--,++a , --b);

//   return 0;

// }


// int main(){
//   int num1 = 9; int num2 = 2;

//   printf("%d + %d = %d \n",num1 , num2 , num1+num2); 
//   printf("%d - %d = %d \n",num1 , num2 , num1-num2);
//   printf("%d * %d = %d \n",num1 , num2 , num1*num2);
//   printf("%d / %d = %d \n",num1 , num2 , num1/num2);
//   printf("%d // %d = %d \n",num1 , num2 , num1%num2);
//   return 0;
// }


// int main(){
  
//   int num1 = 2 , num2 = 4 , num3 = 6;
//   num1 += 3; 
//   num2 *= 4;
//   num3 %= 5;
//   printf("result : %d , %d , %d \n", num1 , num2 , num3);
//   return 0;
// }


// int main() {
//   int num1 = 12;
//   int num2 = 12;

//   printf("num1 : %d \n",num1);
//   printf("num1++ : %d \n",num1++);
//   printf("num1 : %d \n\n",num1);

//   printf("num2 : %d \n",num2);
//   printf("++num2 : %d \n",++num2);
//   printf("num2 : %d \n",num2);

//   return 0;
// }

// int main() {
// int num1 = 10;
// int num2 = (num1--)+2;

// printf("num1 : %d \n",num1);
// printf("num2 : %d \n",num2);

// return 0; 

// }


// int main(){
//   int num1 = 10;
//   int num2 = 12;
//   int result1 , result2 , result3;
//   int a, b, c;

//   a = (num1<num2); // True
//   b = (num1!=num2); // True
//   c = (num1>=num2); // False
//   result1=(num1==num2); // False
//   result2=(num1<=num2); // False
//   result3=(num1>num2); // False

//   printf("a,b,c,d :%d %d %d %d\n ", a,b,c);

//   printf("result1 :%d \n",result1);
//   printf("result2 :%d \n",result2);
//   printf("result3 :%d \n",result3);



//   return 0;
// }

// int main(){
//   int num1 = 10;
//   int num2 = 12;
//   int result1 , result2 , result3;

//   result1 = (num1 ==10 && num2 ==12);
//   result1 = (num1 < 12 || num2 > 12);
//   result3 = (!num1);

//   printf("result1: %d \n" , result1);
//   printf("result2: %d \n" , result2);
//   printf("result3: %d \n" , result3); 

//   return 0;

// }

// int main(){
//     int num1 =1 , num2 = 2;
//     printf("Hello ") , printf("world! \n");
//     num1++,num2++;
//     printf("%d " , num1), printf("%d",num2),printf("\n");
//     return 0;
// }


// int main() {

//   int num1 = 0xA7 , num2 = 0x43 , num3 = 032 , num4 = 024;

//   printf("0xA7의 10진수 정수 값: %d \n",num1);
//   printf("0x43의 10진수 정수 값: %d \n",num2);
//   printf(" 032의 10진수 정수 값: %d \n",num3);
//   printf(" 024의 10진수 정수 값: %d \n",num4);

//   printf("%d-%d=%d\n", num1 , num2 ,num1-num2);
//   printf("%d+%d=%d\n", num3 , num4 ,num3+num4);

//   return 0;

// }

// int main(){
//   int i;
//   float num = 0.0;

//   for(i=0; i<100; i++)
//   num+=0.1;

//   printf("0.1을 100번 더한 결과 : %f \n",num);
//   return 0;
//   }

// int main(){

//   int num1 = 15;
//   int num2 = 20;
//   int num3 = num1 & num2;
//   printf("AND 연산의 결과 : %d\n",num3);
//   return 0;
// }


int main(){

  int num1 = 15;
  int num2 = 20;
  int num3 = num1 | num2;
  printf("AND 연산의 결과 : %d\n",num3);
  return 0;
}