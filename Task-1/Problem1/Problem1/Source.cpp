#include<iostream>
using namespace std;
float rectArea(float length, float width);
float rectperimeter(float length, float width);
int main()
{
	float l, w;
	cin >> l;
	cin >> w;
	cout<<rectArea(l, w)<<endl;
	cout<<rectperimeter(l, w)<<endl;

	return 0;
}
float rectArea(float length, float width)
{
	return length * width;
}
float rectperimeter(float length, float width)
{
	return 2 * (length + width);
}