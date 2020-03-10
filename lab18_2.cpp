//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

void overlap(Rect*,Rect*);

int main(){
	Rect R1 ;
	Rect R2 ;

	cout << "Please input Rect 1 (x y w h): ";
	cin>>R1.x>>R1.y>>R1.w>>R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>R2.x>>R2.y>>R2.w>>R2.h;

	
	double r1_x = R1.x + R1.w;
	double r2_x = R2.x + R2.w;	
	//cout<<min(r1_x, r2_x) - max(R1.x, R2.x);
	//Rect a = min(r1_x, r2_x) - max(R1.x, R2.x);
	
	double r1_y = R1.y - R1.h;
	double r2_y = R2.y - R2.h;
	//cout<<min(r1_y, r2_y) - max(R1.y, R2.y);
	//Rect b = min(r1_y, r2_y) - max(R1.y, R2.y);

	overlap(&R1,&R2);	
	return 0;
}

void overlap(Rect *a,Rect *b)
{
	double area;
	double r1_x = a->x + a->w;
	double r2_x = b->x + b->w;	
	double r1_y = a->y - a->h;
	double r2_y = b->y - b->h;
	area = (min(r1_x, r2_x) - max(a->x, b->x)) * (min(a->y, b->y) - max(r1_y, r2_y)); 
	cout<<"Overlap area = "<<area ;
}