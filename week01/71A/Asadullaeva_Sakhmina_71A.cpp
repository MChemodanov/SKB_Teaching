// Asadullaeva_Sakhmina_71A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
	//cout << "Input number of words"<<endl;
	short int N;
	
	cin >> N;

	//cout << "00"<<endl;
	for (int i=0; i<N; i++) 
	{
		//cout << "01"<<endl;
		string word;
		getline(cin, word);

		int num = word.length();
		//cout << num<<endl;

		cout << word[0] << num - 2 << word[num-1]<<endl;
	}
	//cout << "02"<<endl;
	system("pause");
	return 0;
}

