#include<iostream>
using namespace std;
int main()
{
	char ch;//����ch
	cout << "������һ���ַ�" << endl;//��ʾ����
	cin >> ch;//����
	int a = int(ch);//����a ����ASCII�븳ֵ��a
	if (a >= 97 && a <= 122)//�ж� ���ASCII����Сд��ĸ֮��
	{
		a -= 32;//ASCII��-32 ��Ϊ��д
		cout << char(a);//�����д����ַ�
	}
	else//û�д�д �����Ѿ�Ϊ��д
	{
		a++;//ASCII��+1
		cout << a;//���+1���ֵ
	}
	return 0;
}