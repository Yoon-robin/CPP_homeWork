#include <iostream> //������� �ҷ�����
using std::cout; //���ӽ����̽�
using std::endl;
using std::cin;

class Point // Ŭ���� ����
{
	int x;
	int y;
public:
	int GetX() { return x; }
	int GetX() { return y; }
	
	void SetX(int _x) { x = _x; }
	void SetY(int _y) { y = _y; }


};

int main() //�����Լ�
{
	int x, y; //���� ����
	cout << "��ǥ�Է� : ";
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);
	
	cout << "�Է� �� �����͸� �̿��ؼ� �׸��� �׸�" << endl;
	return 0; // ��ȯ
}