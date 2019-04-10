#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const unsigned short BUFFER_LENGTH = 100;   // max string length

    char buffer[BUFFER_LENGTH+1];
    char true_letters[] = {'a','e','i','o','u'}; // array of vowel letters
    unsigned short i,j,k,real_length,true_letters_counter;
    bool haiku_flag = true; // check flag

    for(i=0;i<3;i++){ // read strings
        true_letters_counter = 0;

        cin.getline(buffer,BUFFER_LENGTH); // input string
        if(!haiku_flag) continue; // check the need to continue

        real_length = static_cast<unsigned short>(strlen(buffer)); // count length of string

        for(j=0;j<real_length;j++){ // check each letter of string for vowel
            for(k=0;k<5;k++){
                if(true_letters[k]==static_cast<char>(tolower(buffer[j]))) true_letters_counter++; // count number of vowels
            }
        }

        if(i==1){ // set flag depending on number of vowel letters and string order
            haiku_flag = true_letters_counter==7;
        }else{
            haiku_flag = true_letters_counter==5;
        }
    }

    haiku_flag ? cout << "YES" : cout << "NO"; // output answer

    return a.exec();
}
