// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>

using namespace std;

struct Coord
{
	int x;
	int y;
};

double MMT(int M, int D)
{
	
	Coord *pairs = new Coord[M];
	int N = 0;

	for (size_t i = 0; i < M; i++)
	{
		pairs[i].x = rand() % D;
		pairs[i].y = rand() % D;
		//cout << pairs[i].x << "," << pairs[i].y <<"   ";
	}

	for (size_t i = 0; i < M; i++)
	{
		if ((pairs[i].x - D / 2) ^ 2 + (pairs[i].y - D / 2) ^ 2 < (D / 2) ^ 2)
		{
			N++;
		}
	}

	cout << (4.0 * N) / M << endl;
	return (4.0 * N) / M;

}


int main()
{
	
	std::thread tA(MMT, 100,10);
	std::thread tB(MMT, 1000,1000);
	std::thread tC(MMT, 10000, 1000);

	tA.join();
	tB.join();
	tC.join();


}


