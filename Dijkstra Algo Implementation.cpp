#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

#define V 9
int src=0;
int minDist(int dist[], bool setSPT[]){
	int min= INT_MAX, minIndex;
	for(int v=0; v<V; v++){
		if(setSPT[v]==false && dist[v]<min){
			min= dist[v];
			minIndex=v;
		}
	}
	return minIndex;
}

void printSoln(int dist[]){
	printf("Source \t Vertex \t Distance \n");
	for(int i=0; i<V; i++){
		printf("%d \t %d \t \t %d \n",src,i,dist[i]);
	}
}

void dijkstra(int graph[V][V]){
	int dist[V];
	bool setSPT[V];
	for(int i=0; i<V; i++){
		dist[i]= INT_MAX;
		setSPT[i]= false;
	}
	dist[src]=0;
	for(int count=0; count<V-1; count++){
		int u= minDist(dist,setSPT);
		setSPT[u]=true;
		for(int v=0; v<V; v++){
			if(graph[u][v] && setSPT[v]==false && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v]){
				dist[v]= dist[u]+ graph[u][v];
			}
		}
	}
	printSoln(dist);
}

int main(){
	int graph[V][V]={
		{ 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
    	{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 },
	};
	dijkstra(graph);
	return 0;
}