#include <iostream>
#include <algorithm>
using namespace std;

void permutation(string s, int l){
	bool flag = true;
	int arr[128] = {};
	for(int i = 0; i < l; i++){
		arr[s[i]-97]++;
	}
	if (l % 2 == 0){
		//if string is even, it must have even count characters
		for(int j = 0; j < 128; j++){
			if(arr[j]%2 != 0){
				cout << "Nope if";
				flag = false;
				break;
			}
		}
	}
	else{
		//if string is odd, all characters except one must be even count chars
		int count = 0;
		for(int j = 0; j < 128; j++){
			if(arr[j] % 2 != 0){
				count++;
				if(count > 1){
					cout << "Nope else";
					flag = false;
					break;
				}
			}
		}
	}
	if (flag == true){
		cout <<"yes it is";
	}
}
int main() {
	string s = "Tact Coa";
	string t = "";
	int l = s.size();
	//remove all whitespaces
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	
	l = s.size();

	permutation(t, l);
	return 0;
}