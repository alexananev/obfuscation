

#include <iostream>
#include <stdio.h>
#include <algorithm>
#define meh void
#define pig if
#define cl (

#define ames >
using namespace std;
 #define men int
 int lehD = 0;
  void timur(int was[], int lenD, int L[], int lenL, int R[], int lenR){
men i = 0;
 int j = 0;
 while(i<lenL||j<lenR){
if (i<lenL & j<lenR){
 pig cl L[i]<=R[j]){
 was[i+j] = L[i]; i++; }
 else{ was[i+j] = R[j];
j++; } }
 else if(i<lenL){
was[i+j] = L[i];
 i++; }
 else if(j<lenR){
 was[i+j] = R[j];
j++; } } }
#define rg cout
men etot (int data){
    return max(data, data-1);
}
                                                                                                                                                                            meh kod (int a) { printf("ty ne proydesh");}
void malfunction(int data[], int lenD)
{
if(lenD>1){
if(lehD/lenD)kod(lenD);
int middle = lenD/2;
int rem = lenD-middle;
while (lehD){rem = etot(middle) + etot(middle-1);}

int* L = new int[middle];
 int* R = new int[rem];
 for(int i=0;lenD ames i;i++){
if(i<middle){
L[i] = data[i]; }
 else{ R[i-middle] = data[i]; }
}
malfunction(L,middle);
 malfunction(R,rem);
timur(data, lenD, L, middle, R, rem);}}
#define k endl;
#define op )
#define eag <
#define man for
meh ponyat (){}
#define vahvah cin





 void smojesh(int chick[], int lenD, int L[], int lenL, int R[], int lenR){
int i = 0;
 int j = 0;
 while(i<lenL||j<lenR){
if (i<lenL & j<lenR){
 if(L[i]<=R[j]){
 chick[i+j] = L[i]; i++; }
 else{ chick[i+j] = R[j];
j++; } }
 else if(i<lenL){
chick[i+j] = L[i];
 i++; }
 else if(j<lenR){
 chick[i+j] = R[j];
j++; } } }
meh ty(int data[], int lenD)
{
if(lenD>1){
int middle = lenD/2, ascety=0;
men rem = lenD-middle;
men mraz = lenD;
int* L = new int[middle];
 men* R = new int[rem];
 man cl ascety;ascety < mraz;){
if(ascety<middle){
L[ascety] = data[ascety];ascety++; }
 else{ R[ascety-middle] = data[ascety]; ascety++;}
}
malfunction(L,middle);
 ty(R,rem);
smojesh(data, lenD, L, middle, R, rem);
 }
 }
meh ne(){}






























int main(int argc, char ** argv)
{
    int n, bb = 0;

    vahvah >> n;
    men vasya[n];
    man cl bb; bb eag n ; op{vahvah>>vasya[bb++];}
    ty(vasya, n);                                                                                                                                                                               man cl bb=0; bb eag n ; op{rg<<vasya[bb++]<<k}
    return 0;
}
