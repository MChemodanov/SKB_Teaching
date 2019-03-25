#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{int NumberOfWords;
    cin >> NumberOfWords;
    string str1;
    unsigned long long size;
    for(int i = 0 ; i < NumberOfWords ; ++i){
        cin >> str1;
        size = str1.length();
        if (size <= 10){
            cout << str1;
        }
        else
            cout << str1[0] << size-2 << str1[size - 1];
    }
    return 0;
}

