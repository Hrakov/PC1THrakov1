// CP3.cpp: Definuje vstupní bod pro aplikaci.
//

#include "CP3.h"

using namespace std;

int main() {
	float  time, distance;
	const float speed_of_sound = 340.0;
	cout << "Zadejte cas v sekundach, za ktry se ozval hrom: ";
	if (!(cin >> time)) {
		cout << "Neplatny vstup!" << endl;
		return 1;
	}
	distance = time * speed_of_sound;
	cout << "Blesk uhodil priblizne " << distance << " metru od vas" << endl;
	return 0;

}

