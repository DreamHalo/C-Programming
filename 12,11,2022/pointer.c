#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>










//               pointer ->  korsatkich  
//       pointer bu boshqa bir ozgaruvchining manzilini qiymat sifatida saqlaydigan ozgaruvchi. 
//                *(yulduscha)
//      1) elonqilinayotgan ozgaruvchini pointer ekanligini anglatadi
//      2) qiymatini qiymatiga mirojat qilish uchun  





int main(){

//    int a,b;
//    scanf("%d %d",&a,&b);
//    int *ptr=&a;
//    int *ptr2=&b;
//    if(*ptr>*ptr2){
//     *ptr2=*ptr;
//    }else{
//     *ptr=*ptr2;
//    }
   
//    printf("  %d || %d",*ptr,*ptr2);
    
//     int a,natija=0;
    
//     scanf("%d",&a);
//   int *ptr=&a,*ptr2=&natija;
//     for(; *ptr; *ptr/=10){
//         *ptr2+=*ptr%10;
//     }  *ptr=*ptr2;

//       printf("%d",a);





















//   Musinov Akrom
int son, natija=0,natija2=0,natija3=0;
scanf("%d",&son);

for(int i=son; i; i/=10){
    natija+=i%10;
}
  if(natija>=10){
    for(int i=natija; i; i/=10){
    natija2+=i%10;
  }
  if(natija2>=10){
    for(int i=natija2; i; i/=10){
    natija3+=i%10;
  }
       printf("[1] natija -> %d", natija3);
  } 
  else
      {
          printf("[2] natija -> %d", natija2);
      }
  }
    else{
    printf("[3] natija %d", natija);
    }



}



