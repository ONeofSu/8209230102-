#include<iostream>
using namespace std;
int main()
{
	double price = 0.8, total_p = 0;//���嵥�ۼ��ܼ�
	int number = 2, day = 0;//���幺����������������
	double average_p;//����ƽ���۸�
	for (int i = 1; number<=100 ; i++)//ѭ�� number����100�˳�ѭ��
	{
		day++;//����+1
		total_p += price * number;//�ܼ�=ԭ���ܼ�+ÿ���»���Ǯ
		number *= 2;//����*2
	}
	average_p = total_p / day;//ƽ���۸�=�ܼ�/����
	cout << "ƽ��ÿ����" << average_p << "Ԫ" << endl;//���ÿ��ƽ������
	return 0;
}