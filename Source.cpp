#include <iostream>

using namespace std;

/*用函数打印welcome到屏幕*/
void welcome();
/*初步认识cpp*/
void helloCPP();
/*
获取用户的输入
cin ：用户获取用户的输入
*/
char getYesNo();

void printResp(char respToPrint);


int main(){

	char resp = getYesNo();
	
	printResp(resp);

	return 0;
}

char getYesNo()
{
	cout << "请输入Y或者N" << endl;

	char resp;

	cin >> resp;

	return resp;

}

void printResp(char respToPrint)
{
	cout << "您输入的值是：" << respToPrint;
	
}


void welcome() {

	cout << "welcome" << endl;

}

void helloCPP() {

	cout << "hello world\n";

	char charS;
	charS = 'Y';

	int myInt;
	myInt = 15;

	cout << charS << endl;

	cout << myInt;

}

