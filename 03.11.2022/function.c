#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

// void nimadur(){
//    int a;
//    printf("Son kiriting:  ");
//    scanf("%d", &a);
//    if(a%2==0){
//    printf("juft");}
//    else { 
//     printf("Toq");}
// }



// void birbalo(int a, int b){
     
//    if(a>b){
//     printf("%d katta",a);}
//     else{
//     printf("%d katta",b);
//     }
// }



// void nimadurla(int d, int s, int a, int w){
//     printf("natija %d",(d+s)*(a-w));
// }


// void sum(int a, int b){
//     printf("%d\n",a*b );
// }

// int main(){
//     sum(4,53);
// }





// void sum(int a, int b){
//     puts("Apple");
//     printf("%d",a+b);
// }

// int main(){
//     sum(9,8);
// }





// void sum(int a){
//     printf("%d\n",a);
// }

// int main(){
//     sum(44);
// }
// float son(){
//  int   a=4;
//  float  b=5.6;
// printf("%f\n", a+b);
// return a+b;  
// }
// int main(){

// float natija=son();

// }
// int main(){

// nimadur();
// birbalo(d,s);
// int d,s,a,w;
//  printf("1chi Son kiriting:\n  ");
//    scanf("%d", &d);
//     printf("2chi Son kiriting:\n  ");
//    scanf("%d", &s);
//    printf("3chi Son kiriting:\n  ");
//    scanf("%d", &a);
// printf("4chi Son kiriting:\n  ");
//    scanf("%d", &w);

// nimadurla(d,s,a,w);





}









void son(int a){
  for(int i=0;i<=a;i++){
    for(int j=0;j<=a;j++){
        if(i==0 i==a j==0 || j==a){
            printf("1 ");
        } else if(i==j ) {
           printf("1 ");
        }else{
            printf("  ");
        }
    }
    puts("");
  }
}
int main(){
    int a;
    scanf("%d",&a);
    son(a);
}
