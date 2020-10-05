#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int> pq; //maxheap
  // priority_queue<int , vector<int> , greater<int> > pq; //minheap
  
  pq.push(6);
  pq.push(12);
  pq.push(8);
  pq.push(75);
  pq.push(5);
  
  cout << pq.top() << "\n"; //75
  
  pq.pop();
  
  cout << pq.top() << "\n"; //12
  
  while(!pq.empty())
  {
  	cout << pq.top() << " "; // 12 8 5 6
  	pq.pop();
  }

}
