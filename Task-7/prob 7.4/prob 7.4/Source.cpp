#include<iostream>
#include<queue>
using namespace std;
struct students {
	double grade;
	string name;
};
int main()
{
	int n, index=0;
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
	queue<string>name;
	for (int i = 0; i < n; i++)
	{
		if (stud[i].grade != mini && stud[i].grade < secMin)
		{
			secMin = stud[i].grade;
			name.push(stud[i].name);
			index = i;
			break;
		}
	}
	bool found = 0;
	for (int i = 0; i < n; i++) {
		if (stud[i].grade == secMin && i != index) {
			name.push(stud[i].name);
			found = 1;
			break;
		}
	}
	if(found==1)
	{
		while (!name.empty())
		{
			cout << name.front() << endl;
			name.pop();
		}
    }
	else
		cout << stud[index].name << endl;

	return 0;
}