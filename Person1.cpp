#include <iostream> //헤더파일 포함

using std::cout; //std 네임스페이스 사용
using std::endl;
using std::cin;

const int SIZE=20; //싱수선언

class Person //클래스선언
{
	char name[SIZE]; //charactor 자료형 name이라는 배열 선언
	char phone[SIZE];//charactor 자료형 phone이라는 배열 선언
	int age; //int형 age라는 변수 선언
public: //퍼블릭
	void ShowData(); // void형 Showdata 선언
};

void Person::ShowData() //Shodata함수 정의
{
	cout<<"name: "<<name<<endl; //'name :' 출력
	cout<<"phone: "<<phone<<endl; // 'phone :' 출력
	cout<<"age: "<<age<<endl; // 'age : ' 출력
}


int main() //메인함수
{
	Person p={"KIM", "013-113-1113", 22}; 
	p.ShowData();

	return 0; // 반환
}
