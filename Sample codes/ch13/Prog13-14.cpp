#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iWeight;	// 老鼠的重量
public:
	CMouse(int iw=0) {m_iWeight = iw;} // 設定老鼠的重量
	int operator+(CMouse &mouse) { // 定義 + 運算子. 記得使用傳參照呼叫
		return(m_iWeight + mouse.m_iWeight);
	}
};
int main(void)
{
	CMouse mouse1(100); 
	CMouse mouse2(235);
	cout << "兩隻老鼠共重" <<  mouse1 + mouse2 << endl;
	system("pause"); return(0);
}