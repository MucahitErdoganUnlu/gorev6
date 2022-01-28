#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include <iostream>

using namespace std;

class RegularPolygon{
	private:
		int n;
		float angle;
	public:
		RegularPolygon(int n){
			this->n = n;
			this->angle=M_PI/n;			
		}
		float area(float l){
			return n*l*l/tan(angle)/4;}
		float length(float a){
			return sqrt(4*a/n*tan(angle));}
		
};

int main(){
	RegularPolygon deneme(4);
	// deneme.set_vertex(4);
	float uzunluk = deneme.area(10);
	float alan = deneme.length(10);
	cout << uzunluk << " "<< alan;  
}
