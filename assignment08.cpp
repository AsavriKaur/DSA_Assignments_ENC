//***********************lab assignment 8
//#include<iostream>
//using namespace std;
//
//struct node{
//	struct node*left;
//	int data;
//	struct node*right;
//};
//
//int main(){
//	struct node*root=NULL, *temp;
//	
//	temp=(struct node*)malloc(sizeof(struct node));
//	temp->left=temp->right=NULL;
//	cout<<"enter data";
//	cin>>temp->data;
//	if(root=NULL){
//		root=temp;
//	}
//	cout<<root->data;
//}

//bst 
//#include<iostream>
//using namespace std; 
//struct Node{
//	node*lchild; 
//	int data; 
//	node*rchild;
//}*root=NULL;
//
//void insert(int key){
//	node*t=root;
//	node*r; 
//	node*p;
//	if(root==NULL){
//		p=new Node;
//		p->data=key;
//		p->lchild=p->rchild=NULL;
//		root=p;
//		return;
//		//allowed even if return type of function is void
//	}
//	while(t!=NULL){
//		r=t;
//		if(key==t->data){
//			return;
//		}
//		else if(key<t->data){
//			t=t->lchild;
//		}
//		else 
//		t=t->rchild;
//	}
//	p=new Node;
//	p->data=key;
//	p->lchild=p->rchild=NULL;
//	if(key > r->data)
//	r->rchild=p;
//	else
//	r->lchild=p;
//}
//
//void Inorder(struct node*p){
//	if(p){
//		Inorder(p->lchild);
//		cout<<p->data<<" ";
//		Inorder(p->rchild);
//	}
//}
//
//struct node* search(int key){
//	struct node*t=root;
//	while(t!=NULL){
//		if(t->data==key){
//			return t;
//		}
//		else if(t->data>key){
//			t=t->lchild;
//		}
//		else
//		t=t->rchild;
//	}
//	return NULL;
//}
//
//struct node*Rsearch(struct node*p, int key){
//	if(p==NULL){
//		return NULL;
//	}
//	if(p->data==key){
//		return p;
//	}
//	if(key>p->data){
//		return Rsearch(p->rchild, key);
//	}
//	else if(key<p->data){
//		return Rsearch(p->lchild,key);
//	}
//}
//
//int main(){
//	struct node*temp1, *temp2;
//	
//	int a[]={10,30,5,20,2};
//	for(int i=0; i<(sizeof(a)/sizeof(int)); i++){
//		insert(a[i]);
//	}
//	
//	Inorder(root);
//	cout<<endl;
//	
//	temp2=Rsearch(root,20);
//	if(temp2!=NULL){
//		cout<<"value is found: "<<temp2->data;
//	}
//	else
//	cout<<"element is not found"<<endl;
//	
//	cout<<endl;
//	
//	temp1=search(25);
//	if(temp1!=NULL){
//		cout<<"value is found: "<<temp1->data;
//	}
//	else
//	cout<<"element is not found"<<endl;
//}


