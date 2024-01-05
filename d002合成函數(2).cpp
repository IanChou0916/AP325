#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end()
#define pr(_) cout << fixed << setprecision(_)
typedef long long ll;
typedef long double ld;

int eval(){
	int val,x,y,z;
	char c;
	// return val if int;
	if(scanf("%d",&val) == 1) return val;
	// check the char.
	scanf("%c",&c);
	if(c == 'f'){
		x = eval(); // Recursion
		return 2*x-3;
	}
	else if(c == 'g'){
		x = eval();
		y = eval();
		return 2*x+y-7;
	}
	else if(c == 'h'){
		x = eval();
		y = eval();
		z = eval();
		return 3*x-2*y+z;
	}
	return 0;
}

int main(void) {
	//penguin
	printf("%d\n",eval());
	return 0;
}