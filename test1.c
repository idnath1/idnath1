/***************************************************
*****************ALL C Programs********************/

/*	TOPIC: Functions
	Exampel:01
	Discription: Adding two intigers 


#include <stdio.h>

int sum (int,int); 				// Function Declaration
int main()
{
	int a,b;
	int z;
	printf("enter a and b values\n");
	scanf("%d,%d\n", &a,&b);
	z = sum(a,b); 				// Function Call
	printf("sum = %d\n", z);
	getchar ();
	return 0;
}
	int sum (int x,int y) 		// Function defination 
{
	 int result = x+y;
	 return result; 
}
 */
/*********************************************************************/


/*	TOPIC: Functions
	Exampel:02
	Discription: all types

#include <stdio.h>

long int add();
float div();
double mul(unsigned long int, long int);
signed int sub(unsigned short int, char);
int main()
{
	unsigned long int x;
	float p,q;
	char c,d;
	unsigned short int a;
	int i;

	
	printf("for addition enter two values");
	scanf("%hu, %d", a,i);
	int sum;
	sum = add(); 			// Function Call
	printf("%d", sum);
	
	
	printf("for Division enter two values");
	scanf("%f, %f", p,q);
	int rem;
	rem = div();			// Function Call
	printf("%lf",rem);
	
	
	printf("for multiplication, enter two values");
	scanf("%iu, %hu", x,a);
	int cal;
	cal = mul(x,a);			// Function Call
	printf("%iu",mul);
	
	
	printf("for Subtraction, enter two values");
	scanf("%hu, %c", a,c);
	signed int minus;
	minus = sub(i,a);			// Function Call
	printf("%h",minus);
	
	getchar ();
	return 0;
}

	double mul(unsigned long int k, long int l)
{
	double result = k*l;
	return result;
}

	signed int sub(unsigned short int a, char i)
{
	signed int res = i-a;
	return res;
}
	float div()
{
		int a=10,b=2;
		float qua = a%b;
		printf("%f", qua);
		return 0;
}
	long int add()
{
		long int e = 5697543,f=9713465;
		long int ress = e+f;
		return 0;	
}*/

/************************************************************************/


/*	TOPIC: Pointers
	Exampel:01
	Discription: all types


#include <stdio.h>

int main()
{
	int a;
	a=100;
	int *p;
	p = &a;
	printf("%d\n %d\n %d\n %d\n %u\n", a, *p, p, &p, &(*p));
	return 0;
}

********************************************************************** */


/*	TOPIC: Pointers
	Exampel:02
	Discription: all types


#include <stdio.h>

void foo(int);
int main(void)
{
	int a=50;
	foo(a);
	printf("%d",a);  //what does it print here??
	return 0;
}
void foo(int p)
{
	int *x;
	x = &p;
	p = 20;
	printf("*x=%d\n",*x);
	printf("x=%u\n",x);
}
*/
/************************************************************************/


/*	
	TOPIC: Pointers
	Exampel:01
	Discription: Size of pointers
*/

/*
#include <stdio.h>

int main()
{
	
	int i, *a;
	char c, *b;
	float f, *l;
	double d, *u;
	short int s, *si;
	long int li, *lint;
	
	printf("See the normal data_type size, those are varie \n");
	printf("%d\n %d\n %d\n %d\n %d\n %d\n", (sizeof(i)), (sizeof(c)), (sizeof(f)), (sizeof(d)), (sizeof(s)), (sizeof(li)));
	
	printf("See the pointer data_type size, those are FIXED \n");
	printf("%d\n %d\n %d\n %d\n %d\n %d\n", (sizeof(*a)), (sizeof(a)), (sizeof(b)), (sizeof(l)), (sizeof(u)), (sizeof(si)));
	
	// Generic, untyped pointer data type, i.e, VOID. 
	
	printf("Check the size of void pointer data_type");
	
	void *v;
	
	printf("%d\n", (sizeof(v)));
	
	return 0;
	
}

*/

/*	
	TOPIC: Pointers
	Exampel:01
	Discription: ~ 
*/

/*
#include <stdio.h>

int main()
{
	int a=20, b=40;
	printf("%d\t %d\n",a,b);
	sum_value(a,b);
	printf("%d\t %d\n",a,b);
	sum_address(&a,&b);
	printf("%d\t %d\n",a,b);
	return 0;
}
void sum_value(int p, int q)
{
	p=40;
	q=60;
}
void sum_address(int *p, int *q)
{
	*p = 50;
	*q = 100;
}
*/
/*	
	TOPIC: GOTO
	Exampel:01
	Discription: ~ 
*/
 /*
#include <stdio.h>
#include <stdint.h>

int main()
{
	short int num = 12;
	
	int bits = ((sizeof(short int) * 8)-1);
	printf("%d \n", bits);
	binary:
	printf( "%d",((num>>bits) & 1));
	bits --;
	//printf("%d \n", bits);
	if(bits >= 0)
	{
		goto binary;
	}
	else
	{
		printf("\n THE END");
	}
	getchar ();
	return 0;
}
*/

#include <stdio.h>
int main()
{
	int arr[10] = {5,6,7,9,6,8,52};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n", arr[i]);
		scanf("%d\n", &arr[i]);
	}
	return 0;
}
