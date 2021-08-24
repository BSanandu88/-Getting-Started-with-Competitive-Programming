/* Swayam is a farmer and a pet lover. He has a lot of his favorite pets cats and dogs in the barn. He knows that there are C cats and D dogs in the barn. Also, one day went to field and found that there were L legs of the animals touching the ground. Swayam knows that cats love to ride on the dogs. So, they might ride on the dogs, and their legs won't touch the ground and Swayam would miss counting their legs. Swayam's dogs are strong enough to ride at max two cats on their back.


It was a cold foggy morning, when Swayam did this counting. So he is now wondering whether he counted the legs properly or not. Specifically, he is wondering whether it is possible that he counted correctly. Please help Swayam in finding it.

Input
First line of the input contains an integer T, denoting number of test cases.T test cases follow.
The only line of each test case contains three space separated integers C, D, and L, denoting number of the cats, number of the dogs and number of legs of animals counted by Swayam, respectively.
Output
For each test case, output a single line containing a string yes or no, according to the situation.

Constraints
1 ≤ T ≤ 105
0 ≤ C, D, L ≤ 109
Example Input:
3
1 1 8
1 1 4
1 1 2
Example Output:
yes
yes
no
Explanation
Testcase 1: There is one cat and one dog. The number of legs of these animals on the ground are 8, which can be possible when both cat and dog are standing on the ground.


Testcase 2: There is one cat and one dog. The number of legs of these animals on the ground are 4, which can be possible if the cat will ride on the dog, so its legs won't be counted by Swayam, only the dog's legs will be counted.


Testcase 3: There is one cat and one dog. The number of legs of these animals are 2. This can not be true at all, Swayam must have made some mistake. Hence, the answer is no. */

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll c,d,l;
        cin >> c >> d >> l;
        if(d == 0 and l == c * 4)cout<<"yes"<<endl;
        else if(c <= d * 2 and l >= d * 4 and l <= (c + d)*4 and l%4 == 0 and d != 0)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
    return 0;
}