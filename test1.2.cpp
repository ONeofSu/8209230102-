#include<iostream>
#define �� 3.14;//����곣�� ��ֵֹ����
using namespace std;
int main()
{
	double r;//����뾶
	double h;//����߶�
	cout << "������Բ׶����뾶:";//��ʾ����뾶
	cin >> r;//����뾶
	cout << "������Բ׶��:";//��ʾ�����
	cin >> h;//�����
	double s = (r * r) * ��;//s=��r^2 ����s�����丳ֵ
	double v = s * h * (1.0 / 3);//v=1/3sh ����v�����丳ֵ
	cout << "Բ׶�����Ϊ" << v << endl;
	return 0;
}