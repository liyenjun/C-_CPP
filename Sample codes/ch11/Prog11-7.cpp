#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);	// 為每一個多載的函式都宣告函式的原型
float add(float,float);
int main(void)
{
	int  ia = 1, ib = 2;
	float fx = 1.3f, fy = 5.5f;
	cout << ia << " + " << ib << " = " << add(ia,ib) << endl;
	cout << fx << " + " << fy << " = " << add(fx,fy) << endl;
	system("pause"); return(0);
}
int add(int i,int j) // 自訂函數add()
{	
	return(i+j);	// 傳回 i+j 的值
}
float add(float i, float j) // 自訂函數add()
{	
	return(i+j);	// 傳回 i+j 的值
}