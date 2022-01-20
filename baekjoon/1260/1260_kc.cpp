// DFS test by min

/*���� ��带 v[]�迭�� �Է��Ѵ�.
���� ����� ������ ��带 ���������� �湮�Ѵ�.
�̹� �湮�� ��带 �����ϰ� ���̻� �湮�� ��尡 ������ ���� ���� �ǵ��� �´�.
2~3���� �ݺ��Ѵ�.
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

	printf(" �湮 �Ϸ��� node = %d \n", start);
	
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
	
	printf(" �湮 �Ϸ��� node = %d \n", start);
	
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
				printf(" �湮 �Ϸ��� band node = %d \n", i);				
				queue[rear]=i;
				rear++;	//Queue.push ������ node ������ queue �� �����Ѵ�. 
				
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
