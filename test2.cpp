//#include<iostream>
//#include <vector>
//using namespace std;
//
//vector<int> adj[1001];
//bool visited[1001];
//vector<int> path;
//
//void printPath() {
//    for (int i = 0; i < path.size(); i++)
//        cout << path[i] << ' ';
//    cout << endl;
//}
//
//void DFS(int s, int d) {
//    visited[s] = true;
//    path.push_back(s);
//
//    if (s == d)
//        printPath();
//    else {
//        for (int i = 0; i < adj[s].size(); i++) {
//            int b = adj[s][i];
//            if (!visited[b])
//                DFS(b, d);
//        }
//    }
//
//    visited[s] = false;
//    path.pop_back();
//}
//
//int main() {
//    int n, m, s, d;
//    cout << "nhap so nut giao thong va so doan duong: ";
//    cin >> n >> m;
//
//    cout << "nhap doan duong noi cac nut: " << endl;
//    for (int i = 0; i < m; i++) {
//        int u, v;
//        
//        cin >> u >> v;
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//    cout << "nhap start va end: ";
//    cin >> s >> d;
//
//    DFS(s, d);
//
//    return 0;
//}
