#include<iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	int id;
	
	Complex operator-(Complex c){
		Complex temp;
		temp.x = x - c.x;
		temp.y = y - c.y;
		return temp;
	}
	
	void print(){
		cout<<"X = "<<x<<"; Y = "<<y<<endl;
	}
	
	Complex(){
		x = 0;
		y = 0;
		id = 0;
	}
	
	Complex(int x, int y, int id){
		this->x = x;
		this->y = y;
		this->id = id;
	}
};

int main(){
	Complex c1(10, 20, 11);
	Complex c2(30, 40, 22);
	Complex c3 = c1 - c2;
	c3.print();
	return 0;
}
