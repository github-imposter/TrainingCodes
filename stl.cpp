#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class graph {
	int i;
	list<int> *adj;
public:
	graph(int V)
	{
		this->i=V;
		this->adj=new list<int>[V];
	}

	void create_edge(int u,int v)
	{
		adj[u].push_back(v);
	}
	void dfs_until(int v , bool visited[])
	{
		visited[v]=true;
		list<int>::iterator it;
		for(it=adj[v].begin();it!=adj[v].end();it++)
		{
			if(!visited[*it])
			{
				dfs_until(*it ,visited );
			}
		}
	}
	int dfs()
	{
		bool *visited = new bool[i];
		for(int j=0;j<i;j++)
		{
			visited[j]=false;
		}
		int number_of_trees=0;
		for(int j=0;j<i;j++)
		{
			if(!visited[j])
			{
				dfs_until(j,visited);
				number_of_trees++;
			}
			
		}
		return number_of_trees;
	}
	   
	bool reachable_until(int v ,int d,bool visited[])
	{
		if(v==d)
			return true;
		visited[v]=true;
		list<int>::iterator it;
		for(it=adj[v].begin();it!=adj[v].end();it++)
		{
			if(!visited[v] && reachable_until(*it,d,visited))
			{
				return true;
			}
		}
		return false;
	}
};



int main()
{
	int size;
	int i, j,k;
	int answer;
	int src, node1, node2;
	graph g= graph(10);

	for (i=0; i<10; i++)
	{
		answer = 0;
		scanf("%d %d", &size, &src);
		for (j=0; j<size/2; j++){
			scanf("%d %d", &node1, &node2);
			create_edge(node1,node2);
		};
		scanf("\n");

		int maxm=BFS(ad,101,10,src);
		printf("#%d %d\n",i+1, maxm);		
	}	
	return 0;
}







