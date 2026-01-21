#include <stdio.h>

int main(){

int i=0, moy=0, supm=0;
int tab1[10]={4,8,7,9,1,5,4,6, 3, 6};
int min=tab1[0];

for(i=0;i<10;i++)
{
    if (min > tab1[i]) min=tab1[i];
    moy=moy+tab1[i];
}

moy=moy/10;

for(i=0;i<10;i++)
{
    if(tab1[i]>moy) supm=supm+1;
}
printf("moy: %d\tnb notes > moy: %d\n",moy, supm);
}


