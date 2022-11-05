# Introduction to Pointer in C Language
---
- Pointers - variables that stores address of another variable
- (asterisk*) stands for value of
- & stands for address of

# Pointer Variable Declaration
```c
	// Pointer Variable declaration
	int a=5; // normal integer variable
	int *p; //declaration of integer pointer p
	p = &a; // p is now being initialized with the address of a
```

# Working with Pointers
```c
	// Working with pointers
	printf("%d\n",a); // 5 - this gives the value of a
	printf("%d\n",p); // 10000 - this gives the address of a
	printf("%d\n",&a); // 10000 - this gives the address of a
	printf("%d\n",*(&a)); // 5 - this gives the value at address of a
	printf("%d\n",*(p)); // 5 - this gives value which has the address of a
	printf("%d\n",&p); // 10000 - this gives the address of p
	*p = 8; // value of a was 5 and has been changed to 8
	printf("%d\n",a); // 8 - this gives the value of a
	printf("%d\n",p); // 10000 - this gives the address of a
	printf("%d\n",&a); // 10000 - this gives the address of a
	printf("%d\n",*(&a)); // 8 - this gives the value at address of a
	printf("%d\n",*(p)); // 8 - this gives value which has the address of a
	printf("%d\n",&p); // 40000 - this gives the address of p
	
	// printf("%d",*p)
	// This will give the value of the variable present at the address which is being hold by the integer pointer p. 
	// This is called `Dereferencing`

```

# Pointer of different datatypes
```c
	// Pointer of different datatypes
	int p;
	int *x; // Integer pointer
	x=&p // variable x has the address of integer variable p
	
	char q;
	char *y; // character pointer
	y=&q; // variable y has the address of integer variable q
	
	double r;
	double *z; // double pointer
	z=&r; // variable z has the address of integer variable r
```

# Pointer Arithmetic
```c
	// Pointer arithmetic
	int a= 5, b=5;
    int *p = &a, *q=&b;
    
    printf("a+b: %d\n",(*p)+(*q)); // a+b: 10
    printf("a-b: %d\n",(*p)-(*q)); // a-b: 0
    printf("a*b: %d\n",(*p)*(*q)); // a*b: 25
    printf("a/b: %d\n",(*p)/(*q)); // a/b: 1
    
    printf("a+b: %d\n",(*(&a))+(*(&b))); // a+b: 10
    printf("a-b: %d\n",(*(&a))-(*(&b))); // a-b: 0
    printf("a*b: %d\n",(*(&a))*(*(&b))); // a*b: 25
    printf("a/b: %d\n",(*(&a))/(*(&b))); // a/b: 1
```

# Pointer Typecasting
```c
	//Typecasting Pointers
	int a = 1025;
	int *p = &a;
	printf("Size of Int: %d\n",sizeof(int)); // Size of Int: 4
	printf("Address = %d, value = %d\n",p,*p); // Address = 18428, value = 1025
	printf("Address = %d, value = %d\n",p+1,*p+1); // Address = 18432, value = 1026
	char *q;
	q = (char*)p; // typecasting an integer pointer to character pointer
	printf("Size of Char: %d\n",sizeof(char)); // Size of Char: 1
	printf("Address = %d, value = %d\n",q,*q); // Address = 18428, value = 1
	printf("Address = %d, value = %d\n",q+1,*q+1); // Address = 18429, value = 2
	// 1025 = 00000000 00000000 00000100 00000001
	//        |4 byte| |3 byte| |2 byte| |1 byte|
```

# Pointer to Pointer
```c
int x=5; // a normal integer variable
int* p = &x; // p is having the address of variable x
*p = 6;
int** q = &p; // q is having the address of pointer p
int*** r = &q; // r is having the address of pointer q

printf("%d\n",*p); //6
printf("%d\n",*q); //225 i.e. address of pointer p
printf("%d\n",*(*q)); // 6
printf("%d\n",*r); // 205 i.e. address of pointer q
printf("%d\n",**r); // 225 i.e. address of pointer p
printf("%d\n",***r); // 6 i.e. value of variable x

***r = 10;
printf("x = %d\n",x) // 10

**q = *p + 2;
printf("x = %d\n",x); // 12
```

# Call by reference
- Passing a pointer as an argument in a function as a reference of a variable so that we can dereference it and perform some operation, is called Call by reference

```c
void Increment(int* p){
	*p = (*p)+1;
}
int main(){
	int a=10;
	printf("a = %d\n",a); // 10
	Increment(&a); // the address of variable a is sent to Increment() hence the value incremented
	printf("a = %d",a); // 11
}
```

# Pointers and Arrays
```c
int arr[] = {1,2,3,4,5};

printf("%d\n",arr); // 1000 i.e. the address of arr[0]
printf("%d\n",arr+0); // 1000 i.e. the address of arr[0]
printf("%d\n",&arr[0]); // 1000 i.e. the address of arr[0]
printf("%d\n",arr[0]); // 1 i.e. the value of arr[0]
printf("%d\n",*arr); // 1 i.e. the value of arr[0]
printf("%d\n",*(arr+0)); // 1 i.e. the value of arr[0]

for(int i=0; i<5; i++){
	printf("Value: %d\n",*(arr+i));
	printf("Address: %d\n",(arr+i));
}
/*

Output:

Value: 1
Address: 597613904
Value: 2
Address: 597613900
Value: 3
Address: 597613896
Value: 4
Address: 597613892
Value: 5
Address: 597613888

*/
```

# Passing arrays in function arguments
```c
#include <stdio.h>
int sumElem(int *p){
    int sum=0;
    for(int i=0; i<5; i++){
        printf("Sum: %d\n",sum);
        printf("p[i]: %d\n",p[i]);
        sum=sum+p[i];
    }
    return sum;
}
int main() {
    int arr[] = {10,10,10,10,10};
    int c = sumElem(&arr);
    printf("%d",c);
    return 0;
}

/*

Output:

Sum: 0
p[i]: 10
Sum: 10
p[i]: 10
Sum: 20
p[i]: 10
Sum: 30
p[i]: 10
Sum: 40
p[i]: 10
Sum: 50

*/
```
