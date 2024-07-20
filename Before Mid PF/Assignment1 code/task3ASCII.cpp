#include <iostream>
using namespace std;

int main() {
    char character = 'd';
    
	 character = character + 3;
    
    cout << "Original character: 'd'" << endl;
    cout << "ASCII value after adding 3: " << int(character) << endl;
    cout << "Equivalent character: " << character << endl;

    return 0;
}
