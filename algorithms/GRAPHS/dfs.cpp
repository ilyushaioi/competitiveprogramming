vector < vector<int> > g; // граф
int n; // число вершин

vector<int> color; // цвет вершины (0, 1, или 2)

vector<int> time_in, time_out; // "времена" захода и выхода из вершины
int dfs_timer = 0; // "таймер" для определения времён

void dfs (int v) {
	time_in[v] = dfs_timer++;
	color[v] = 1;
	for (vector<int>::iterator i=g[v].begin(); i!=g[v].end(); ++i)
		if (color[*i] == 0)
			dfs (*i);
	color[v] = 2;
	time_out[v] = dfs_timer++;
}

// or

vector < vector<int> > g; // граф
int n; // число вершин

vector<char> used;

void dfs (int v) {
	used[v] = true;
	for (vector<int>::iterator i=g[v].begin(); i!=g[v].end(); ++i)
		if (!used[*i])
			dfs (*i);
}

//https://e-maxx.ru/algo/dfs


//https://ru.algorithmica.org/cs/graph-traversals/dfs/

const int maxn = 1e5;
bool used[maxn]; // тут будем отмечать посещенные вершины

void dfs(int v) {
    used[v] = true;
    for (int u : g[v])
        if (!used[u])
            dfs(u);
}
///////////////////////////////////////////////////////
int tin[maxn], tout[maxn];
int t = 0; // таймер

void dfs(int v) {
    tin[v] = t++;
    for (int u : g[v])
        if (!used[u])
            dfs(u);
    tout[v] = t; // иногда счетчик тут тоже увеличивают
}
