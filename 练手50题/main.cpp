/*************************
* @nod ����50��
* 
*/
#include<iostream>
#define NUM 17
#define SUM_NUM 1333
/*1����100֮����Ȼ���������ܱ�17����������*/
void text_1(){
	std::cout << "100�������ı�17��������Ϊ ��" << 100/17*17;
}
/*2����֪a��b��c����1λ����������λ����abc��cba�ĺ�Ϊ1333ʱa��b��c��ֵ��*/
void text_2(){
	for (auto a = 0; a < 10; a++) {
		for (auto b = 0; b < 10; b++) {
			for (auto c = 0; c < 10; c++) {
				if (a * 100 + b * 10 + c + c * 100 + b * 10 + a == SUM_NUM)
					std::cout << "a:" << a << "b:" << b << "c:" << c;
			}
		}
	}
}
/*3�����㲢���200-400֮�䲻�ܱ�3�����������ĺ� [200, 400)*/
void text_3() {
	int sum;
	for (auto i = 200; i < 400; i++) {
		if (i % 3 != 0)
			sum += i;
	}
	std::cout << sum;
}
/*4���Ӽ�������10������ͳ�ƷǸ����ĸ�����������Ǹ����ĺ�*/
void text_4() {
	std::cout << "������10����";
	double get_num; 
	double sum_num=0;
	int count_num=0;
	for (auto i = 0; i < 10; i++) {
		std::cin >> get_num;
		if (get_num >= 0) {
			count_num++;
			sum_num += get_num;
		}
	}
	std::cout << "�Ǹ���������Ϊ:" << count_num;
	std::cout << "�Ǹ������ĺ�Ϊ" << sum_num;
}
void main()
{
	text_1();
}