#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end()
#define pr(_) cout << fixed << setprecision(_)
typedef long long ll;
typedef long double ld;

int eval(){
	int val,x,y;
	char c;
	if(scanf("%d",&val) == 1) return val;
	scanf("%c",&c);
	if(c == 'f'){
		x = eval();
		return 2*x-1;
	}
	else if(c == 'g'){
		x = eval();
		y = eval();
		return x+2*y-3;
	}
	return 0;
}

int main(void) {
	//penguin
	printf("%d\n",eval());
	return 0;
}