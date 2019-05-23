#include <stdio.h>

int n,a[10][10],visited[10];

void bfs(int index)
{
    int v,q[10],r=-1,f=0,i;
    q[++r]=index;
    visited[index]=1;
    while(f<=r)
    {
        v=q[f++];
        printf("%c -> ",'A'+v);
        for(i=0;i<n;i++)
        {
            if(a[v][i]==1 && !visited[i])
            {
                q[++r]=i;
                visited[i]=1;
            }
        }
    }
}

int main(void) 
{
	int i,j;
	printf("Enter no. of vertices: ");
	scanf("%d",&n);
	
	printf("Enter Adjacency Matrix:\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	bfs(0);
	return 0;
}

