#include <stdio.h>            
#include <math.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


struct Std {
    char ism[20];
    char fam[30];
    int yosh;
    float stip;
};



typedef struct Magazin {
    char tur[20];
    char adres[20];
    int son;
    float soliq;
}magaz;


int main(){

// char oiej[100]= {'kjodsfapydfp'};

// struct Std ustoz = {"Alisher","Qosimov"};
// struct Std ustoz1 = {"Akbar","Aliyev"}; 
// typedef int qw; 

// printf ("%s ",ustoz.ism);
// printf ("%s ",ustoz.fam);
// puts ("");

// printf ("%s ",ustoz1.ism);
// printf ("%s ",ustoz1.fam);
// puts ("");
// char stzapas[30];
// strcpy(stzapas,ustoz1.fam);
// strcpy(ustoz1.fam,ustoz.fam);
// strcpy(ustoz.fam,stzapas);


// printf ("%s ",ustoz.ism);
// printf ("%s ",ustoz.fam);
// puts ("");
   
// printf ("%s ",ustoz1.ism);
// printf ("%s ",ustoz1.fam);


// struct Std ad = {"ali","Qosimov",15};
// struct Std as = {"Akbarali","Aliyev",16};

// struct Std aw = {"kAlisher","Qosimov",17};


// if(strlen(ad.ism)>5 && ad.ism[0]=='a' || ad.ism[0]=='A'){
//     printf("%s   %s   %d",ad.ism,ad.fam,ad.yosh);
// }
// if(strlen(as.ism)>5 && as.ism[0]=='a' || as.ism[0]=='A'){
//     printf("%s   %s   %d",as.ism,as.fam,as.yosh);
// }
// if(strlen(aw.ism)>5 && aw.ism[0]=='a' || aw.ism[0]=='A'){
//     printf("%s   %s   %d",aw.ism,aw.fam,aw.yosh);
// }

magaz as={"oziq","yashnobod",101,200};
magaz af={"butik",90,200};
magaz ag={"oziq","yashnobod",80,200}; 
magaz ah={"aksesuar","yunusobod",55,200};
magaz ar={"evos","yunusobod",220,200};
magaz aw={"oziq","yunusobod",120,200};

if( as.son<100 && as.tur=="oziq" ){
    as.soliq*as.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", as.adres , as.tur,as.soliq);

}
if( af.son>100 && af.tur=="oziq" ){
    af.soliq*af.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", af.adres , af.tur,af.soliq);

}
if( ag.son>100 && ag.tur=="oziq" ){
    ag.soliq*ag.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", ag.adres , ag.tur,ag.soliq);

}
if( ah.son>100 && ah.tur=="oziq" ){
    ah.soliq*ah.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", ah.adres , ah.tur,ah.soliq);

}
if( ar.son>100 && ar.tur=="oziq" ){
    ar.soliq*ar.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", ar.adres , ar.tur,ar.soliq);

}
if( aw.son>100 && aw.tur=="oziq" ){
    aw.soliq*aw.soliq;
    printf("%sdagi  %s do`konining  soligi %f boldi ", aw.adres , aw.tur,aw.soliq);
}






}