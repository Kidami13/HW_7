//
//

#include <iostream>
using namespace std;
int main()
{
/*************************************************Домашка №1******************************************************/
    int numbers[5];
    cout << "input five numbers" << endl;
    for (int i = 0;i < 5;i++) {
        cout << "input number " <<i+1<< endl;
        cin >> numbers[i];
       
    }
    for (int i = 0;i < 5;i++) {
        
        cout << numbers[i]<< " ";

    }
    cout << endl;
/*************************************************Домашка №2******************************************************/
    char word[10];
    cout << "input word" << endl;
    cin >> word;
    int i = 0;
    while (word[i] != 0) {
        cout << word[i] << endl;
        i++;
    }

    
}

