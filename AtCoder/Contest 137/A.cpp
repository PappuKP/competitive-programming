/****************************************************
*   Template for coding contests                    *
*   Author    :    Sanjeev Sharma                   *
*   Email     :    thedevelopersanjeev@gmail.com    *
*****************************************************/
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >>a >>b;
    cout <<max(max(a+b, a-b), a*b);
    return 0;
}
