
#include <iostream>
#include <deque>
using namespace std;
#define lli long long int
#define rep(i,start,stop,step) for(i=start;i<stop;i+=step)
#define rev(i,start,stop,step) for(i=start;i>stop;i+=step)
#define inp2d(n,m,arr) rep(i,0,n,1)rep(j,0,m,1)cin>>arr[i][j]
void printArr(lli n,lli m, lli arr[1001][1001]){
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