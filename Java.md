
# Java `Comments`
```java
class Main{
	public static void main(String[] args){
		// This is a syntax for single line commenting
		
		/*
		this is 
		a syntax
		for multiline
		comment in java
		*/
	}
}
```

# Java `Printing statement`
```java
class Main{
	public static void main(String[] args){
		int age = 19;
		System.out.println("Hello World, I am "+age+" years of old");
		System.out.print("Hello World, I am "+age+" years of old");
		System.out.printf("Hello World, I am %d years of age",age);
		System.out.print(String.format("Hello world,I am %d years of age",age));
	}
}
```

# Java `Typecasting`
```java
class Main{
	public static void main(String[] args){
		double d = 30.25;
		int i = (int)d;
		System.out.println("Double: "+d);
		System.out.println("Int: "+i);
	}
}
```

# Java `If-Else`
```java
class Main{
	public static void main(String[] args){
		int age = 10;
		if(age>=18){
			System.out.println("Congrats! You are an adult now");
		}else if(age<18 && age>0){
			System.out.println("You are still a child!");
		}else{
			System.out.println("Invalid age!!");
		}
	}
}
```

# Java `For Loops`
```java
class Main{
	public static void main(String[] args){
		for(int i=0; i<=10; i++){
			System.out.println(i);
		}
	}
}
```

# Java `While Loop`
```java
class Main{
	public static void main(String[] args){
		int i = 0;
		while(i<=10){
			System.out.println(i);
			i++;
		}
	}
}
```

# Java `Do-While Loop`
```java
class Main{
	public static void main(String[] args){
		int i=0;
		do{
			System.out.println(i);
			i++;
		}while(i<=10);
	}
}
```

# Java `Switch-Case`
```java
class Main{
	public static void main(String[] args){
		int day = 4;
		switch(day){
			case 1:
				System.out.println("Monday");
				break;
			case 2:
				System.out.println("Tuesday");
				break;
			case 3:
				System.out.println("Wednesday");
				break;
			case 4:
				System.out.println("Thursday");
				break;
			case 5:
				System.out.println("Friday");
				break;
			case 6:
				System.out.println("Saturday");
				break;
			case 7:
				System.out.println("Sunday");
				break;
			default:
				System.out.println("Day does not exists");
				break;
		}
	}
}
```

# Java `Break & Continue`
```java
class Main{
	public static void main(String[] args){
		for(int i=0; i<=10; i++){
			if(i==5){
				break;
			}
			System.out.println(i);
		}
	}
}
```

# Java `Arrays`
```java
class Main{
	public static void main(String[] args){
	
		int[] arr = new int[3]; // 1-D Array
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 3;
		
		int[] arr = {1,2,3};
		
		int[] arr = new int[]{1,2,3}; // 1-D Array
		
		int[][] arr = new int[][]{{1,2,3},{4,5,6},{7,8,9}}; // 2-D Array
		
		int[][] arr = new int[][]; // 2-D Array
		arr[0][0] = 1;
		arr[0][1] = 2;
		arr[0][2] = 3;
		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;
		arr[2][0] = 7;
		arr[2][1] = 8;
		arr[2][2] = 9;
	}
}
```

# Java `For-Each Loop`
```java
class Main{
	public static void main(String[] args){
		int[] arr = {1,2,3,4,5,6,7,8,9,10};
		for(int i:arr){
			System.out.println(i); // this will print the whole array
		}
	}
}
```

# Java `Enum`
```java
enum Level{
    one,
    two,
    three,
    four,
    five,
}

class Main{
	public static void main(String[] args){
	    Level var = Level.one;
		switch(var){
		    case one:
		        System.out.println(1);
		        break;
		    case two:
		        System.out.println(2);
		        break;
		    case three:
		        System.out.println(3);
		        break;
		    case four:
		        System.out.println(4);
		        break;
		    case five:
		        System.out.println(5);
		        break;
		    default:
		        System.out.println("default");
		        break;
		}
	}
}
```

