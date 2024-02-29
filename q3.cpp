#include <iostream>
#include <cstdlib> 
using namespace std; 
int main(void)
{
    char change1[]={'q','w','e','r','t','y','u','i','o
    char change2[]={'a','s','d','f','g','h','j','k','l
    char change3[]={'z','x','c','v','b','n','m',',','.   
	char in[10000]={' '};
    int a=0;

    for(int a=0;a<10000;a++)
    in[a]='\n';
    while(cin.getline(in,10000))
    {
    a=0;
    while(in[a]!='\n')
    {
    if((in[a]<=90)&&(in[a]>=65))
    {
    in[a]+=32;
    }
    a++;
    }
    a=0;
    while(in[a]!='\000')
    {
    for(int b=0;b<12;b++)
    {
    if(in[a]==change1[b])
    {
    in[a]=change1[b-2];

 }
 else if(in[a]==change2[b])
 { 36: in[a]=change2[b-2];
 }
 else if(in[a]==change3[b])
 {
 in[a]=change3[b-2];
 }
 }
 cout << in[a];
 a++;
 } 46: cout << endl;
 for(int a=0;a<10000;a++)
 in[a]='\n';
 }
 }
