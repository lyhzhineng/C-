#include<iostream>
#include"caculate.h"
using namespace std;
int main()
{
	double s, r;//s代表圆的面积，r代表圆的半径
	cin >> r;
	s = caculate(r);//函数实现的是输入半径，计算面积
	cout << s << endl;
	return 0;
}
