#include<iostream>
using namespace std;
int main()
{
	char c;//����һ���ַ�
	int letter = 0, space = 0, number = 0, other = 0;//��������ַ�����
	cout << "������һ���ַ���" << endl;//��ʾ�����ַ���
	while ((c=cin.get()) != '\n')//���cin�в��������� ѭ������
	{
		if (c>='a'&&c<='z' || c>='A'&&c<='Z')//�ж���ĸ
			letter++;//��ĸ�ַ�+1
		else if (c==' ')//�жϿո�
			space++;//�ո��ַ�+1
		else if (c>='0'&&c<='9')//�ж�����
			number++;//�����ַ�+1
		else
			other++;//���������ַ�+1
	}
	cout << "��ĸ�ַ�����Ϊ" << letter << "�ո��ַ�����Ϊ" << space << "�����ַ�����Ϊ" << number << "�����ַ�����Ϊ" << other << endl;//��������ַ�����
	return 0;
}