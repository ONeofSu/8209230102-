#include<iostream>
#include<iomanip>//��setprecisionҪ���ø�ͷ�ļ�
using namespace std;
int main()
{
	double F;//���ڻ����¶ȱ���
	cout << "�����뻪���¶�:";//��ʾ���뻪���¶�
	cin >> F;//���뻪���¶�
	double C = (F - 32) / 1.8;//���������¶� ���㲢��ֵ
	cout << "���϶�Ϊ:" <<fixed << setprecision(2) << C << endl;//������϶� ʹ��fixed��setprecision������λС��
	return 0;
}