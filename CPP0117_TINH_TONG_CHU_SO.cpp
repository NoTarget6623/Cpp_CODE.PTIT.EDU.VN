#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
#include <fstream>
#include <map>
#include <stack>
#include <queue>

#define faster ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define Nmax 1000007
#define R second
#define L first
#define mp make_pair
#define pb push_back
#define foru(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, a, b) for (int i = a; i >= b; i--)
#define all(a) a.begin() + 1, a.end()
#define Y_N(x) if (x == 0) cout << "NO\n";else cout << "YES\n";
#define el cout << "\n"

using namespace std;

int SumNum(int n){
    int S = 0;
    while(n > 0){
        S += n % 10;
        n /= 10;
    }
    return S;
}

int main(){
	faster;
    int t = 1;
    cin >> t; cin.ignore();
    while(t--){
        int n;
        cin >> n;
        while(n >= 10){
            n = SumNum(n);
        }
        cout << n << "\n";
    }
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P5G#&@@@@@@&BP5B@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@JP@@@@@@@@@@@@@&Y5@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@5Y@@@@@@@@@@@@@@@@?B@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@JG@@@@@@@@@@@@@@@@YP@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@55@@@@@@@@@@@@@@@@?#@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@B&@@@@@&@@@@@@@@@@@@@@@@@@&?#@@@@@@@@@@@@@@5Y@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@B&@@@@B&@@@@@@@@@@@@@@@@@@@B?#@@@@@@@@@@@@5Y@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@##@@@B&@@@##@@@@&#&@@@@@@@@@@@@@@&YP&@@@@@@@@BYP@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&##&@@@#&@@#&@@##@@@&##&@@@@@@@@@@@@@@&BGY?YB&@&BPJ?5G#@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@##&@@@@@@@@@&@@&##@@@@&&@@@@@@@@@@@5JPP57~G@B!?5PGJ5@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&##&&@@@@@@@@@@@@@@@@@@@&&##&&@@@@@@@@@@@@#BB#5?PPGYJ&&##@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&#&@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@&&P7#&&@@@@@@@@@@@@
// @@@@@@@@@@@@@@&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&PJB@&#&&&&&&&@@@
// @GYJJJJJJJJJJJJJJJJJJJJJJJYP&@@@@@@@&BBGG&#GGGGB&&BBGGGGG#&GBB#&@@@@@@@B?!!!!!!!!!!!!~!5PJ!~!!!!!?G@
// 5777777777777777777777777777Y@@@@@@#GGGGGB&BGGGB#&&#BGGGB@BGGGGB@@@@@@B~~~~~~~~~~~~~~~~~!5G7^~~~~~~G
// J7???????77777?????????????7?&@@@@@BGGGGGGB&#GGGB#&#GGG#&BGGGGGG&@@@@@G~~~~~~~~~~~~~~~~~~~7#Y~~~~~~P
// Y7?????7?JYYY?77777777??7777?&@@@@@#GGGGGGGGB##BGB&GB&##GGGGGGGG&@@@@@G~~~~~~~~~~~~~~~~~~~^7&7~~~~~P
// Y7?????PBP5Y5GG5PGPYPPPPP5YJ?&@@@@@#GGGGGGGGGG#&G##G##GGGGGGGGGG&@@@@@G~~~~~~~~~~~~~~~~~~~~!&J~~~~~P
// Y7???7J&J7777?5Y?JGPJ????JYPPG&@@@@#GGGGGGGGGGB&B#&B&BGGGGGGGGGG&@@@@@G~~~~~~~~~~~~~~~~~~~~P#!~~~~~P
// Y7???5GBJ7????7777777????777?B5P&@@#GGGGGGGGGGG######GGGGGGGGGGG&@@@@@G~~~~~~~~~~~~~~~~~~7GB!~~~~~~P
// Y7?7B#?77??????????????????7?&@JG@@#GGGGGGGGGGG######GGGGGGGGGGG&@@@@@G~~~~~~~~~~~~~~~~?PBJ~~~~~~~~P
// J7?7YGP5J7?????????????????7?&GP&@@BGGGGGGGGGGGBB##BBGGGGGGGGGGG&@@@@@G^~~~~~~~~~~~~?5GP?~~~~~~~~~~P
// 577777P&J7777777777777777777J@5G@@@#GGGGGGGGGGGGGGGGGGGGGGGGGGGB@@@@@@#!^~~~~~~~7J5P5?!^^~~~~~~~~^!B
// @GYJJ?B5?JJJJJJJJJJJJJJJJJYP&@JB@@@@&BBBBBBBBBBBBGGBBBBBBBBBBB#&@@@@@@@#Y?77J5GBG5J7777777777777?Y#@
// @@@@&@&PPPG&&&&#GPGB#&&&@@@&BYG@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@@@@@@@@@@@@
// @@@@@@@@@&BGGGG55GGBGGGGGGGGB&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@#BBBB5##Y#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@&B#@GPP#5GBY##BB#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@G55&#GG&@##&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    