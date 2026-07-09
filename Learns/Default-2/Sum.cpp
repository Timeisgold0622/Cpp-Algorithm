#include <iostream>
#include <vector>

int main() {
	// 선언
	std::vector<int> a; // vector<자료형> 변수이름 : 형태로 선언

	// 삽입 연산
	a.push_back(1);
	a.insert(a.begin(), 7); // 맨 앞에 7을 삽입
	a.insert(a.begin() + 2, 10); // index 2의 위치에 10 삽입

	// 값 변경
	a[4] = -5;

	// 삭제 연산
	a.pop_back();
	a.erase(a.begin() + 3);// index 3에 해당하는 값 삭제
	a.clear();

	// 정보 가져오기
	a.size(); // 데이터 개수
	a.front(); // 처음 값
	a.back(); // 마지막 값

	a[3]; // index 3에 해당하는 값
	a.at(5); // index 5에 해당하는 값
	a.begin(); // 첫 번째 데이터 위치
	a.end(); // 마지막 데이터 다음 위치


}