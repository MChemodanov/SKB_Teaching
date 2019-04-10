#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const unsigned short BUFFER_LENGTH = 100;   // max word length

    char buffer[BUFFER_LENGTH+1];   // buffer variable for handling each word
    char **result;  // variable for store and view result
    unsigned short i,words_counter,word_length,trunc_length;

    cin >> words_counter; // input number of words
    result = new char*[words_counter]; // dynamic creation of the result array

    for(i=0;i<words_counter;i++){ // cycle for handling each word
        cin >> buffer; // input word in buffer
        word_length = static_cast<unsigned short>(strlen(buffer)); // calculate word length
        if(word_length>10){ // if need create abbreviation
            trunc_length = word_length-2;
            if(trunc_length<10){ // if will be only one number
                result[i] = new char[4];
                result[i][1] = static_cast<char>(trunc_length + '0');
                result[i][2] = buffer[word_length-1];
                result[i][3] = '\0';
            }else{ // if will be 2 number
                result[i] = new char[5];
                result[i][1] = static_cast<char>(trunc_length/10 + '0');
                result[i][2] = static_cast<char>(trunc_length%10 + '0');
                result[i][3] = buffer[word_length-1];
                result[i][4] = '\0';
            }
            result[i][0] = buffer[0];
        }else{ // if not need create abbreviation
            result[i] = new char[word_length+1];
            // this cycle is analog of strcpy(result[i],buffer);
            for(trunc_length=0;trunc_length<=word_length;trunc_length++){
                result[i][trunc_length] = buffer[trunc_length];
            }
        }
    }

    cout << endl; // separate output from input

    for(i=0;i<words_counter;i++){ // output result
        cout << result[i] << endl;
    }

    for(i=0;i<words_counter;i++){ // free memory for each word
        delete[] result[i];
    }
    delete[] result; // free memory for result variable

    return a.exec();
}
