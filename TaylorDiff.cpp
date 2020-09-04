#include <iostream>

using namespace std;

float horner(float polyCo[], float x, int num){

	float horn=0;

	for(int i=0; i<num; i++){
		horn=(horn*x)+polyCo[i];
	}

	return horn;
}


int main(){

    int Size=100;
	float polyCo[Size], polyCoDx[Size] = {0};

	int numCoeff;

	cin>>numCoeff;

	for(int i=0; i<numCoeff; i++){
		cin>>polyCo[i];
	}

	for(int i=1; i<numCoeff; i++){
		polyCoDx[i-1] = i*polyCo[i];
	}

	float xvalue;

	cin>>xvalue;

	cout<<horner(polyCoDx,xvalue,numCoeff-1)<<endl;

	return 0;
}
