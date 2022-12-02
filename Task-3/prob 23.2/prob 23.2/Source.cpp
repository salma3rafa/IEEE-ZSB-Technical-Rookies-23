#include<iostream>
using namespace std;
struct students {
	double grade;
	string name;
};
int main()
{
	int n, index;
	cin >> n;
	students* stud = new students[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stud[i].name;
		cin >> stud[i].grade;
	}
	double mini = stud[0].grade, secMin = 10 ^ 9;
	for (int i = 1; i < n; i++)
	{
		if (stud[i].grade < mini)
			mini = stud[i].grade;
	}
	for (int i = 0; i < n; i++)
	{
		if (stud[i].grade != mini && stud[i].grade < secMin)
		{
			secMin = stud[i].grade;
			index = i;
		}
	}
	bool found = 0;
	for (int i = 0; i < n; i++) {
		if (stud[i].grade == secMin && i != index)
			found = 1;
	}
	if (!found)
		cout << stud[index].name << endl;

	return 0;
}
