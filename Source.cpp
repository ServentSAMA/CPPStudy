#include <iostream>

using namespace std;

/*�ú�����ӡwelcome����Ļ*/
void welcome();
/*������ʶcpp*/
void helloCPP();
/*
��ȡ�û�������
cin ���û���ȡ�û�������
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
	cout << "������Y����N" << endl;

	char resp;

	cin >> resp;

	return resp;

}

void printResp(char respToPrint)
{
	cout << "�������ֵ�ǣ�" << respToPrint;
	
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

