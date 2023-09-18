#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{	
    int re[10];
	cout << "Element Value Histogram\n\n";
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++) {
        re[i] = (rand() % 30) + 1;
        cout << setw(5) << right << i << setw(5)<< right << re[i] << " ";

        int w = 0;
        while (w < re[i]) {
            cout << "*";
            w++;
        }
        cout << endl;
    }

    return 0;
}
