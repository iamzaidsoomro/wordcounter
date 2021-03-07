/*
	Name: Word counter
	Developer: Zaid Soomro
	Date: March 2021
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	system("title Typing Game");
	system("color E0");
	char ch = 'a';
	int word, letter;
	cout << "Enter a phrase: ";
	while(ch != '\r'){

		ch = getche();
		if(ch == ' '){
			word++;
		}else if(ch == '.' || ch == ',' || ch == '!' || ch == '\'' || ch == '\"' || ch == ':' || ch == ';' || ch == '?' || ch == '-' || ch == '(' || ch == ')' || ch == '/'){
			letter = letter;
		}
		else if(ch == '\b'){
			letter--;
		}
		else{
			letter++;
		}
	}
	letter -= 1;
	cout << "\nLetters: " << letter << endl << "Words: " << word << endl;
}