# Java `User Input`
```java
import java.util.Scanner;
class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your name: ");
		String name = sc.next();
		System.out.print("Enter your age: ");
		int age = sc.nextInt();
		System.out.printf("Your name is %s and you are %d years old",name,age);
	}
}
```

# Java `Functions`
```java
class Main{
	public static void main(String[] args){
		sum(5,5);
	}
	public void sum(x,y){
		System.out.println("Sum is: "+(x+y));
	}
}
```

# Java `Recursion`
```java
class Main{
	public static void main(String[] args){
		sum(10);
	}
	public void sum(x){
		if(x>0){
			int add = x+sum(x-1);
		}else{
			System.out.println(0);
		}
		System.out.println("The total sum is: "+add);
	}
}
```

# Java `VarArgs`
**Varargs a.k.a Variable Arguments make sure that as many as argument you give to a method, the result will be generated as per it. Which ensure that we do not have to create different functions for accepting different number of arguments**
``` java
class Main{
	static void sum(int ...x){
		int result=0;
		for(int i:x){
			result+=x;
		}
		System.out.println(result);
	}
	static void sub(int a,int ...x){ // this method needs atleast one argument
		int result=0;
		for(int i:x){
			result+=x;
		}
		System.out.println(result-a);
	}
	public static void main(String[] args){
		sum(1,2,3); // This will give the result of 1+2+3
		sum(1,2,3,4,5); // This will give the result of 1+2+3+4+5
		sum(1,2,3,7,8,9); // This will give the result of 1+2+3+7+8+9
	}
}
```

# Java `this keyword`
**this keyword is used to refer to the current object in a method or constructor.**
```java
class Person{
	int nHands;
	int nLegs;
	public Person(int nHands, int nLegs){
		this.nHands = nHands;
		this.nLegs = nLegs;
	}
}
```

# Java `Classes & Constructors`
- **Classes are blueprints that defines a variable**
- **Objects are special methods which initializes objects of a class**
```java
class Person{
	int nHands;
	int nLegs;
	
	// Parameterized Constructor
	public Person(int nHands, int nLegs){
		this.nHands = nHands;
		this.nLegs = nLegs;
	}
	
	// Default Constructor
	public Person(){
		nHands = 2; // Setting default values to the class variables
		nLegs = 2;
	}
}
```

# Java `Objects & Methods`
- **Method is a function defined inside a class**
- **Objects are instances of classes**
```java
class Person{
	int nHands;
	int nLegs;
	
	// Parameterized Constructor
	public Person(int nHands, int nLegs){
		this.nHands = nHands;
		this.nLegs = nLegs;
	}
	
	// Default Constructor
	public Person(){
		nHands = 2; // Setting default values to the class variables
		nLegs = 2;
	}
	
	// Method Definition
	public work(){
		System.out.printf("I am a human and I %d hands and %d legs!",nHands, nLegs);
	}
}

class Main{
	public static void main(String[] args){
		Person sabya = new Person(2,2); // sabya is an object of that Person class
		sabya.work(); // Calling the method
	}
}
```

# Java `Function/Method Overloading`
- **Defining methods of similar names inside of a same class**
- Rules
	- 1.  Change the number of parameters in both the methods
	- 2.  Change the datatype of the parameters of both the methods
	- 3.  Change the order of the parameters of both the methods

```java
class Books{
	String name;
	String type;
	
	public Books(String name, String type){
		this.name = name;
		this.type = type;
	}
	
	public genre(String name, String type){
		System.out.printf("The name of the book is %s and its genre is %s",name, type);
	}
	
	public genre(String name,){
		System.out.printf("The name of the book is %s and its genre is unknown",name);
	}
}
```

