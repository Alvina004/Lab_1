// Voroshel mutqagrvac erku tveri amenapoqr yndhanur bajanarary

/*#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a, b;
	int c=1;
	cout << "Please enter 2 numbers" << endl;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	int min = (a<b)? a:b;
	for(int i=min; i>=1; i--)
	{
	if(a%i == 0 && b%i == 0)
		{
			c=i;
			break;
		}
	}
	cout << "C is " << c << endl;
	return 0;
}
*/

/*Trvac en erku tver, gtnel nranc amenamec yndhanur bazmapatiky*/
#include <iostream>
using namespace std;
int algorithm(int , int );
int maxYndBazm(int , int );

int main() 
{
    int num1, num2;
    
    cout << "Mutqagreq 2 tver: ";
    cin >> num1 >> num2;
    
    cout << "Mutqagrvac  " << num1 << " ev " << num2 << " tveri amenamec yndhanur bazmapatiky: " << maxYndBazm(num1, num2) << endl;
    
    return 0;
}


//int algorithm(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int maxYndBazm(int a, int b) 
{
    return (a * b) / algorithm(a, b); //haytni banadzev
}
