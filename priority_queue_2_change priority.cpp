#include <iostream>
#include <queue>

using namespace std;

class Point{
         	private:
         		int x,y;
         		
         	public:
         		Point(int i, int j):x(i),y(j){};
         		 int getX() const { return x;}
         		 int getY() const { return y;}
		
};

class c
{
	public:
		 int operator() (const Point& p1 , const Point& p2)
		  {
		  	return p1.getX() > p2.getX() && p2.getX()%2 == 0 ;
		  }
};

int main()
{
	priority_queue <Point, vector<Point> , c> pq;
	
	pq.push(Point(3,10));
	pq.push(Point(4,20));
	pq.push(Point(1,30));
	pq.push(Point(5,40));
	pq.push(Point(2,50));
	pq.push(Point(4,60));
	
	while (!pq.empty())
	{
		Point t = pq.top();
		cout << t.getX() << "  ,  " << t.getY() << endl;
		pq.pop();
	}
	
	
}
