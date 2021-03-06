#include "pch.h"
#include "Student.h"

int main()
{
	Individual indv01;
	Individual indv02("Melvin Gavin", 1989);
	Individual indv03("Helen Robinson", 1997);

	Student studentA;
	Student studentB("Graham Robert Young", 1995, 2.9, "Penn Valley CC");
	Student studentC("Marianne Mansfield", 1987, 3.4, "Longview CC");

	Individual* person[6];

	studentA.setName("Henry Williamson");
	studentA.setYearOfBirth(1982);
	studentA.display();

	person[0] = &indv01;
	person[1] = &indv02;
	person[2] = &indv03;
	person[3] = &studentA;
	person[4] = &studentB;
	person[5] = &studentC;

	for (int i = 0; i < 6; i++)
	{
		person[i]->display();
	}

	cout << "\n\n";
	system("pause");
	return 0;
}