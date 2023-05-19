#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>


int main(){                                      
//     char soz[10];
//     printf("%s",soz);
//     for(int i=0;i<10;i++){
//         if(soz[i]=='\0'){
//             printf("%s\\0");
//         }
//         printf("%c",soz[i]);

//     }
//     puts("");             

//     scanf("%s",soz);
//    for(int i=0;i<10;i++){
//         if(soz[i]=='\0'){                 
//             printf("%s\\0");
//         }
// }   

// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='a' && as[i]<='z')||(as[i]>='A' && as[i]<='Z')){
//             d++;
//         }
       
// }
// printf("%d",d);



//  int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='1' && as[i]<='9')){
//             d++;
//         }
       
// }
// printf("%d",d);


//  int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if(as[i]==' '){
//             d++;
//         }
       
// }
// printf("%d",d);


//  int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='0' && as[i]<='9')||(as[i]>='a' && as[i]<='z')||(as[i]>='A' && as[i]<='Z')){
//             d++;
//         }
       
// }
// printf("%d",d);

// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='A' && as[i]<='Z')){
//             d++;
//         }
       
// }
// printf("%d",d);



// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='a' && as[i]<='z')){
//             d++;
//         }
       
// }
// printf("%d",d);


// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='A' && as[i]<='Z')){
//            as[i]+=32;
//         }
//        else if((as[i]>='a' && as[i]<='z')){
//            as[i]-=32;
//         }
// }
// printf("%s",as);


// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='A' && as[i]<='Z')){
//            as[i]='*';
//         }
   

// }
// printf("%s",as);

// int a,b,c,d=0;

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if((as[i]>='a' && as[i]<='z')){   
//            as[i]='*';
//         }
   

// }
// printf("%s",as);



             














































// int a,b,c=0,d=0;
// char ad[100],aw[100];

// char as[100];
//  scanf("%[^\n]s",as);
//    for(int i=0;as[i]!='\0';i++){
//         if(as[i]=='a'|| as[i]=='e'|| as[i]=='i'|| as[i]== 'o'|| as[i]=='u'){
//           ad[c]=as[i];
//             c++;
                
//         }
        
//        else {
//          aw[d]=as[i];
//          d++;
//         }
// }
// printf("Unli harflar ==>");
// for(int t=0;ad[t]!='\0';t++){а
//          printf("%c",ad[t]); 
// }
// puts("");


// printf("Undosh harflar==>");
// for(int t=0;aw[t]!='\0';t++){
//          printf("%c",aw[t]); 
// }
// puts("");

int a,b,c=0,d=0;
char ad[100],aw[100];

char as[100];
 scanf("%s",as);
   for(int i=0;as[i]!='\0';i++){
      if(isspace(as[i]) ){
          puts("");
           ad[c]=as[i];
            c++;
                
        }
        
    
   }
printf("%s",as);  

}