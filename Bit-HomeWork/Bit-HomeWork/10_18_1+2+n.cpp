#include <iostream>
#include <string>
using namespace std;


class A 
{
public:
    int static add(int n) 
    {
        int temp = n;
        temp && (temp += add(n - 1));
        return temp;
    }
};

int main()
{
    int num = A::add(8);
    cout << num << endl;
	return EXIT_SUCCESS;
}