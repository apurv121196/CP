
#include <iostream>
#include <deque>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
#define lli long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define MAX_SIZE 100010
#define rep(i,start,stop,step) for(i=start;i<stop;i+=step)
#define rev(i,start,stop,step) for(i=start;i>stop;i+=step)
#define inp1d(n,arr) rep(i,0,n,1)cin>>arr[i]
#define inp2d(n,m,arr) rep(i,0,n,1)rep(j,0,m,1)cin>>arr[i][j]
#define MOD 10000000
typedef pair<int, int> pii;
void print1d(lli n,lli arr[]){
	lli i;
	rep(i,0,n,1)cout<<arr[i]<<" ";
	cout<<endl;
}
void print1dld(lli n,ld arr[]){
	lli i;
	rep(i,0,n,1)cout<<arr[i]<<" ";
	cout<<endl;
}
void print2d(lli n,lli m, lli arr[][MAX_SIZE]){
	lli i,j;
	rep(i,0,n,1){
		rep(j,0,m,1)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
int main() {
	lli i,j;
	return 0;
} 