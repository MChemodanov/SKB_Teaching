#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

int main()

{
    int count=0;
    string s;
    vector<char> vowels={'a','e','i','o','u'};
    for(int i =0;i<3;i++){
    getline (cin, s);
    for(auto item:s){
        if(find(vowels.begin(),vowels.end(),item)!=vowels.end()){
            count+=1;
    }

    }count*=10;}
    if(count==5750){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
