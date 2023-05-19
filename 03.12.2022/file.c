#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>




int main(){
//     FILE *point=fopen ("juft.txt","w");
//     FILE *point1=fopen("toq.txt","w");
//     int arr[]={7,8,4,3,0,9,10,12};
//     for(int i=0;i<=8;i++){
//         if(arr[i]%2==0){
//             fprintf(point,"%d",arr[i]);
//         }else{
//             fprintf(point1,"%d",arr[i]);
//         }
//     }
//     fclose(point);
//     fclose(point1);
    
//     FILE *ptr=fopen ("dars.txt","r");

//     FILE *ptr1=fopen ("unli.txt","w");
//     FILE *ptr2=fopen("undosh.txt","w");
//     char arr;
//     while((arr=fgetc(ptr))!=EOF){
//         if(arr=='a'||arr=='e'||arr=='i'||arr=='o'||arr=='u'||arr=='A'||arr=='E'||arr=='I'||arr=='O'||arr=='U'){
//             fprintf(ptr1,"%c",arr);z
//         }else{
//             fprintf(ptr2,"%c",arr);
//         }
//     }
//     fclose(ptr1);
//     fclose(ptr2);
//     fclose(ptr);

    
//     FILE *ptr=fopen ("dars.txt","r");

//   int a=0,s=0,c=0;
//     char arr;
//     while((arr=fgetc(ptr))!=EOF){
//         if(islower(arr)){
//           a++;
           
//         }
//          if(isupper(arr)){
//            s++;
//         }
//          if(arr=isdigit(arr)){
//            c++;
//         }
//     }
//    printf("\n%d ta kichik",a);
//    printf("\n%d ta katta",s);
//    printf("\n%d ta raqam",c);


//     fclose(ptr);


 char name[20]={};
    char color[15]={};

    int price;
    int year;

    char belgi;

    FILE *myFile = fopen("cars.txt", "r"),
            *lowPrice = fopen("LPcars.txt", "w"),
                *hightPrice = fopen("HPCars.txt", "w");

    while((belgi = fgetc(myFile))!= EOF){
    fscanf(myFile, "%s %d %s %d", name, &price, color, &year);
        if(price > 150000){
            fprintf(hightPrice, " Name: %s\n Price: %d\n =zx Year: %s\n Color: %d\n\n", name, price, color, year );
        }else{
            fprintf(lowPrice, " Name: %s\n Price: %d\n Year: %s\n Color: %d\n\n", name, price, color, year );
        }
    }
    printf("%s %d %s %d\n", name, price, color, year);
    
    
    fclose(myFile);
    fclose(lowPrice);
    fclose(hightPrice);



    return 0;
    
}
