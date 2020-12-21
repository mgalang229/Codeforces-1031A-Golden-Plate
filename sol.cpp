#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int w, h, k;
	cin >> w >> h >> k;
	/* 
	 * run a loop until k is zero: (for every loop there are two blocks)
	 * whole outer blocks = original 'w' x 'h'
	 * whole inner blocks = (w - 2) x (h - 2)
	 * first, get the the product of each block
	 * next, subtract it to one another to get the no. blocks that form a ring
	 * subtract 2 from inner block or 4 from outer block to get the next outer block
	 * add the difference of the outer and inner block to get the total gilded blocks
	 * continue the process until k is zero
	 * 
	 * */
	int ans=0;
	while(k--) {
		int tmp=w*h-((w-2)*(h-2));
		w-=4;
		h-=4;
		ans+=tmp;
	}
	cout << ans << "\n";
}
