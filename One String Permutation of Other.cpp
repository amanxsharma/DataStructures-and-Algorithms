#include <iostream>
using namespace std;

int main() {
	
	string s = "abacd";
	string t = "dabqc";
	
	int a[128] = {}; //assuming ASCII character set
	
	bool flag = false;
	if(s.length() != t.length()){
		cout << "Nope";
		flag = "true";
	}
	
	for(int i = 0; i < s.length(); i++){
		a[s[i]-97]++;
	}
	
	for(int j = 0; j < t.length(); j++){
		a[t[j]-97]--;
		if(a[t[j]-97] < 0){
			cout << "Strings are not " <<t[j] <<"\n";
			flag = true;
		}
	}
	if(flag == false){
		cout << "Yupp";
	}
	
	return 0;
}