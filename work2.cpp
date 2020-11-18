//факториал числа

/*
#include <iostream>
using namespace std;

int factr(int n)
{
 int answer;
     if (n == 1)
	 return (1);

	 answer = factr(n - 1) * n;

	 return (answer);
}

int main()
{
	cout << factr(5);
}
*/

//упростить задачу с факториалом

/*
#include <iostream>
using namespace std;

int factr(int n)
{
	if (n > 1)
	return factr(n - 1) * n;
	return 1;
}

int main()
{
	cout << factr(5);
}
*/

//последовательность фибоначи

/*
#include <iostream>
using namespace std;

int fibonachi(int n)
{
	if (n == 0)
	return 0;

	if (n == 1)
	return 1;

	return fibonachi(n - 1) + fibonachi(n - 2);
}

int main()
{
	int n;

	for (int i = 0; i < 10; i++)
	{
		n = fibonachi(i);
		cout << n << "\t";
	}

	cout << endl;
	return 0;
}
*/