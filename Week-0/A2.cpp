/* Next week is Swayam's birthday party and he plans to have a chocolate cake for his friends.The cake has been cut into N slices


In total Swayam has X friends and can choose to invite any number of them. Since he doesn't want to feel lonely he will invite at least one of them. Everyone likes cake and since Swayam doesn't want any fights between his friends, he will give them the same amount of cake. And he will given each of them the maximum number of slices possible, under the condition that each of the invited friends gets the same number of slices. It can happen that no friend gets even a single piece of cake.


The remaining cake (if any) is left for Swayam to enjoy. Given N and X, find the maximum amount of cake Swayam can get by inviting a positive number of friends not greater than X.

Input:
First line will contain T, the number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers N, and X.
Output:
For each testcase, output in a single line answer to the problem.
Constraints:
1 ≤ T ≤ 50
1 ≤ N, X ≤ 105
Sample Input:
4
10 2
10 3
3 4
5 5
Sample Output:
0
1
3
2
Explanation:
Testcase 1: There's no way to invite any number of friends which will result in Swayam having a positive amount of cake left for himself. This is because inviting 1 or 2 friends will result in distributing the entire cake to his friends.


Testcase 2: Suppose Swayam invites 3 friends. Each friend will get floor(10/3) = 3 slices of cake and 1 slice of cake will be left for Swayam.


Testcase 3: Suppose Swayam invites 4 friends. Each friend will get floor(3/4) = 0 slices of cake and the entire cake will be left for Swayam.


Testcase 4: Suppose Swayam invites 3 friends. Each friend will get floor(5/3) = 1 slice of cake and 2 slices of cake will be left for Swayam.


For all the cases, Swayam can't have more cake left for himself. This is the best that he can do. */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int dividedCake = floor(n / x);
        int remCake = n - (x * dividedCake);
        cout<<remCake<<endl;
    }
    return 0;
}