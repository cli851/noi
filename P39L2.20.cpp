#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	 
	double high_score,low_score;
	//(9.6*6-high_score)/5=9.4 	
	high_score=9.6*6-9.4*5;
	low_score=9.6*6-9.8*5;
	double avg=(9.6*6-high_score-low_score)/4;
	printf("%.2lf",avg);
	return 0;
} 	
