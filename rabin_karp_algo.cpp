#include<bits/stdc++.h>
using namespace std;
#define d 256


void search(char pat[], char txt[], int q){
    int N = strlen(txt);
    int M = strlen(pat);
    int p=0;//hash value of pat 
    int t = 0;//hash value of txt
    int h =1;//common hash value
    int i , j;

    for( i=0; i<=M-1; i++)
    h = (h*d)%q;

    for( i=0; i<M ; i++)//calculating hash for pattern and text for lenght of pattern
    {
        p = ( p*d + pat[i] )%q;
        t = ( t*d + txt[i] )%q;
    }

    for( i = 0; i< N-M ; i++)
    {
        if(p==t)
        {
            
            for(j=0; j<M ; j++)
            {
                if(pat[j]!=txt[i+j])
                    break;
            }
            if(j==M)
            cout<<"The pattern found at index "<<i<<endl;
        }
        if(i<N-M)
        {
            t = ( d*( t - txt[i]*h) + txt[i+M] )%q;
            if(t<0)
            t += q;
        }
    }

}


int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";
       
      // A prime number
    int q = 11;
     
      // Function Call
      search(pat, txt, q);
    return 0;
}