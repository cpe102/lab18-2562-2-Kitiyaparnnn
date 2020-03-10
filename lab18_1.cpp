#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	double a,b,c,d,a2,b2,c2,d2;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>a>>b>>c>>d;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>a2>>b2>>c2>>d2;

	Rect R1 = {a,b,c,d};
	Rect R2 = {a2,b2,c2,d2};
	double r1_x = R1.x + R1.w;
	double r2_x = R2.x + R2.w;	
	//cout<<min(r1_x, r2_x) - max(R1.x, R2.x);
	//Rect a = min(r1_x, r2_x) - max(R1.x, R2.x);
	
	double r1_y = R1.y - R1.h;
	double r2_y = R2.y - R2.h;
	//cout<<min(r1_y, r2_y) - max(R1.y, R2.y);
	//Rect b = min(r1_y, r2_y) - max(R1.y, R2.y);

	cout << "Overlap area = "<<overlap(R1,R2);	
	return 0;
}

double overlap(Rect a,Rect b)
{
	double area;
	double r1_x = a.x + a.w;
	double r2_x = b.x + b.w;	
	double r1_y = a.y - a.h;
	double r2_y = b.y - b.h;
	area = (min(r1_x, r2_x) - max(a.x, b.x)) * (min(a.y, b.y) - max(r1_y, r2_y)); 
	if(area<0) area = 0;
	return area ;
}