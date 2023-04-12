/* You're given a K-array infinite tree rooted at a vertex numbered 1. All its edges are weighted 1 initially. */

#include <iostream>
#include <map>
#include <assert.h>
using namespace std;
#define int long long
map < pair < int, int >, int > adj;
int find_depth( int u, int k ) {
int depth = 0;
while ( u > 0 ) {
u = u / k;
depth = depth + 1;
}
return depth - 1;
}
int dist( int u, int v, int k ) {
int dist = 0;
int depth_u = find_depth( u, k );
int depth_v = find_depth( v, k );
if ( depth_u < depth_v ) {
swap ( u, v );
swap ( depth_u, depth_v );
}
while( depth_u != depth_v ) {
if ( adj.count( { u, u / k } ) ) {
dist = dist + adj[ { u, u / k } ];
} else {
dist = dist + 1;
}
depth_u = depth_u - 1;
u = u / k;
}
while ( u != v ) {
if ( adj.count( { u, u / k } ) ) {
dist = dist + adj [ { u, u / k } ];
} else {
dist = dist + 1;
}
if ( adj.count( { v, v / k } ) ) {
dist = dist + adj [ { v, v / k } ];
} else {
dist = dist + 1;
}
u = u / k;
v = v / k;
}
return dist;
}
void add_weight( int vertex, int parent, int w ) {
if ( !adj.count ( { vertex, parent } ) ) {
adj[ { vertex, parent } ] = 1;
}
adj[ { vertex, parent } ] = adj[ { vertex, parent } ] + w;
}
void increase_weights ( int u, int v, int w, int k ) {
int depth_u = find_depth( u, k );
int depth_v = find_depth( v, k );
if ( depth_u < depth_v ) {
swap ( u, v );
swap ( depth_u, depth_v );
}
while( depth_u != depth_v ) {
add_weight( u, u / k, w );
depth_u = depth_u - 1;
u = u / k;
}
while ( u != v ) {
add_weight( u, u / k, w );
add_weight( v, v / k, w );
u = u / k;
v = v / k;
}
}
signed main() {
int k, q, x, u, v, w;
cin >> k >> q;
while(q--) {
cin >> x;
if ( x == 1 ) {
cin >> u >> v;
cout << dist( u, v, k ) << "\n";
} else {
cin >> u >> v >> w;
increase_weights( u, v, w, k );
}
}
}
