# Linear Search
- Time complexity = O(n)
- Space Complexity = O(1)

```c
# include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    printf("Enter the number to be searched for: ");
    scanf("%d",&num);
    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++){
        if(num==arr[i]){
            printf("The element %d is at index %d",num, i);
        }
    }
}

/*

Output:

Enter the number to be searched for: 2
The element 2 is at index 1

*/
```

# Binary Search
- Time Complexity = O(logn)
- Space Complexity = O(1)

```c
# include<stdio.h>
void binary(int arr[],int num, int size, int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        if(num==arr[mid]){
            printf("The number is at: %d",mid);
        }else if(num<arr[mid]){
            binary(arr,num,size,l,mid-1);
        }else{
            binary(arr,num,size,mid+1,r);
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int num, size=sizeof(arr)/sizeof(int), l=0, r=size-1;
    printf("Enter the number to be searched for: ");
    scanf("%d",&num);
    binary(arr,num,size,l,r);
    
}

/*

Output:

Enter the number to be searched for: 2
The element 2 is at index 1

*/
```

# Bubble Sort
- Time Complexity: O(n^2)
```c
#include <stdio.h>
void swap(int* p, int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[], int size){
    for(int i=1; i<size; i++){
        for(int j=1; j<size;j++){
            if(arr[j-1]>arr[j]){
                swap(&arr[j-1],&arr[j]);
            }
        }
    }
}
int main() {
    
    int arr[] = {7,5,9,6,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting...\n");
    printArray(arr,size);
    printf("\nAfter Sorting...\n");
    bubbleSort(arr,size);
    printArray(arr,size);
    return 0;
}

/*

Output:

Before Sorting...
7 5 9 6 4 2 
After Sorting...
2 4 5 6 7 9 

*/
```

# Selection Sort
- Time Complexity: O(n^2)
```c
#include <stdio.h>
void swap(int* p, int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
void selectionSort(int arr[], int size){
    int min;
    for(int i=0; i<size; i++){
        min=i;
        for(int j=i; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
    
}
int main() {
    
    int arr[] = {7,5,9,6,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting...\n");
    printArray(arr,size);
    printf("\nAfter Sorting...\n");
    selectionSort(arr,size);
    printArray(arr,size);
    return 0;
}
/*

Output:

Before Sorting...
7 5 9 6 4 2 
After Sorting...
2 4 5 6 7 9 

*/
```
# Insertion Sort
- Time Complexity: O(n)
```c
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}

```
# Merge Sort
- Time Complexity: O(nlogn)
```c
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];


	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}

```
# Quick Sort
- TIme Complexity: O(nlogn)
```c
// Quick Sort Algorithm

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int randint(int lowerLim, int upperLim);
void printArray(int arr[], int arrSize);
void sort(int arr[], int lo, int hi);
int part(int arr[], int lo, int hi);
void swapInt(int* num1, int* num2);

int main() {
    int arr[20];
    const int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++) arr[i] = randint(10, 99);

    printf("BEFORE SORTING : \n");
    printArray(arr, arrSize);

    sort(arr, 0, arrSize-1);

    printf("\n\nAFTER SORTING : \n");
    printArray(arr, arrSize);

    printf("\n\n\n\n");
}

int randint(int lowerLim, int upperLim) {
    return (rand() % (upperLim - lowerLim + 1) + lowerLim);
}

void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        if (i) printf(", ");
        printf("%d", arr[i]);
    }
}

void sort(int arr[], int lo, int hi) {
    if (lo < hi) {
        int mid = part(arr, lo, hi);
        sort(arr, lo, mid-1);
        sort(arr, mid+1, hi);
    }
}

int part(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int i = lo-1;
    for (int j = lo; j < hi; j++) {
        if (arr[j] < pivot) {
            i++;
            swapInt(arr+j, arr+i);
        }
    }
    i++;
    swapInt(arr+i, arr+hi);

    return i;
}

void swapInt(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
```
# Fractional Knapsack
- Time Complexity: O(nlogn)
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Item { double wt, val, r; } Item;

int randint(int l, int u) { return l + ( rand() % (u-l+1) ); }

