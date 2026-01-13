#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    int i,v=0,j=0;
    char s[100],a[100],ch;
    cout<<"Enter a sentence:\n";
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';
    
    for(i=0;i<strlen(s);i++)
    {
        ch=s[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'  || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            continue;
        }

        else
        {
            a[j]=ch;
            j++;
        }
    }
    a[j]='\0';

    puts(a);
    return 0;
}