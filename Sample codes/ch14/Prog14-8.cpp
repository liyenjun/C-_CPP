#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // 老鼠的起始位置
	char *m_pcIcon;	  // 字元指標變數
public:
	CMouse(int x=1, int y=1, char Icon='@') {	// 建構元
		m_ix = x; m_iy = y; m_pcIcon = new char; // 起始位置與取得空間
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &m) {	// 建構元
		m_ix = m.m_ix; m_iy = m.m_iy; m_pcIcon = new char; // 起始位置與取得空間
		*m_pcIcon = *(m.m_pcIcon);
	}
	~CMouse() { delete m_pcIcon; } // 解構元, 釋放資源
	void Show() {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse mouse1(2,8,'&'); // 建立時就會自動呼叫 CMouse 建構元
	CMouse mouse2 = mouse1;	// 呼叫拷貝建構元來建立物件 mouse2
	CMouse mouse3;
	mouse3 = mouse1;		// 執行設定運算子
	mouse3.Show(); 
	system("pause"); return(0);
}