#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int count (string word, int number){
    
    int i,n,k,right;
    n= word.length();
    k=0;
    for (i=0;i<n;i++){
        if ((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||(word[i]=='u')){
            k=k+1;
        };
    };
    if (k==number){
        right=1;
    }
    return right;
}

int main()
{
    string word;
    int sum,k,i;
    sum=0;
    for (i=0;i<3;i++){
        if ((i==0)||(i==2)){
            getline(cin, word);
            sum+=count(word,5);
        }
        else{
            getline(cin, word);
            sum+=count(word,7);
        }
    }
    if (sum==3){
        cout<<"YES"<<endl;}
        else 
        {
            cout<<"NO"<<endl;
            cout<<sum<<endl;
        };
    return 0;
    
}
