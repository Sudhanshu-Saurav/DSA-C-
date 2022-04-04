
#include<bits/stdc++.h>
using namespace std;

//calculating ap
// int Ap(int a)
// {
//     int ap = (3 * a + 7);
//     return ap;
// }



//bits count
// int bitCount(int a, int b)
// {
//     int ans=0;
//     while(a!=0)
//     {
//         if(a&1)
//             ans++;
//         a=a>>1;
//     }
//     while(b!=0)
//     {
//         if(b&1)
//             ans++;
//         b=b>>1;
//     }
//     return ans;
// }
void fibonacci(int n)
{
    if (n==1)
    {
        cout << '0';
        exit(0);
    }
    int a=0,b=1,sum=0;
    for(int i=2 ; i<=n ; i++)
    {
        sum = a+b ;
        a=b;
        b=sum;
    }
    cout << sum;
}


int main()
{
    /*int n;
    cin >> n;

    int ans = Ap(n);
    cout << "The " << n << "th term of Ap (3*n+7) is : ";
    cout << ans << endl;

    int a,b;
    cin >> a >> b;
    int ans = bitCount(a,b);
    cout << ans << endl;*/

    int n;
    cin >> n;

    fibonacci(n);

}
