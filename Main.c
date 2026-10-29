
#include <stdio.h>

#define MAX 20

int adj[MAX][MAX], visited[MAX];
int n;

void BFS(int start, int target)
{
    int queue[MAX], front = 0, rear = 0;
    int found = 0, i, v;

    for (i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        v = queue[front++];
        printf("%d ", v);

        if (v == target)
            found = 1;

        for (i = 0; i < n; i++)
        {
            if (adj[v][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    if (found)
        printf("\nFile found using BFS.\n");
    else
        printf("\nFile not found using BFS.\n");
}

void DFS(int v, int target, int *found)
{
    int i;

    visited[v] = 1;
    printf("%d ", v);

    if (v == target)
        *found = 1;

    for (i = 0; i < n; i++)
    {
        if (adj[v][i] && !visited[i])
            DFS(i, target, found);
    }
}

int main()
{
    int i, j, start, target, found = 0;

    printf("Enter number of files/directories: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of nodes.\n");
        return 1;
    }

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter starting node (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("Enter file to search (0 to %d): ", n - 1);
    scanf("%d", &target);

    if (start < 0 || start >= n ||
        target < 0 || target >= n)
    {
        printf("Invalid node.\n");
        return 1;
    }

    BFS(start, target);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nDFS Traversal: ");
    DFS(start, target, &found);

    if (found)
        printf("\nFile found using DFS.\n");
    else
        printf("\nFile not found using DFS.\n");

    return 0;
}
