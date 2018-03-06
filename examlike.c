/*
  EXAM-LIKE QUESTIONS
  ===================


 ** SHEET 10 **

(i)	Difference between int and unsigned int: When stored as bits, there is a "sign byte" 
	in front of the integer for type int. int can hold a positive or a negative number.
	unsigned int can only hold non-negative numbers.

(ii)	Difference between float and double: double is more precise than float. 

(iii)	int a = -3; unsigned int b = 1; float 5.68; char c = 'a'; (could also be int a = 1)

(iv)	A cast changes the type of a variable. 
	Negative Example: int n = 1; (double)n = 6.5; (DOES NOT WORK)
	Example: (double)(7/2) = 3.000 & ((double)7)/((double)2) = 3.500
	-> do not forget where to put brackets!

(v)	double x = 1/4 will store 0 into x as 1 and 4 are integers.
	Correction(s): double x = 0.25 / double x = 1./4 / double x = 1/4. 
		       double x = (double)1/4


 ** SHEET 11 **

(i)	A pointer stores an adress of a variable. The type in the definition is the type 
	of the variable it points to.

(ii)	A pointer can be initialized to NULL or an Adress. The pointer is dereferenced by
	the content operator *.		ALSO to another pointer!!!

(iii)	1. void function(const double *x){...}	points to const double
	2. 		(double *x)		points to double
	3. 		(const* double x)	does this exist?? NO!!!
	4. 		(double* const x)	always points to same place
	3.		(const double* const x) always points to same place

(iv)	+ and - shift a pointer by one space in memory. Pointers can also be equal
	(they then point to the same place).

(v)	To be assigned to each other, pointers have to point to the same data type. 
	A pointer to void can point to anything, but it cannot be dereferenced and one
	cannot perform pointer arithmetic with it. Void pointers can be assigned to anything!
	Possible: int n = 10; void* pn = &n; 
	Not possible: printf("...", *pn); with above line.

(vi)	A pointer to a function stores the adress of the function and is dereferenced to
	the function itself.

(vii)	void someFunction(int(*someOtherFunction)(int, int)){...}
	Careful: around this first int, no brackets!

(viii)	Program:
	int *zPtr;
	int *aPtr = NULL;
	void *sPtr = NULL;
	int number, i;
	int z[5]={1,2,3,4,5};
	sPtr = z;
	zPtr = z;

	(a)	printf("%d\n", *aPtr);
		One cannot print NULL which the pointer is being dereferenced to
	(b)	number = zPtr;
		number is int and zPtr is pointer, cannot be assigned to each other
	(c)	number = *zPtr[2];
		number = zPtr[2] would be okay. Dereferencing a number (third array element)
		does not work.
	(d)	for (i = 0; i <= 5; i++) printf("%d\n", zPtr[i]);
		zPtr[5] is out of the array bounds, the last element is 5 at z[4]. Can be
		resolved by getting rid of = sign in the for loop.
	(e)	number = *sPtr;
		Dereferencing a void pointer doesn't work.
	(f)	++z;
		z points to the first array element. As z is the array name, it is a constant 
		pointer which cannot be changed by pointer arithmetic. 
		z has to be dereferenced first!


 ** SHEET 12 **

(i)	An array is a fixed line of memory elements without interruption; the array name is 
	the constant (!) pointer to the first element. All elements in an array are of the 
	same data type. The number of elements is constant and determined in the definition/
	initialization; the value of an array name is the adress of the first element.

(ii)	Space in memory occupied by *type*arr[N]: N*sizeof(*type*). 
	N is of type const int or const unsigned int; or int and this int is given to a 
	function taking it in as a const (unsigned) int. 
	But: it is better to go for the following:
	int N; int* a;
	a = malloc(N*sizeof(type));

(iii)   Ways to initialize "Hello":
	1. char c[5] = {'H', 'e', 'l', 'l', 'o', '\0'};
	2. char c[5] = "Hello";
	3. char c[5]; c[0] = 'H'; ... c[5] = '\0';
	4. char* a = (char *)malloc(5*sizeof(char));
	Array size: sizeof(<array_name>). Numbers in array: n = sizeof(<name>)/sizeof(a[0])
	Read string: char a[6]; n = sizeof(a)/sizeof(a[0]); scanf("%s", a);

(iv)	Memory is automatically freed when leaving the scope. (!) Manually:
	a = (type *)malloc(space_needed) / (type *)realloc(pointer, space_needed) / free(pointer)
	free() only works for memory allocated with malloc.

(v)	(a)(f) Technically, one can access memory beyond array bounds, the compiler will give 
	       an error or crap will come out referencing out of bound memory elements.
	(b)(f) All variables in an array are of the same data type.
	(c)(f) An array index is always an (unsigned) integer.
	(d)(t) a[i] could only be modified in the calling scope when passed as a pointer.
	(e)(f) Program won't compile when there are more initializers in the list than array is long
	(f)(f) Compiler will initialize all other array elements to zeroes (in C Standard).

(vi)	double sum(void *p, const int size){
	  int *par = (int *)p;	// only way to access void pointer!
	  int sum = 0;
	  for (int i = 0; i < size; i++)
	  {
		sum += par[i];
	  }
	  return sum;
	}


 ** SHEET 13 **

(i)	Struct members can be accessed with the . or the -> operators, depending on how the struct
	was passed to the function. 
	myTrianglePtr->height becomes (*myTrianglePtr).height

(ii)	struct Example {};
	struct Example beispiel; // initialization of beispiel of type struct Example
	typedef struct Example EXAMPLE; // defining struct Example as EXAMPLE through typedef
	EXAMPLE beispiel;	 // analogous to line 2

(iii)	(a)(f) Structure definitions are basically declarations which do not occupy memory space.
	(b)(f) Structure members do not have to be of built-in data types, e.g. one can have
	       structs within structs. 						
	(c)(t) One can, in fact, have arrays of structures.
	(d)(f) Structures can not be compared with == or !=, only through written-out functions
	       comparing them variable by variable, as done in the script. Structures cannot be
	       object to arithmetic operations either.

(iv) 	void time(int sec){

	  int hrs = 0;
	  int min = 0;
	
	  if (sec >= 3600)
	  {
		hrs = (int)sec/3600;	// type cast is important here!
		sec = (int)sec%3600;
		min = (int)sec/60;
		sec = (int)sec%60;
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	  }  
	  
	  if (sec < 3600 && sec >= 60)
	  {
		min = (int)sec/60;
		sec = (int)sec%60;
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	  }  

	  if (sec < 60)
	  {
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	  }  
	}

	Also possible:

(iv)	void time(int sec){	// time converter with substraction
	  int hrs = 0;
	  int min = 0;

	  for(;sec >= 3600;sec -= 3600)	
	  {    
		hrs += 1; 
	  }

	  for(;sec >= 60;  sec -= 60)   
	  {  
		min += 1; 
	  }

	  printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
        }

(v)	int power(int a, int b){
	  int pow = 0;
	  if (a < 0 || b < 0)
	  {
		printf("Error");
		exit(0);
	  }
	  if (b == 0)
	  {
		return 1;
	  }
	  return a*power(a, b-1);
	}

