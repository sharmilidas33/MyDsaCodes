#include<stdio.h>
#include<stdbool.h>

#define MAX_VERTICES 100
#define MAX_EDGES 100

int parent[MAX_VERTICES];

struct Edge{
	int src;
	int dest;
	int weight;
};

void makeSet(int n){
	for(int i=0;i<n;i++){
		parent[i]=i;
	}
} 

int findParent(int vertex){
	if(parent[vertex]==vertex){
		return vertex;
	}
	return findParent(parent[vertex]);
}

void unionSet(int u,int v){
	u=findParent(u);
	v=findParent(v);
	parent[u]=v;
}

void findMST(struct Edge edges[],int ne){
 	makeSet(MAX_VERTICES);
 	struct Edge result[MAX_EDGES];
 	int resultCount= 0;
 	for(int i=0;i<ne;i++){
 		struct Edge currentEdge = edges[i];
 		int srcParent= findParent(currentEdge.src);
		int destParent= findParent(currentEdge.dest);
		
		if(srcParent!=destParent){
			result[resultCount++]=currentEdge;
			unionSet(srcParent,destParent);
		}	
	}
	printf("Edges \t Weight \n");
	for(int i=0;i<resultCount;i++){
		printf("%d - %d \t %d \n",result[i].src,result[i].dest,result[i].weight);
	}
 	
}


int main(){
	struct Edge edges[]={
		{0, 1, 10},
        {0, 2, 6},
        {0, 3, 8},
        {1, 3, 16},
        {2, 3, 4},
	};
	int ne= sizeof(edges)/sizeof(edges[0]);
	findMST(edges,ne);
	return 0;
}