function createGraph(V, E) {
    // V - Number of vertices ==> No of nodes in the graph
    // E - The set of edges in the graph

    let adjacency_list = []; // Storing all the informations


    // You have an adjacency list where in each vertex you have an empty list so that we can fill the edges inside
    for (let i = 0; i < V; i++) {  // Initaially on each vertex we need an empty list
        adjacency_list.push([]);
    }

    //E(1,2,1) index 0 and 1 are the end points and 2 is the weight
    for (let i = 0; i < E.length; i++) {
        adjacency_list[E[i][0] - 1].push([E[i][1] - 1, E[i][2]]); // adj[u].push_back({v,w};
        adjacency_list[E[i][1] - 1].push([E[i][0] - 1, E[i][2]]); // adj[v].push_back({u,w};
    }

    return adjacency_list;

}

const V = 5;
const Edges = [[1, 2, 3], [1, 4, 2], [3, 5, 1], [3, 4, 3]];

let graph = createGraph(V, Edges);
console.log(graph);