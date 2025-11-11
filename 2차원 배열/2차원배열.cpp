#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//다차원 배열로 표 작성해보기
// 제곱시에는 pow()함수를 사용
// 다차원 배열에서 중첩 for문은 for(i)       라고 할때 i(바깥쪽)은 세로열 a(안쪽)은 가로열이 된다
//							  {
//								  for(a)
//								  {
//								  }
//							  }

int main()
{
	//5x10인 표에 1부터25까지 삽입
	int num1 [5][10];
	int cnt1 = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			num1[i][a] = cnt1;
			cnt1++;
		}
	}

	for (int i = 0; i < 5; i++)
	{ 
		for (int a = 0; a < 10; a++)
		{
			cout << num1[i][a] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;


	//5x5인 표에서 시작은 1 인덱스마다 두배로 삽입
	int num2[5][5];
	int cnt2 = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a < 5; a++)
		{
			num2[i][a] = cnt2;
			cnt2 = 2 * cnt2;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a < 5; a++)
		{
			cout << num2[i][a] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	//5x5인 표에 1부터 25까지 역순 삽입
	int num3[5][5];
	int cnt3 = 25;

	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a < 5; a++)
		{
			num3[i][a] = cnt3;
			cnt3--;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int a = 0; a < 5; a++)
		{
			cout << num3[i][a] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	//10x10인 표에 1부터 100까지 역순 삽입 (아래 방식으로 코드를 짜야 바뀌는 표에 대해서 cnt값을 따로 지정할 필요없이 반복문의 조건만 바꿔주면 된다)
	int num4[10][10];
	int cnt4 = 1;

	for (int i = 9; i >= 0; i--)
	{
		for (int a = 9; a >= 0; a--)
		{
			num4[i][a] = cnt4;
			cnt4++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			cout << num4[i][a] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	// 3x4표에서 시작은 3부터 제곱으로 늘어나는 표 (pow()함수 사용)
	// 제곱을 할 시에는 헤더파일 #include <cmath> 를 만들어준 뒤 pow()함수를 사용 할 수 있다.
	// pow()함수 동작 방식 : pow(제곱할 값, 지수)
	//		ex) pow(3,3) = 27
	int num5[3][4]; // 만들 표의 가로세로크기 3x3
	int cnt5 = 2;   // 지수 값
	int square = 3; // 제곱될 값
	int result = 3; // 제곱된 값
	

	for (int i = 0; i < 3; i++)
	{
		for (int a = 0; a < 4; a++)
		{
			num5[i][a] = result;
			result = pow(square, cnt5);
			cnt5++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int a = 0; a < 4; a++)
		{
			cout << num5[i][a] << "\t";
		}
		cout << endl;
	}



	return 0;
}