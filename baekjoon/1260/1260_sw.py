def dfs(node_map, start_node, res):
    if start_node not in res:
        res.append(start_node)

    for dist_node in range(len(node_map)):
        if node_map[start_node][dist_node] == 1 and dist_node not in res :
            dfs(node_map, dist_node, res)
        

def bfs(node_map, start_node, res):
    if start_node not in res:
        res.append(start_node)

    for s in res:
        start_node = int(s);
        for dist_node in range(len(node_map)):
            if node_map[start_node][dist_node] == 1 and dist_node not in res :
                res.append(dist_node)

if __name__ == "__main__":

    dot_num, node_con, start_node = map(int,input().split())

    res = []

    node_map = [[0] * (dot_num + 1) for _ in range(dot_num + 1)] 

    for n in range(0, node_con):
        start, end = map(int, input().split())
        node_map[start][end] = 1;
        node_map[end][start] = 1;

    dfs(node_map, start_node, res)
    print(*res)
    res.clear()
    bfs(node_map, start_node, res)
    print(*res)