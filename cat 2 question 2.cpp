//c array> 2D Array
#include<stdio.h> //scanf(),printf()
int main (){
	//Declare and initialize the 2D array with two rows and two columns
	int a,b;
	float scores[2][2] = {
	{46,34},
	{24,43}
	};
	//Print the elements of 2D array using nested for loop
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("scores[%f][%f] = %f \n",a,b, scores[a][b]);
		}
		
	}
	return 0;
}