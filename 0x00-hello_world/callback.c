//Function Pointers and Callbacks
#include<stdio.h>
void A()
{
	printf("Hello");
}
void B(void (*ptr)()) // function pointer as argument
{
	ptr(); //call-back function that "ptr" pointts to
}
int main()
{
	void (*p)() = A;
	B(p);
}
