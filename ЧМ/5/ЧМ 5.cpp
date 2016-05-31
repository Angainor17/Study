#include <iostream>
#include <math.h>

using namespace std;
double f(double x){
 return (3.0 - 2.0*x);
}

const double E = 0.05;

int main(){
	double x[100] = {0};
	double a = 0.95;
	double b = 2.15;
	
	x[0] = b;
	x[1] = (a*f(b)-b*f(a))/(f(b)-f(a));
	
	
	for(int k=1; fabs(x[k+1]-x[k]) > E ;k++){
		x[k+1]= x[k]-(f(x[k])*(x[k]-x[k-1])) / ( f(x[k])-f(x[k-1]) );
		cout << "x[" << k << "] = " << x[k] << endl;
	}
	
	return 0;
}
