#include <stdio.h>

int main(){

int i=0;
int tab1[8]={4,8,7,9,1,5,4,6};
int tab2[8]={7,6,5,2,1,3,7,4};
int tab3[8];

for(i=0;i<8;i++)
{
    tab3[i]=tab1[i]+tab2[i];
}


for(i=0;i<10;i++)
{
    printf("%d\t",tab3[i]);
}

}


