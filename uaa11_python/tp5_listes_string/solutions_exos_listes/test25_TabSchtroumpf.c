#include <stdio.h>

int main(){

int i=0, j=0, spf=0;
int tab1[8]={4,8,7,9,1,5,4,6};
int tab2[8]={7,6,5,2,1,3,7,4};


for(j=0;j<8;j++) // tab2
    for(i=0;i<8;i++) // tab1
    {
        spf=spf+tab2[j]*tab1[i];
}

printf("%d\n",spf);


int tab3[4]={4,8,7,12};
int tab4[2]={3,6};
spf=0;

for(j=0;j<2;j++)
    for(i=0;i<4;i++)
    {
        spf=spf+tab4[j]*tab3[i];
}

printf("%d\n",spf);

}


