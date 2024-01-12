/*
//TASK 1
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "\nEnter character you want to remove: ";
    char charToRemove; cin >> charToRemove;
    int position = input.find(charToRemove);
    if (position != string::npos) {
        cout << "Character found!";
        input.erase(input.begin() + position);
        cout << "\nNew string is...\n";
        cout << input;
    }
    else {
        cout << "Cant find character";
    }
    return 0;
}

//TASK 2
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int length;
    cout << "Enter a string: ";
    getline(cin, input);
    length=input.length();
    cout<<"length of string is...: "<<length;
    return 0;
}

//TASK 3
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int length, characterCount=0;
    cout << "Enter a string: ";
    getline(cin, input);
    for(int i=0; i<input.length(); i++){
        characterCount++;
    }
    cout<<"\nTotal number of characters are: "<<characterCount;
    return 0;
}

//TASK 4
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void palindromeChecker(string& userInput);
int main()
{
    string userInput="";
    cout<<"-----Welcome to Palindrome Checker-----\nEnter a string to check whether it's a Palindrome or not: ";
    getline(cin, userInput);
    palindromeChecker(userInput);

    return 0;
}
void palindromeChecker(string& userInput){
    string reverseInput=userInput;
    reverse(reverseInput.begin(), reverseInput.end());//using reverse function to reverse the user input
    if(userInput==reverseInput){ //checking if the reversed input matches original input
        cout<<"\nIt's a Palindrome!";
    }
    else{
        cout<<"\nNot a Palindrome";
    }
}

//EXTRA TASK 1
#include <iostream>
using namespace std;
void countEvens(int inputList[], int size);
int main() {
    int inputList[100];
    int size=0;
    cout<<"How many number of integers do you want to enter?(MAX limit is 100): ";
    cin>>size;
    cout<<"Enter your integers: \n";
    for(int i=0; i<size; i++){
        cin>>inputList[i];
    }
    cout<<"\nNumber of even digits are: ";
    countEvens(inputList, size);
    return 0;
}
void countEvens(int inputList[], int size){
    int evenNumCounter=0;
    for(int i=0; i<size; i++){
        if(inputList[i]%2==0){
            evenNumCounter++;
        }
    }
    cout<<evenNumCounter;
}

//EXTRA TASK 2
#include <iostream>
#include <cstring>
#include <utility>
using namespace std;
bool isPalindrome(const char str[]) {
int length = strlen(str);
for (int i = 0, j = length - 1; i < j; ++i, --j) {
if (str[i] != str[j]) {
return false;
}
}
return true;
}
void palindrome_pairs(const char words[][100], int size) {
for (int i = 0; i < size; ++i) {
for (int j = i + 1; j < size; ++j) {
if (isPalindrome(words[i]) && isPalindrome(words[j])) {
cout << "(" << words[i] << ", " << words[j] << ")"
<<endl;
}
}
}
}
int main() {
const char words1[][100] = { "racecar", "level", "radar", "hello", "world"
};
const char words2[][100] = { "hello", "world", "foo", "bar" };
cout << "Palindrome pairs in words1:" << endl;
palindrome_pairs(words1, sizeof(words1) / sizeof(words1[0]));
cout << "Palindrome pairs in words2:" <<endl;
palindrome_pairs(words2, sizeof(words2) /sizeof(words2[0]));
return 0;
}
*/