#include<iostream>
using namespace std;
int main()
{
	//int i = k + 1; û�г�ʼ������k �޷���ֵ
	int k = 1;
	int i = k + 1;
	//cout << i++ << endl; i++�������i��ԭʼֵ �ٶ�i����+1�Ĳ��� �ڴ˲��� i++û������
	cout << ++i << endl;
	//int i = 1; i�ض��� ����
	i = 1;
	//cout << i++ << endl; i++�������i��ԭʼֵ �ٶ�i����+1�Ĳ��� �ڴ˲��� i++û������
	cout << ++i << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}