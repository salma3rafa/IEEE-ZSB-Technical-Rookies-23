#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class maxHeap
{
private:
	int size{};
	vector<int>v = { -1 };
	int parent(int i) {
		return i >> 1;//i/2
	}
	int leftChild(int i) {
		return i << 1;//i*2
	}
	int rightChild(int i)
	{
		return (i << 1) + 1;//i*2+1
	}
	
public :
	
	bool isEmpty() { return size == 0; }
	int max() { return v[1]; }
	void isertItem(int value);
	void shiftUp(int i);
	int extractMax();
	void shiftDown(int i);
};
void maxHeap:: shiftUp(int i)
{
	if (i > size) {
		return;
	}
	if (i == 1)
		return;
	if (v[i] > v[parent(i)])
	{
		std::swap(v[parent(i)], v[i]);
	}
	shiftUp(parent(i));
}
void maxHeap::isertItem(int value)
{
	if (size + 1 >= v.size())
	{
		v.push_back(0);
	}
	v[++size] = value;
	shiftUp(size);
	return;
}
void maxHeap::shiftDown(int i)
{
	if (i > size)
		return;
	int swapin = i;
	if (leftChild(i) <= size && v[i] < v[leftChild(i)])
		swapin =leftChild( i);
	if (rightChild(i) <= size && v[swapin] < v[rightChild(i)])
		swapin = rightChild(i);
	if(swapin!= i){
		std::swap(v[i],v[swapin]);
	   shiftDown(swapin);
	}
	return;
}
int maxHeap::extractMax()
{
	int maxNum = v[1];
	std::swap(v[1], v[size--]);
	shiftDown(1);
	return maxNum;

}
int main()
{
	maxHeap* h = new maxHeap();
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		h->isertItem(x);
	}
	while (!h->isEmpty())
	{
		cout << h->max() << " ";
		h->extractMax();
	}
	cout << endl;

	return 0;
}