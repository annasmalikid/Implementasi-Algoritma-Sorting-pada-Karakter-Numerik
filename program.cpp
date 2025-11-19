#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[10], ch;
    int i, j, len;
    cout<<"Masukan NIM: ";
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout<<"\nMengurutkan Angka Terkecil: "<<str;
    cout<<endl;
    return 0;
}
