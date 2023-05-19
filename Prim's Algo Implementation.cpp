#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

#define V 6
int minVertex(int value[],bool setMST[]){
	int min= INT_MAX, min_index;
	for(int v=0;v<V;v++){
		if(setMST[v]==false && value[v]<min){
			min=value[v];
			min_index=v;
		}
	}
	return min_index;
}
int printMST(int parent[], int graph[V][V]){
	printf("Edge \t Weight \n");
	for(int i=1;i<V;i++){
		printf("%d - %d \t %d \n",parent[i],i,graph[i] [parent[i]]);
	}
}
void findMST(int graph[V][V]){
	int parent[V]; //Stores MST
	int value[V];  //For edge relaxation
	bool setMST[V];	//Represent set of vertices
	for(int i=0;i<V;i++){
		value[i]= INT_MAX;
		setMST[i]= false;
	}
	parent[0]=-1; //because start node as no parent
	value[0]=0;	  //because value 0 will get picked 1st
	//form MST with (V-1) edges
	for(int count=0;count<V-1;count++){
		int u= minVertex(value,setMST); //u is the startng node.
		setMST[u]=true;
		for(int v=0;v<V;v++){
			if(graph[u][v] && setMST[v]==false && graph[u][v]<value[v]){
				value[v]=graph[u][v];
				parent[v]=u;
			}
		}
	}
	//Print MST
	printMST(parent,graph);
}
int main(){
	int graph[V][V]={
	{0,4,6,0,0,0},
	{4,0,6,3,4,0},
	{6,6,0,1,8,0},
	{0,3,1,0,2,3},
	{0,4,8,2,0,7},
	{0,0,0,3,7,0},
	};
	findMST(graph);
	return 0;
}