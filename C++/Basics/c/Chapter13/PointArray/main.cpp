#include <stdio.h>

int main()
{
	char* a = "Hello";
	char* b = "sYstemk1t";
	char* Array[2] = {a,b};
	char* Array1[2];
	Array1[1] = (char*)'A';
	Array1[0] = (char*)'B';
    
    char* Array3[2] = {
        "Hello",
        "sYstemk1t"
        
    };
	return 0;
}