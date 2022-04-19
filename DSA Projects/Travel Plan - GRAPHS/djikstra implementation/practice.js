function createGraph(V, E) {
    // V - Number of vertices in graph
    // E - Number of edges in graph (u,v,w)
    let adj_list = []; // Adjacency List
    for (let i = 0; i < V; i++) {
        adj_list.push([]);
    }
    for (let i = 0; i < E.length; i++) {
        adj_list[E[i][0]].push([E[i][1], E[i][2]]);
        adj_list[E[i][1]].push([E[i][0], E[i][2]]);
    }
    return adj_list;
}

function djikstra(graph, V, src) {
    let vis = Array(V).fill(0);
    let dist = [];
    for (let i = 0; i < V; i++) {
        dist.push([1000, -1]); //Variable -1 (Second variable) is stating that it will be used to refer to the parent node or the node form which you got the minimum distance to the current node
    }

    dist[src][0] = 0;  // [Distance][Parent Node]==> dist[src][0] --> distance \\ dist[src][1] --> parent node
    for (let i = 0; i < V - 1; i++) {
        let mn = -1; // Index of the node with minimum distance 
        for (let j = 0; j < V; j++) { // This loop helps to find the node with the minimum distance
            if (vis[j] === 0) {
                if (mn === -1 || dist[j][0] < dist[mn][0]) {
                    mn = j;
                }
            }
        }
        vis[mn] = 1;  // Marked the minmimum node as visited 
        for (let j = 0; j < graph[mn].length; j++) {  // graph(V,E) --> graph[mn].lenght==> length of the neighbours of mn ==> adjacent node from the adjacency list of the index mn(minimum distance node) 
            let edge = graph[mn][j]; // graph[mn][0]-->graph[mn][1]--> graph[mn][graph[mn].length] -->[0, 1, 4]-->[0, 1, 5]--> ...
            if (vis[edge[0]] === 0 && dist[edge[0]][0] > dist[mn][0] + edge[1]) {  // [0, 1, 4] --> [u,v,w]-->edge[0]==>u
                dist[edge[0]][0] = dist[mn][0] + edge[1];//edge[node,weight];==> edge[1]== weight of the minimum diatance node.
                dist[edge[0]][1] = mn; // storing the parent node also
            }
        }
    }
    return dist;

}

let src = 0;
let V = 9;
let E = [[0, 1, 4], [0, 7, 8], [1, 7, 11], [1, 2, 8], [7, 8, 7], [6, 7, 1], [2, 8, 2], [6, 8, 6], [5, 6, 2], [2, 5, 4], [2, 3, 7], [3, 5, 14], [3, 4, 9], [4, 5, 10]];

let graph = createGraph(V, E);
let distances = djikstra(graph, V, 0);
console.log(distances);