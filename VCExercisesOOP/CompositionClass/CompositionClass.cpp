#include "pch.h"
#include "Person.h"

using namespace std;

int main()
{
	Person	person01("AA0011", "Ronald H. Robertson", 4, 19, 1992);
	Person	person02("BB0012", "Mary Jane DeOnofrio", 11, 5, 1987);
	Person	person03("CC0013", "Paul J. Holt", 12, 17, 1990);
	Person	person04;

	person01.displayPerson();
	person02.displayPerson();
	person03.displayPerson();
	person04.displayPerson();

	cout << endl;
	system("pause");
	return 0;
}