#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int graph[size][size] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    bool visited[size] = {false};
    int stack[size];
    int top = -1;
    int start = 2;
    stack[++top] = start;
    visited[start] = true;

    cout << "DFS: ";

    while (top != -1) {
        int current = stack[top--];
        cout << current << " ";

        for (int i = size - 1; i >= 0; --i) {
            if (graph[current][i] && !visited[i]) {
                stack[++top] = i;
                visited[i] = true;
            }
        }
    }
    cout << endl;

    return 0;
}
