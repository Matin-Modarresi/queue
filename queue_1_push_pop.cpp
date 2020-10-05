#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q , temp , q2;
	//q = {1,2,3};  error
	
	q.push(1);   // 1
	q.push(5);   // 1 5
	q.push(34);  // 1 5 34
	q.pop();     // 5 34
	q.push(7);   // 5 34 7
	
	cout << q.size() << "\n";    // 3 
	cout << q.front() << "\n";  //  5 
	cout << q.back()  << "\n"; //   7
	
//	queue<int>::iterator itr;  error

		for(int i=1 ; i<=5 ; i++)
	        q2.push(i); 
	 
	 q.swap(q2); 
	        
	temp = q;
	while(!temp.empty()) // q = temp : 1 2 3 4 5
	{
		cout << temp.front() << " ";
		temp.pop();
	}
	
	cout << "\n";
	
	while(!q2.empty()) // q2 : 5 34 7
	{
		cout << q2.front() << " ";
		q2.pop();
	}
}
