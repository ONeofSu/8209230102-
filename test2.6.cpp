#include<iostream>
using namespace std;
int Gcd(int num1, int num2)//���������������
{
	int temp;//������ʱ����
	for (int i = 1; i < num1 || i < num2; i++)//����ѭ��
	{
		if (num1 % i == 0 && num2 % i == 0)//���i��Ϊa,b��ȡ������Ϊ0 �Ͷ���a,b������
		{
			temp = i;//��Ŀǰ����i���Ǹ�ֵ����ʱ����
		}
	}
	return temp;//������ʱ����
}
int LCM(int num1, int num2)//������С����������
{
	int temp;//������ʱ����
	for (int i = num1; i <= (num1 * num2); i++)//����ѭ��
	{
		if (i % num1 == 0 && i % num2 == 0)//���i��Ϊ��ȡ����,�ֱ�ȡ��a,b���Ϊ0 ����a,b�Ĺ�����
		{
			temp = i;//����������ֵ����ʱ����
			break;//�ҵ��ĵ�һ��������������С������ ����ѭ��
		}
	}
	return temp;//������ʱ����
}
int main()
{
	int a, b;//����a,b��������
	cout << "����������a:";//��ʾ����a
	cin >> a;//����a
	cout << "����������b:";//��ʾ����b
	cin >> b;//����b
	int gcd = Gcd(a, b);//���������������
	int lcm = LCM(a, b);//������С����������
	cout << "�������Ϊ" << gcd << endl << "��С������Ϊ" << lcm << endl;//������
	return 0;
}