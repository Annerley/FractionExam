// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct Coord
{
	int x;
	int y;
};


int main()
{
	const int M = 1000, D = 10;
	Coord pairs[M];
	int N = 0;

	for (size_t i = 0; i < M; i++)
	{
		pairs[i].x = rand() % D;
		pairs[i].y = rand() % D;
		//cout << pairs[i].x << "," << pairs[i].y <<"   ";
	}
	cout << endl;

	for (size_t i = 0; i < M; i++)
	{
		if ((pairs[i].x - D / 2) ^ 2 + (pairs[i].y - D / 2) ^ 2 < (D / 2) ^ 2)
		{
			N++;
		}
	}

	cout << (4.0 * N) / M << endl;
	


}