# Java `Function/Method Overriding`
- **Defining methods of similar names in different classes**
- Rules [Click to view](https://www.geeksforgeeks.org/overriding-in-java/)
```java
class Anushka{
	public callsLike(){
		System.out.println("Hello Sabu");
	}
}

class Indranil{
	public callsLike(){
		System.out.println("Oi Sobbo");
	}
}

class Main{
	public static void main(String[] args){
		Anushka a = new Anushka();
		Indranil i = new Indranil();
		a.callsLike(); // Output: Hello Sabu
		i.callsLike();  // Output: Oi Sobbo
	}
}
```

# Java `super keyword`
**The super keyword in Java is a reference variable which is used to refer immediate parent class object.**
```java
class Parent{
	int x;
	Parent(int x){
		this.x=x;
	}
	void pFunc(){
		System.out.printf("This %d is part of a parent function",x);
	}
}
class Child extends Parent{
	int y;
	Child(int x, int y){
		super(x); // this calls the parent class constructor
		this.y=y;
	}
	void cFunc(){
		System.out.printf("This %d is part of a child function",y);
	}
}
class Main{
	public static void main(String[] args){
		Parent p = new Parent(1);
		p.pFunc(); // Output: This 1 is part of a parent function
		Child c = new Child(1,2);
		c.pFunc(); // Output: This 1 is part of a parent function
		c.cFunc(); // Output: This 2 is part of a child function
	}
}
```

# Java `Inheritance`
Inheritance : **An OOP Concept where a class can have its own child classes and all the child classes will by-default inherit all the properties of its parent class.**
**In Inheritance we use the concept of method overriding**
```java
class Animal{
	public sounds(){
		System.out.println("Animals make sounds");
	}
}

class Pig extends Animal{
	public sounds(){
		System.out.println("Pigs says: Wee-Wee");
	}
}

class Cow extends Animal{
	public sounds(){
		System.out.println("Cow says: Moo-Moo");
	}
}

class Main{
	public static void main(String[] args){
		Pig pig = new Pig();
		Cow cow = new Cow();
		cow.sounds();
		pig.sounds();
	}
}
```

# Java `Polymorphism`
**In polymorphism we use the concept of method overriding**
```java
class Parent{
	void sound(){
		System.out.println("The parent says hello");
	}
}
class Child extends Parent{
	void sound(){
		System.out.println("The child says hello");
	}
}
class Main{
	public static void main(String[] args){
		Parent p = new Parent();
		Child c = new Child();
		p.sound(); // Output: The parent says hello
		c.sound(); // Output: The child says hello
	}
}
```

# Java `Abstraction using Abstract class & methods`
- **Abstraction is the process of hiding sensitive details and only showing required data to the users**
-  **Abstract Method** : Methods that are declared only in a class and has to define it in its child class.
-  **Abstract class** : A class where exists abstract methods and that class restricts making its objects.
```java
abstract class Parent{
	int x,y;
	abstract String getData();
}
class Child extends Parent{
	String getData(){
		return "Defined in child";
	}
}
class Main{
	public static void main(String[] args){
		Child c = new Child();
		c.getData();
	}
}
```

# Java `Final class & Methods`
- **Final Method** : A method that cannot be redefined in any of its child class
- **Final Class** : A class that cannot have its own child class.
```java
final class sterileParent{
	String getData(){
		return "This is a final class";
	}
}
class Entity{
	final String getData(){
		return "This is a final method";
	}
}
class Main{
	public static void main(String[] args){
		System.out.println("This is a main method inside a main class")	
	}
}
```

# Java `Access Modifiers`

For Class      
---
- **Public** : The class is accessible for any other class
- **default** : The class is only accessible by the classes present in the same package

For Methods 
---
- **Public** : The code is accessible for all classes
- **Protected** : The code is accessible in the same packages and child classes
- **Private** : The code is only available within the declared class
- **Default** : The code is accessible in the same package

# Java `static method`
**It means that a static method can be called without even creating an object of the class**
```java
class Person{
	public static void job(){
		System.out.println("Hi there");
	}
}
class Main{
	public static void main(String[] args){
		Person.job(); // Output: Hi there
	}
}
```

# Java `Inner Class / Nested Class`
```java
class Marvel{
	
	void desc(){
		System.out.println("It is a cinematic entertainment company");
	}
	
	class Avengers{
		
		void desc(){
			System.out.println("It is a group of superheroes");
		}
	}
}

class Main{
	public static void main(String[] args){
		Marvel m = new Marvel();
		m.desc();  // Output: It is a cinematic entertainment company
		
		Marvel.Avengers a = m.new Avengers();
		a.desc(); // Output: It is a group of superheroes
	}
}
```

# Java `Getter & Setter`
```java
class ABC{
	private int x;
	
	public ABC(x){
		this.x=x;
	}
	
	public int getData(){
		return this.x;   // This is a getter which gets data
	}
	
	public void setData(int x){
		this.x=x;        // This is a setter that sets data
	}
}
```

# Java `Dynamic Method Dispatching / Runtime Polymorphism`
```java
class Parent{
	void func(){
		System.out.println("This is of main parent class");
	}
}
class Child extends Parent{
	void func1(){
		System.out.println("This is of child class");
	}
	void func(){
		System.out.println("This func is of child class");
	}
}

class Main{
	public static void main(String[] args){
		Parent p = new Parent();
		Child c = new Child();
		Parent obj = new Child();
		
		p.func(); // Output: This is of main parent class
		c.func(); // This will check whether func() is present in child class or not, if so then that will be executed else the parent method will be executed. Output: This func is of child class
		c.func1(); // Output: This is of child class
		obj.func(); // This will check whether func() is present in child class or not, if so then that will be executed else the parent method will be executed. Output: This func is of child class
		obj.func1(); // !Show error
	}
}
```

# Java `Encapsulation`
**The meaning of encapsulation is to make sure that the sensitive data is hidden from the user**
```java
class ABC{
	private int x;
	
	public ABC(x){
		this.x=x;
	}
	
	public int getData(){
		return this.x;   // This is a getter which gets data
	}
	
	public void setData(int x){
		this.x=x;        // This is a setter that sets data
	}
}
class Main{
	public static void main(String[] args){
		ABC obj = new ABC();
		obj.setData(10);
		System.out.println(obj.getData());
	}
}
```

# Java `Interfaces`
```java
interface one {
	public void myFunction();
}

interface two {
	public void myFunction2();
}

class Demo implements one,two{
	public void myFunction(){
		System.out.println("This is a function for first interface");
	}
	
	public void myFunction2(){
		System.out.println("This is a function for second interface");
	}
}

class Main{
	public static void main(String[] args){
		Demo mydemo = new Demo();
		mydemo.myFunction(); // This is a function for first interface
		mydemo.myFucntion2(); // This is a function for second interface
	}
}
```
# Java `Threads`
- Threads: Subprogram of an entire program is called Thread
- Suppose there are 2 different functions in a Java code. Each function denotes a thread whereas the entire java code denotes a program.
- There are 2 ways to implement threading:
	- Using Thread Class
	- Using Runnable Interface

```java
// Implementing Threads using Thread class
import java.lang.Thread; // importing Thread class

class A extends Thread{
	public void run(){ // Defining a thread in run method
		System.out.println("This is a task inside class A");
	}
}

class Main{
	public static void main(String[] args){
		A a = new A();
		a.start(); // executing the thread using start method which will invoke the run method
	}
}
```
```java
// Implementing Threads using Runnable Interface
import java.lang.Thread;
class A implements Runnable{ // using runnable interface
	public void run(){ // the run method to construct a thread
		System.out.println("This is a task inside class A");	
	}
}

class Main{
	public static void main(String[] args){
		A a = new A(); // creating an object of class A
		Thread t = new Thread(a); // creating a new thread and passing object a
		t.start(); // executing the start method
	}
}
```

# Java `Multithreading`
```java
import java.lang.Thread;
class A extends Thread{
	public void run(){
		for(int i=0; i<11; i++){
			System.out.println("A: #"+i);
		}
	}
}
class B extends Thread{
	public void run(){
		for(int i=0; i<11; i++){
			System.out.println("B: #"+i);
		}
	}
}
class Main{
	public static void main(String[] args){
		A a = new A();
		B b = new B();
		a.start();
		b.start();
	}
}
```
```java
import java.lang.Thread;
class A implements Runnable{
	public void run(){
		for(int i=0; i<11; i++){
			System.out.println("A: #"+i);
		}
	}
}
class B implements Runnable{
	public void run(){
		for(int i=0; i<11; i++){
			System.out.println("B: #"+i);
		}
	}
}
class Main{
	public static void main(String[] args){
		A a = new A();
		B b = new B();
		Thread t1 = new Thread(a);
		Thread t2 = new Thread(b);
		t1.start();
		t2.start();
	}
}
```

# Java `Thread Methods`
- start() - It is used to start the execution of the thread.
- run() - the body of the thread is defined here. It is used to do an action for a thread.
- sleep() - It sleeps a thread for the specified amount of time.
- join() - it waits for a thread to die
- getPriority() - it returns the priority of the thread
- setPriority() - it sets the priority of the thread
- getName() - it returns the name of the thread
- setName() - it sets the name of the thread
- yield() - It causes the currently executing thread object to pause and allow other threads to execute temporarily.
- isAlive() - it tests whether the thread is alive or not
- resume() - it is used to resume the suspended thread
- stop() - it is used to stop the thread
- destroy() - it is used to destroy the thread groups and all its subgroups
- getState() - it is used to return the state of the thread

# Java `Thread LifeCycle`
!(https://www.scientecheasy.com/wp-content/uploads/2020/06/thread-life-cycle.png)

# Java `Static & Non-static Block`
- Static block - a block is created with a static keyword. it runs before the main() method.
- Non-static block - when a block is created without using the static keyword. It runs whenever an object is created of that class.
```java
class Main{
	static{
		System.out.println("Inside Static block");
	}
	public static void main(String[] args){
		System.out.println("Inside Main");
	}
}

/*
Output:

Inside Static block
Inside Main

*/
```
# Java Theory Questions
---
```md

- Class - Blueprint of an object
- Object - Instance of a class

- Constructor - A special method that is used in initialize an object.
- Parameterized constructor - A constructor which accepts parameters to initialize an object
- Non-parameterized constructor - A constructor which does not accept parameters to initialize an object
- Default constructors - Constructors that are defined beforehand and does not need any explicit definition

- Method - Function inside a class
- Method overloading - defining same methods in same class
- Method overriding - defining same methods in child class
- Method declaration - Only telling the compiler about the method name, parameter etc.
- Method definition - The body of the method where exists the task it needs to perform

- Constructor Overloading - Writing more than 1 constructor in a class with a unique set of arguments

- Inheritance - The property to inherit the attributes & methods from another class into its child class
- Polymorphism - Using same mathods for different task execution. It uses the concept of method overriding
- Abstraction - The process of hiding sensitive details and showing only the required data to the user
- Encapsulation - The process to make sure that the sensitive data is hidden.

- Abstract classes - Classes that restricts creation of its objects and also contains abstract methods
- Abstract methods - Method declared in a class and need to define in its child class

- Final class - A class which cannot have its child class
- Final methods - A method which cannot be overriden or redefined in its child class
- Final variable - A variable whose value cannot be changed throughout the code.

- Static methods - A method which can be called from a different class without creating the object of the class where the method is defined.
- Static variables - It is a kind of global variable which is shared among all instances of the class.

- Interfaces - Special type of class which is used to acheive abstraction

- Access Modifiers - Special keywords that can be used to control the visibility of the fields, methods, classes etc.

- Public class - The class is accessible for any other class
- Public methods - The method is accessible for all classes

- Default Class - The class is only accessible to the classes present in the same package
- Default Methods - The method is accessible in the same package

- Protected Methods - The method is accessible in the same package and child classes
- Private Methods - The method is only available in the declared class

- Threads - Subprogram of a program
- Multithreading - Executing multiple threads parallely

Ways to implement Threads : 
---
1. Extending Thread class
2. Implementing Runnable Interface

Types of Inheritance : 
---
1. Single Level (Single parent having single child)
2. Multi level (Grandparent to parent to child)
3. Multiple (Multiple parent having same child)
4. Hybrid (Single parent having multiple children and those multiple children has a same child of themselves)
5. Hierarchical (Single parent having multiple child)

Points on implementing Thread using Thread class:
-------------------------------------------------
1. The class should extend the Thread class which is present in java.lang.Thread
2. The body of the thread needs to be present inside run() method which needs to be overriden
3. To start executing the thread, the thread child class object must call the start() method

Points on implementing Thread using Runnable interface:
-------------------------------------------------------
1. The class should implement the Runnable Interface which is present in java.lang.Runnable
2. The body of the thread needs to be present inside run() method which needs to be defined
1. The thread can be run by passing an instance of the class to a Thread object's constructor and then calling the thread's start() method

**Note:** The major difference is that when a class extends the Thread class, you cannot extend any other class, but by implementing the Runnable interface, it is possible to extend from another class as well

Thread Methods:
----------------
- start() - It is used to start the execution of the thread.
- run() - the body of the thread is defined here. It is used to do an action for a thread.
- sleep() - It sleeps a thread for the specified amount of time.
- join() - it waits for a thread to die
- getPriority() - it returns the priority of the thread
- setPriority() - it sets the priority of the thread
- getName() - it returns the name of the thread
- setName() - it sets the name of the thread
- yield() - It causes the currently executing thread object to pause and allow other threads to execute temporarily.
- isAlive() - it tests whether the thread is alive or not
- resume() - it is used to resume the suspended thread
- stop() - it is used to stop the thread
- destroy() - it is used to destroy the thread groups and all its subgroups
- getState() - it is used to return the state of the thread

Lifecycle of Thread:
--------------------
1. New - Whenever a new thread is created, it is always in the new state. For a thread in the new state, the code has not been run yet and thus has not begun its execution.

2. Runnable - A thread, that is ready to run is then moved to the runnable state. In the runnable state, the thread may be running or may be ready to run at any given instant of time.

3. Running - When the thread gets the CPU, it moves from the runnable to the running state.

4. Blocked - Whenever a thread is inactive for a span of time (not permanently) then, either the thread is in the blocked state or is in the waiting state.

Refer this - https://www.scientecheasy.com/wp-content/uploads/2020/06/thread-life-cycle.png
- Green boxes - States
- Arrows - from where to where
- methods - indicating which method is required to go to which state

- Static block - a block is created with a static keyword. it runs before the main() method.
- Non-static block - when a block is created without using the static keyword. It runs whenever an object is created of that class.

Types of error -
---
1. Runtime error
2. Compile time error

- Exception - It is the error condition occured during the runtime of the program

Steps of Exception Handling:
---
1. Hit
2. Throw
3. Catch
4. Handle

- Try block - This is where a piece of code is tried and if it throws an exception it is caught by catch block
- Catch block - This block accepts a parameter and it catches the exception thrown by the exception handler
- Finally block - The finally block in java is used to put important codes such as clean up code e.g. closing the file or closing the connection.

- Applet - Applet is a special type of program that is embedded in the webpage to generate the dynamic content. It runs inside the browser and works at client side.

Running an applet : 
---
1. By HTML
2. By AppletViewer Tool

```