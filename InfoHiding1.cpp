#include <iostream> //헤더파일 포함
using std::cout; //네임스페이스
using std::endl;
using std::cin;

class Point // 클래스 
{
public:
	int x; 
	int y;

};
int main() // 메인함수
{
	int x, y; // 변수 선언
	cout << "좌표입력: ";
	cin >> x >> y;

	Point p;
	p.x = x;
	p.y = y;

	cout << "입력 된 데이터를 이용해서 그림을 그림" << endl;
	return 0; // 반환
}
