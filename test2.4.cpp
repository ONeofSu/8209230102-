#include<iostream>
using namespace std;
int main()
{
	cout << "��ӭʹ�ñ�������ϵͳ!" << endl;//��ʾ�������������
	cout << "�������һ��ֵ:" << endl;//��ʾ����ֵ1
	double num1;//����ֵ1
	cin >> num1;//����ֵ1
	cout << "��ѡ����Ҫ���е�����" << endl;//��ʾѡ����е�����(���������������ѡ��)
	cout << "1.�ӷ�����" << endl;
	cout << "2.��������" << endl;
	cout << "3.�˷�����" << endl;
	cout << "4.��������" << endl;
	cout << "5.ȡ������" << endl;
	int select;//����ѡ��ֵ
	cin >> select;//����ѡ��ֵ
	cout << "������ڶ���ֵ:" << endl;//��ʾ����ֵ2
	double num2;//����ֵ2
	cin >> num2;//����ֵ2
	switch (select)//�ж�ѡ��ֵ
	{
	case 1://1 ִ�мӷ�����
		cout << "����֮��Ϊ" << (num1 + num2) << endl;//����ӷ����
		break;
	case 2://2 ִ�м�������
		cout << "����֮��Ϊ" << (num1 - num2) << endl;//����������
		break;
	case 3://3 ִ�г˷�����
		cout << "����֮��Ϊ" << (num1 * num2) << endl;//����˷����
		break;
	case 4://4 ִ�г�������
		if (num2 == 0)//�жϳ����Ƿ�Ϊ0
		{
			//�������Ϊ0
			cout << "��������Ϊ0" << endl;//��ʾ��������Ϊ0
			break;
		}
		else//������Ϊ0
		{
			cout << "����֮��Ϊ" << (num1 / num2) << endl;//����������
			break;
		}
	case 5://5 ִ��ȡ������
		if (num2 == 0)//�ж�ȡ�����Ƿ�Ϊ0
		{
			//���ȡ����Ϊ0
			cout << "��������Ϊ0" << endl;//��ʾȡ��������Ϊ0
			break;
		}
		else//ȡ������Ϊ0
		{
			cout << "����ȡ����Ϊ" << (int(num1) % int(num2)) << endl;//���ȡ����
			break;
		}
	default:
		cout << "��ѡ��Ϸ�����" << endl;//ѡ������㲻�Ϸ� ��ʾѡ��Ϸ�����
	}
	return 0;
}