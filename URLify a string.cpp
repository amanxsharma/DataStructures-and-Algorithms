#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace std;
using namespace boost;

int main(){
	
	string s = "Mr John Smith    ";
	trim(s);
	for(int i = 0; i < s.size(); i++){
		if(isspace(s[i]) != 0){
			s.replace(i,1,"%20");
			i = i + 3;
		}
	}
	cout << s;
	return 0;
}