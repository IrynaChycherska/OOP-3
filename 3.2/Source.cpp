#include<iostream>
#include<cmath>
using namespace std;
//class Game
class Game
{
public:
	int f() const 
	{
		cout << "Game::f()" << endl;
		return 0;
	}
	void f(const string& s) const // перевизначений метод
	{
		cout << "Game::f(string)" << endl;
	}
	Game& operator = (Game& r)
	{
		cout << "Game::operator = (Sport)" << endl;
		return *this;
	}
};
//class Football
class Football : public Game
{
public:
	int f(int i) const // перевизначений метод
	{ 
		cout << "Football::f(int)" << endl;
		return 0;
	}
	Football& operator = ( Football& r)
	{
		cout << "Football::operator = (football)" << endl;
		return *this;
	}
};
int main()
{
	Game a; 
	Football b; 
	b.Game::f();
	Game a1, a2;
	a1 = a2;
	Football b1, b2;
	b1 = b2; 
	return 0;
}