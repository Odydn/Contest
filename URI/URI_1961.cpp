#include <bits/stdc++.h>
#define lli long long int
#define for(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define form(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define fort(x,y) for(int i=x; i<y; i++)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl
///*Containers
#define pq priority_queue
#define pb push_back
#define pf pop_front
///*Arrumar
#define sort(I) sort(I.begin(), I.end())
///*Buscar
#define mine(I) min_element(I.begin(), I.end())
#define maxe(I) max_element(I.begin(), I.end())
#define fe(begin, end, funcao) for_each(begin, end, funcao)
#define fes(I, f) for_each(I.begin(), I.end(), f)
#define fd(I, T) find(I.begin(), I.end(), T)
#define bs(I, T) binary_search(I.begin(), I.end(), T) ///*faz uma buscar binaria e retorna se o elemento est� ou n�o
#define er(I, T) equal_range(I.begin(), I.end(), T) ///*um par de iterators um para o inicio do range que � igual ao valor e outro para o fim
#define lb(I, T) lower_bound(I.begin(), I.end(), T) ///*primeiro elemento que n�o � menor que o valor T se todos forem menores retorna o ultimo
#define ub(I, T) upper_bound(I.begin(), I.end(), T) ///*primeiro elemento maior que o valor T se todos forem menores retorna o ultimo
#define ads(I) adjacent_difference(I.begin(), I.end(), I.begin())
#define ad(begin, end, I) adjacent_difference(begin, end, I)
#define accs(I, T) accumulate(I.begin(), I.end(), T)
#define acc(begin, end, T) accumulate(begin, end, T)
#define cifs(I, f) count_if(I.begin(), I.end(), f)
#define cif(begin, end, f) count_if(begin, end, f)
using namespace std;
int j;
bool f2(int v){return v+j>j||v+j<-j;}
void f(int& v){v-=j;}
int main() {
    int n;
    vector<int> v;
    cin >>j>>n;
    v.resize(n);
    for(n) cin>>v[i];
    ads(v);
    fes(v, f);
    if(cif(v.begin()+1, v.end(), f2)>0) c("GAME OVER");
    else c("YOU WIN");
	return 0;
}
