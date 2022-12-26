#include <iostream>
using namespace::std;
struct EDUCBA
{
	enum{DS, DA, DE} tag;
	union
{
	char M;
	int N;
	double O;
};
};
	void display(const EDUCBA& P)
{
	switch(P.tag)
{
	case EDUCBA::DS: std::cout << P.M << '\n'; break;
	case EDUCBA::DA: std::cout << P.N << '\n'; break;
	case EDUCBA::DE: std::cout << P.O << '\n'; break;
}
}
	int main()
{
	EDUCBA P = {EDUCBA::DS, 'Z'};
	display(P);
	P.tag = EDUCBA::DA;
	P.N = 987;
	display(P);
}