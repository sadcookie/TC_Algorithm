// DFS test by min

/*시작 노드를 v[]배열에 입력한다.
시작 노드의 인접한 노드를 순차적으로 방문한다.
이미 방문한 노드를 제외하고 더이상 방문할 노드가 없으면 시작 노드로 되돌아 온다.
2~3번을 반복한다.
*/

/*
 n, m, start, x, y;
 
Test Input Data 

10 9 0 
0 1 
0 2 
0 3 
3 4 
3 6 
4 8 
6 7 
7 9 
5 9 

*/

#include <stdio.h>

#define MAX_MATRIX	128

int matrix[MAX_MATRIX][MAX_MATRIX] = {0};
int visited[MAX_MATRIX] = {0};
int queue[MAX_MATRIX] = {0};

int DFS(int n, int start)
{
	visited[start] = 1; //node number
	
	int i;
	
#if 0		
	for(i = 0; i < n;i++ )
	{
		printf(" visited[%d] = %d \n", i,visited[i]);	//visited = each real node
	}
#endif

	printf(" 방문 완료한 node = %d \n", start);
	
	for(i = 0; i < n;i++ )
	{
		if(matrix[start][i] == 1 && visited[i] ==0)
		DFS(n,i);
	}
			
}

int BFS(int n, int start)
{
	int front = 0;
	int rear = 0;
	
	queue[0] = start;
	rear++;
	
	printf(" 방문 완료한 node = %d \n", start);
	
	visited[start] = 1;
	
	int pop;
	int i;
	
	while(front < rear)
	{
		pop = queue[front];
		front++;	//Queue.pop front++
		
		//for debug
		printf(" pop = %d front = %d rear = %d \n",pop,front,rear);
				
		for(i=0 ; i<n; i++)
		{
			if(matrix[pop][i] == 1 && visited[i] ==0)
			{
				printf(" pop value= %d \n", pop);
				printf(" 방문 완료한 band node = %d \n", i);				
				queue[rear]=i;
				rear++;	//Queue.push 인접한 node 정보를 queue 에 저장한다. 
				
				visited[i] = 1;
			}
		}
#if 0	
		for(i=0 ; i<n; i++)
		{
			printf(" visited[%d] = %d \n",i, visited[i]);
			
		}
#endif
	}

	 	
}

int main()
{
	int n,m,start,x,y;
	
	int i;
	int j;
	
	scanf("%d %d %d",&n, &m, &start);
	printf("%d %d %d \n", n,m,start);
		
	for(i = 0; i < m; i++)
	{
		scanf("%d %d",&x, &y);
		matrix[x][y] = matrix[y][x] = 1;
	}
		
#if 0
	//print test
	for(j = 0; j <= m; j++)
	{
		//printf(" j value =  %d \n",j);
		for(i = 0; i <= m; i++ ){			
			if(matrix[j][i] == 1 || matrix[i][j] == 1){
				printf("matrix[%d][%d] \n",j,i);
			}			
		}		
	}	
#endif
	
	//DFS(n, start);
	
	BFS(n, start);
	
	return 0;
}
