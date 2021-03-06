#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <stack>
#define MAX 8

using namespace std;

double dZero = 0.0;
double INF = 1 / dZero;


int n;
double dist[MAX][MAX];

double shortestPath(vector<int> path, vector<bool> visited, double currentLength) {
	if (path.size() == n)
		return currentLength + dist[path[0]][path.back()];
	double ret = INF;
	for (int next = 0; next < n; ++next) {
		if (visited[next]) continue;
		int here = path.back();
		path.push_back(next);
		visited[next] = true;
		double cand = shortestPath(path, visited, currentLength + dist[here][next]);

		ret = min(ret, cand);
		visited[next] = false;
		path.pop_back();
	}
	return ret;
}