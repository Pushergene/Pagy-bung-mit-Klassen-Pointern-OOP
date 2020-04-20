#include <iostream>
#include <string>
using namespace std;
class Findikuch {
	public:
	void funktion(string pagysname) {
    string *findokuch;
    findokuch = &pagysname;
	cout << *findokuch << endl;
}
};
int main() {
string pagysname;
Findikuch findik;
findik.funktion("ochPAGE!!");
return 0;
}
	
