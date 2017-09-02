#include <iostream>
using namespace std;

int main() {
	
	string s = "abcdeefgh" ;
	int a[26] = {};
	
	for(int i = 0; i < s.size(); i++){
		a[s[i]-97]++;
		if(a[s[i]-97] > 1){
			cout << "string has repeated character " << s[i];
		}
	}
	
	return 0;
}