//#include <iostream>
//using namespace std;
//
//struct node{
//    int data;
//    struct node* next;
//}*front= NULL,* rear= NULL;
//
//void enqueue(int x) {
//    node* t = new node;
//    if(t==NULL) {
//        cout << "overflow ";
//    }
//    else {
//        t->data = x;
//        t->next = NULL;
//        if(front==NULL) {
//            front=rear=t;
//        }
//        else {
//            rear->next = t;
//            rear = t;
//        }
//    }
//}
//
//int dequeue() {
//    int x = -1;
//    node * p;
//    if (front==NULL) {
//        cout << "empty!";
//    }
//    else {
//        p=front;
//        front=front->next;
//        x=p->data;
//        delete p;
//    }
//    return x;
//}
//
//int isEmpty() {
//    if (front == NULL) {
//        return 1;
//    }
//    return 0;
//}
//
//void DFS(int G[][7], int start, int n, int visited[]) {
//    cout << start << " ";
//    visited[start] = 1;
//    for (int j = 1; j < n; j++) {
//        if (G[start][j] == 1 && visited[j] == 0) {
//            DFS(G, j, n, visited);
//        }
//    }
//}
//
//int count(int G[][7], int n) {
//    int count = 0;
//    int visited[7] = { 0 };
//
//    for (int i = 1; i < n; i++) {
//        if (visited[i] == 0) {
//            DFS(G, i, n, visited);
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int G[7][7] = {
//        {0,0,0,0,0,0,0},
//        {0,0,1,1,0,0,0},
//        {0,1,0,0,1,0,0},
//        {0,1,0,0,1,0,0},
//        {0,0,1,1,0,1,1},
//        {0,0,0,0,1,0,0},
//        {0,0,0,0,1,0,0}
//    };
//
//    int a = count(G, 7);
//    cout <<a << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#define V 7
//#define INF 99999
//
//using namespace std;
//
//int minDistance(int dist[], bool sptSet[]) {
//    int min = INF, min_index;
//
//    for (int v = 0; v < V-1; v++)
//        if (sptSet[v] == false && dist[v] <= min)
//            min = dist[v], min_index = v;
//
//    return min_index;
//}
//
//void printSolution(int dist[]) {
//    cout << "Vertex \t\t Distance from Source\n";
//    for (int i = 0; i < V; i++)
//        cout << i << " \t\t " << dist[i] << endl;
//}

//void dijkstra(int graph[V][V], int src) {
//    int dist[V];
//    bool sptSet[V];
//
//    for (int i = 0; i < V; i++)
//        dist[i] = INF, sptSet[i] = false;
//
//    dist[src] = 0;
//
//    for (int count = 0; count < V - 1; count++) {
//        int u = minDistance(dist, sptSet);
//        sptSet[u] = true;
//
//        for (int v = 0; v < V; v++)
//            if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
//                dist[v] = dist[u] + graph[u][v];
//    }
//
//    printSolution(dist);
//}


//void dijkstra(int graph[V][V], int src) {
//  int dist[V];
//  bool sptSet[V];
//
//  for (int i = 0; i < V; i++)
//    dist[i] = INF;
//  dist[src] = 0;
//
//  for (int count = 0; count < V - 1; count++) {
//    int u = minDistance(dist, sptSet);
//    sptSet[u] = true;
//
//    for (int v = 0; v < V; v++)
//      if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
//        cout << "Updating dist[" << v << "] from " << dist[v] << " to " << dist[u] + graph[u][v] << endl;
//        dist[v] = dist[u] + graph[u][v];
//      }
//  }
//
//  printSolution(dist);
//}
//
//int main() {
//    int graph[V][V] = {{0, 0, 0, 0, 0, 0, 0},
//                       {0, 0, 1, 4, 0, 0, 0},
//                       {0, 1, 0, 8, 0, 0, 0},
//                       {0, 4, 8, 0, 7, 9, 0},
//                       {0, 0, 0, 7, 0, 10, 15},
//                       {0, 0, 0, 9, 10, 0, 11},
//                       {0, 0, 0, 0, 15, 11, 0}};
//
//    dijkstra(graph, 0);
//
//    return 0;
//}

#include <iostream>
#include <queue>
#include <list>
#include <climits>

using namespace std;

// Structure to represent a node in the adjacency list
struct AdjListNode {
    int dest;
    int weight;
    AdjListNode* next;
};

// Structure to represent the graph
class Graph {
    int V;
    AdjListNode** array;

public:
    // Constructor
    Graph(int V) {
        this->V = V;
        array = new AdjListNode*[V];
        for (int i = 0; i < V; ++i)
            array[i] = NULL;
    }

    // Function to add an edge to the graph
    void addEdge(int src, int dest, int weight) {
        AdjListNode* newNode = new AdjListNode;
        newNode->dest = dest;
        newNode->weight = weight;
        newNode->next = NULL;

        // Add the new node to the adjacency list of src
        if (array[src] == NULL)
            array[src] = newNode;
        else {
            AdjListNode* temp = array[src];
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Dijkstra's algorithm
    void dijkstra(int src) {
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        int* dist = new int[V];
        for (int i = 0; i < V; ++i)
            dist[i] = INT_MAX;

        pq.push(make_pair(0, src));
        dist[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            AdjListNode* temp = array[u];
            while (temp != NULL) {
                int v = temp->dest;
                int weight = temp->weight;

                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
                temp = temp->next;
            }
        }

        cout << "Vertex   Distance from Source\n";
        for (int i = 0; i < V; ++i)
            cout << i << "\t\t" << dist[i] << endl;

        delete[] dist;
    }
};

int main() {
    int V = 7;
    Graph graph(V);
    graph.addEdge(0, 1, 1);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 8);
    graph.addEdge(1, 3, 4);
    graph.addEdge(2, 4, 2);
    graph.addEdge(3, 4, 7);
    graph.addEdge(3, 5, 9);
    graph.addEdge(4, 5, 10);
    graph.addEdge(4, 6, 15);
    graph.addEdge(5, 6, 11);

    graph.dijkstra(0);

    return 0;
}





