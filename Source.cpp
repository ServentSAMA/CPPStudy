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

/*引用的使用*/

int i = 1;
/*参数命名后面不带&是值引用，在函数里面修改不会对全局变量做修改*/
/*在参数命名后面加&表明传值为地址，变量修改相当于直接更改变量的地址*/
void addOne(int& num) 
{
	num++;
}


int main(){

	cout << i << endl;
	addOne(i);
	cout << i << endl;
	
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

