graph = {
    'A': ['B', 'C', 'D'],
    'B': ['I', 'G'],
    'C': ['E', 'F'],
    'D': ['C', 'F'],
    'E': ['G', 'K'],
    'F': ['K'],
    'G': [],
    'K': [],
    'I': ['G']

}
visited = []
queue = []
def BFS(visited, graph, node):
    visited.append(node)
    queue.append(node)
    while queue:
        u = queue.pop(0)
        print(u, end=" ")
        for val in graph[u]:
            if val not in visited:
                visited.append(val)
                queue.append(val)
print("Thu tu duyet la:")
BFS(visited, graph, 'A')