#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class mpriority_queue: public std::priority_queue<T,vector<T>,std::greater<T>>
{
public:
    typedef typename std::priority_queue<T>::size_type size_type;
    mpriority_queue(size_type capacity = 0) { reserve(capacity); };
    void reserve(size_type capacity) { this->c.reserve(capacity); } 
    size_type capacity() const { return this->c.capacity(); }
    vector<T> elements() const { return this->c;}
};

int main()
{
	//mpriority_queue<int,vector<int>,std::greater<int>> pq;
	mpriority_queue<int> pq;
	int n = 5;
	vector<int> v1{2, 45, 8, 9, 19, 28, 189, 7, 456, 90, 4, 71};
	for(auto & it:v1)
		if(pq.size()<5)
			pq.push(it);
		else if(it<pq.top())
		{
			pq.pop();
			pq.push(it);
		}
	
	
	
	for(auto & it: pq.elements())
		cout << it << ", ";
	cout << endl;
	while(pq.size())
	{
		cout << pq.top() << ", ";
		pq.pop();
	}
	return 0;
}

