#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 6; i++)//����һ��ѭ�� iΪ���� һ������ i<6
	{
		for (int j = 1; j <= i; j++)//����Ƕ��ѭ�� jΪ��ӡ*��
		{
			cout << '*';//��ӡ*
		}
		cout << endl;//���д�ӡ�껻��
	}
	return 0;
}