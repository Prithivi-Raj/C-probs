// Solution to Q1
#define kol 60
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
int smallest_common_substrings(string A, string B) {
	char freq[256] = {0};

	for (char c : A) {
		freq[c]++;
	}

	int sum = 0;

	for (char c : B) {
		sum += freq[c];
	}

	return sum;
}

int main(){

    string s,d;


    cout<<"Enter 2 Strings";
    std::getline(cin,s);
    std::getline(cin,d);



    int l =smallest_common_substrings(s,d);
    cout<<l;
}