int compareItems(const Item* i1, const Item* i2) {
    if (i1->r > i2->r) return 1;
    if (i1->r < i2->r) return 1;
    return 0;
}

double fKnapsack(Item items[], int itemCount, double sackWeight) {
    qsort(items, itemCount, sizeof(Item), compareItems);

    double result = 0;

    for (int i = 0; i < itemCount && sackWeight > 0; i++) {
        if (items[i].wt < sackWeight) {
            result += items[i].val;
            sackWeight -= items[i].wt;
        } else {
            result += items[i].val * (sackWeight/items[i].wt);
            return result;
        }
    }

    return result;
}

int main() {
    const int itemCount = 3;
    Item items[3];
    for (int i = 0; i < itemCount; i++) {
        items[i].val = randint(1, 10) * 20;
        items[i].wt  = randint(1, 7) * 5;
        items[i].r = items[i].val / items[i].wt;
        printf("\nITEM [ val : %lf ] [ wt : %lf ] [ r : %lf ]", items[i].val, items[i].wt, items[i].r);
    }
    double sackWeight = 50;

    printf("\nMaxValue : %lf\n\n", fKnapsack(items, itemCount, sackWeight));
}
```
# Job Sequencing
- Time Complexity: O(n^2)
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Job { int id, profit, deadline; } Job;
typedef struct sequenceReturn { Job** sequence; int sequenceSize; } sequenceReturn;

// Generates a random Integer between 'lower' and 'upper'
int randint(int lower, int upper) { return lower + ( rand() % (upper - lower + 1) ); }

// Prints to Console ID, Profit, Deadline of a Job Structure
void printJob(Job* job) { printf("ID : %d\t| Profit : %d\t| Deadline : %d", job->id, job->profit, job->deadline); }

// Prints a series of Jobs in array format
void printJobs(Job jobs[], int jobCount) { for (int i = 0; i < jobCount; i++) { if (i) printf("\n"); printJob(jobs + i); } }

// Compares two jobs and returns which job is grater
// OUTPUT : -1, 1st job profit is greater
//           0, Both have same profit
//           1, 2nd job profit is greater
int compareJob(const Job* j1, const Job* j2) { return (j1->profit > j2->profit ? -1 : j1->profit < j2->profit ? 1 : 0); }

// Gets the maximum deadline for an array of jobs
int getMaxDeadline(Job jobs[], int jobCount) {
    int maxDeadline = INT_MIN;
    for (int i = 0; i < jobCount; i++) maxDeadline = max(maxDeadline, jobs[i].deadline);
    return maxDeadline;
}

// Returns an sequenceReturn structure // sequence contains array of pointers to job and size of jobs
sequenceReturn sequence(Job jobs[], int jobCount) {
    qsort(jobs, jobCount, sizeof(Job), compareJob);
    int maxDeadline = getMaxDeadline(jobs, jobCount);
    Job** slots = calloc(maxDeadline, sizeof(Job*));
    for (int i = 0; i < maxDeadline; i++) *(slots+i) = NULL;

    for(int i = 0; i < jobCount; i++) {
        for (int j = maxDeadline; j > 0; j--) {
            if (slots[j-1] == NULL) {
                slots[j-1] = jobs + i;
                break;
            }
        }
    }
    sequenceReturn r = { slots, maxDeadline };
    return r;
}

int main() {
    const int jobCount = 5;
    Job jobs[5];
    for (int i = 0; i < jobCount; i++) {
        jobs[i].id = i+1;
        jobs[i].profit = randint(10, 99);
        jobs[i].deadline = randint(1, 2);
    }

    printf("[ Available Jobs ]\n");
    printJobs(jobs, jobCount);
    printf("\n\n");

    sequenceReturn seq = sequence(jobs, jobCount);

    printf("Sequenced Jobs\n");
    for (int i = 0; i < seq.sequenceSize; i++) {
        if (i) printf("\n");
        printJob(seq.sequence[i]);
    }

    printf("\n");
}
```
# Kruskal's Algo to find MST
- Time Complexity : O(E logV)

