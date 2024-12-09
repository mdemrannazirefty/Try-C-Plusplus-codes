#include <iostream>
#include <queue>
using namespace std;

int main() {
    int size = 13;
    int adjList[size][size] = {
        {2},{12,3},{3,4},{12,9},{3,7},{7,6,11,0},{6,5},{9,1,8},{1,10},{8,10},{0,8},{0,7},{0,11}
    };
    int startNode = 2;

    bool visited[size] = {false};
    queue<int> q;

    q.push(startNode);
    visited[startNode] = true;

    cout << "BFS traversal starting from node " << startNode << ": ";

    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (int i = 0; i < size; ++i) {
            int index = current * size + i;
            if (adjList[current][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return 0;
}
