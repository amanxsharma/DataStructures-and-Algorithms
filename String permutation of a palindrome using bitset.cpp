#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
	bitset <26> a; //all bits are 0
	bitset <26> b; //will be used for subtracting 1
	b.set(0,1); //set all bits to 1
	// cout<<b<<endl;
	b = ~b;
	// cout<<b<<endl;
	
	string s = "taco ceat";
	s.erase(remove(s.begin(), s.end(),' '),s.end());
	int l = s.size();
	
	for(int i = 0; i < s.size(); i++){
		a.flip(s[i]-97);
	}
	cout << a <<endl;
	if(a.any() && a.count()>1){
		cout<<"here";
	}
	return 0;
}