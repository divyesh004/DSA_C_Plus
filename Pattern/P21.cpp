#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) 
	{  
        char Alfabet = 'A';  
        for (int j = 1; j <= i; j++) 
		{  
            cout << Alfabet << " ";
            Alfabet++;  
        }
        cout << endl;
    }
    return 0;
}
