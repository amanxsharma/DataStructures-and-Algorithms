// Program illustrating bitset in c++
#include <iostream>
#include <bitset> //Include
using namespace std;

int main() {
	//define bitsets
	bitset <5> a;
	bitset <5> b (0xF);
	bitset <5> c (string("10101"));
	cout<<"Values of a, b and c are \n"<<a<<endl<<b<<endl<<c<<endl;
//REMEMBER - 0th position in bitset is the RIGHTMOST one, unlike arrays

	//set some bit or all the bits
	a.set();
	cout<<"all bits of a are set "<<a<<endl;
	b.set(1,0); //set bit at position -1 (second bit from right) to 0
	cout<<"New b is "<<b<<endl;
	
	//Reset bits
	a.reset();
	cout<<"a again reset to "<<a<<endl;
	c.reset(0); //reset 0th position bit
	cout<<"New c is "<<c<<endl;
	
	//Operations
	cout<<"a[2] = "<<a[2]<<endl;
	
	  std::bitset<4> foo (std::string("1001"));
	  std::bitset<4> bar (std::string("0011"));
	
	  std::cout << (foo^=bar) << '\n';       // 1010 (XOR,assign)
	  std::cout << (foo&=bar) << '\n';       // 0010 (AND,assign)
	  std::cout << (foo|=bar) << '\n';       // 0011 (OR,assign)
	
	  std::cout << (foo<<=2) << '\n';        // 1100 (SHL,assign)
	  std::cout << (foo>>=1) << '\n';        // 0110 (SHR,assign)
	
	  std::cout << (~bar) << '\n';           // 1100 (NOT)
	  std::cout << (bar<<1) << '\n';         // 0110 (SHL)
	  std::cout << (bar>>1) << '\n';         // 0001 (SHR)
	
	  std::cout << (foo==bar) << '\n';       // false (0110==0011)
	  std::cout << (foo!=bar) << '\n';       // true  (0110!=0011)
	
	  std::cout << (foo&bar) << '\n';        // 0010
	  std::cout << (foo|bar) << '\n';        // 0111
	  std::cout << (foo^bar) << '\n';        // 0101

	return 0;
}