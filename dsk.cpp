#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
struct list {
	node* head;
};
struct graph {
	int v;
	list* array;
};
//khoi tao do thi
graph* InitGraph(int v) {
	graph* G = (graph*)malloc(sizeof(graph));
	G->v = v;
	G->array = (list*)malloc(v * sizeof(list));
	for (int i = 0; i < v; i++)
	{
		G->array[i].head = NULL;//gan head = null
	}
	return G;
}
node* createNode(int x) {
	node* p = (node*)malloc(sizeof(node));
	p->data = x;
	p->next = NULL;
	return p;
}
void addEdge(graph* G, int i, int j) {
	node* p = createNode(j);//Nut j gan vao vi tri i
	p->next = G->array[i].head;
	G->array[i].head = p;
	p = createNode(i);
	p->next = G->array[j].head;
	G->array[j].head = p;
}
void print(graph* G) {
	int v = G->v;
	for (int i = 0;i < v;i++) {
		cout << "\nDinh " << i << ": ";
		node* p = G->array[i].head;
		cout << "{ ";
		while (p != NULL) {
			cout << p->data << ", ";
			p = p->next;
		}
		cout << "}";
	}
}
int main() {
	graph* G;
	int v = 5;
	G = InitGraph(v);
	addEdge(G, 0, 1);
	addEdge(G, 0, 3);
	addEdge(G, 1, 2);
	addEdge(G, 1, 4);
	addEdge(G, 2, 3);
	addEdge(G, 2, 4);
	addEdge(G, 3, 4);
	print(G);
	return 0;
}