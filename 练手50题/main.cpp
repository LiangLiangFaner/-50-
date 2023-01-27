/*************************
* @nod 练手50题
* 
*/
#include<iostream>
#define NUM 17
#define SUM_NUM 1333
/*1、求100之内自然数中最大的能被17整除的数。*/
void text_1(){
	std::cout << "100以内最大的被17整除的数为 ：" << 100/17*17;
}
/*2、已知a，b，c都是1位整数，求当三位整数abc、cba的和为1333时a、b、c的值。*/
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
/*3、计算并输出200-400之间不能被3整除的整数的和 [200, 400)*/
void text_3() {
	int sum;
	for (auto i = 200; i < 400; i++) {
		if (i % 3 != 0)
			sum += i;
	}
	std::cout << sum;
}
/*4、从键盘输入10个数，统计非负数的个数，并计算非负数的和*/
void text_4() {
	std::cout << "请输入10个数";
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
	std::cout << "非负整数个数为:" << count_num;
	std::cout << "非负整数的和为" << sum_num;
}
void main()
{
	text_1();
}