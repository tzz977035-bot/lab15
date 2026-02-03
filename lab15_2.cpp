#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int data[] = {7,8,2,1,2,4,6,9,0,1}; 
	cout << "Before: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	sort(&data[0],&data[10]);
	cout << "\nAfter: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	return 0;
}
void shuffle(int &a, int &b, int &c, int &d){
	int money[] = {a, b, c, d};
	for(int i = 0; i < 4; i++){
		int x = rand() % 4;
		int temp = money[i];
		money[i] = money[x];
		money[x] = temp;
	}
	a = money[0];
	b = money[1];
	c = money[2];
	d = money[3];
}