```c
// Kruskal's Algorithm for minimum spanning tree

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Edge {
    int from;
    int to;
    int weight;
} Edge;

// Returns an array of edges representing the edgelist of the minimum spanning tree
Edge* kruskalMinimumSpanningTree(Edge[], int, int);
// Sorts an Edgelist based on edge weight
// void sort(Edge[], int);
int compare(const Edge*, const Edge*);
// Prints an graph, takes edgelist as argument
void printGraph(Edge[], int);

// Completed
int main() {
    // Number of edges in the graph
    const int EDGE_COUNT = 9;
    // Number of nodes in the graph
    const int NODE_COUNT = 6;
    // The Graph is an array of edges with weights
    Edge Graph[] = {
        { 1, 2, 6 },
        { 1, 3, 7 },
        { 1, 4, 8 },
        { 2, 3, 4 },
        { 3, 4, 5 },
        { 4, 5, 6 },
        { 3, 5, 5 },
        { 5, 6, 8 },
        { 4, 6, 5 },
    };

    printf("Available Graph : ");
    printGraph(Graph, EDGE_COUNT);

    printf("Minimum Spanning Tree : ");
    printGraph(kruskalMinimumSpanningTree(Graph, EDGE_COUNT, NODE_COUNT), NODE_COUNT-1);

    return 0;
}

int compare(const Edge* edge1, const Edge* edge2) { return edge1->weight > edge2->weight ? 1 : edge1->weight < edge2->weight ? -1 : 0; }

Edge* kruskalMinimumSpanningTree(Edge edgeList[], int edgeCount, int nodes) {
    // sort(edgeList, edgeCount);
    qsort(edgeList, edgeCount, sizeof(Edge), compare);

    Edge* MSTEdgeList = calloc(nodes, sizeof(Edge));
    int MSTEdgeListCounter = 0;

    bool* node_checker = calloc(nodes - 1, sizeof(bool));

    for (int i = 0; i < edgeCount; i++) {
        if (node_checker[edgeList[i].to]) continue;
        MSTEdgeList[MSTEdgeListCounter] = edgeList[i];
        node_checker[edgeList[i].to] = true;
        MSTEdgeListCounter++;
    }

    return MSTEdgeList;
}

void printGraph(Edge edgelist[], int edgeCount) {
    for (int i = 0; i < edgeCount; i++) {
        printf("\n%d -> %d : %d", edgelist[i].from, edgelist[i].to, edgelist[i].weight);
    }
    printf("\n");
}
```

# FAQ's
- Graph : It is a non-linear data structure consisting of nodes/vertices connected with edges
- Types of Graph : 1. Directed
							        1. Cyclic
							        2. Acyclic
							  2. Undirected
- Indegree :  The number of edges which are coming into the vertex V.
- Outdegree : The number of edges which are going out from the vertex V.
- BFS : Breadth First Search
- DFS : Depth First Search
- Time Complexity of BFS : O(V+E)
		- V is the vertex/node
		- E is the Edge
- Time Complexity of DFS : O(b^d)
		- b is the branching factor
		- d is the deph factor
- Time Complexity Of Matrix Chain Multiplication : O(n^3)
- Time Complexity Of Job Sequencing : O(n^2)
- Time Complexity Of Strassens Matrix Multiplication : O(nlog7)
- Time Complexity Of Travelling Salesman Problem : O(n^2 2^n) 
- Time Complexity Of Djikstras Algorithm : O(V^2)
- Weighted graph: A graph in which each branch is given a numerical weight.
- Unweighted graph: A graph whose edges are not given any weight.
- Adjacency Matrix : It is a way of representing a graph as a 2D matrix of booleans (0's and 1's).
- Adjacency List : An adjacency list represents a graph as an array of linked lists. The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.
- Greedy Method : A greedy algorithm is an approach for solving a problem by selecting the best option available at the moment.
- Dynamic Programming : Dynamic Programming is a technique in computer programming that helps to efficiently solve a class of problems that have overlapping subproblems and optimal substructure property.
- Example of Greedy Algorithm : Fractional Knapsack
- Example of Dynamic Programing : 0/1 Knapsack
- MST : A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.
- A minimum spanning tree has (V – 1) edges where V is the number of vertices in the given graph.
- Priority Queue : A priority queue is a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority. That is, higher priority elements are served first.