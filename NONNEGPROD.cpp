#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

//static int m,n; 

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<"\n";
#else 
#define debug(x)
#endif

template<class T> void _print(T t)
{
  cerr<<t<<" ";
}

template<class T> void _print(vector<T> v1)
{
  cerr<<"{ ";
  for(T i :v1)
    cerr<<i<<" ";
  cerr<<"}";
  
}


template<class T> void _print(set<T> s )
{ 
  cerr<<"{ ";
  for(T x : s)
    cerr<<x<<" ";
  cerr<<"}";
}

template<class T> void _print(multiset<T> s )
{ 
  cerr<<"{ ";
  for(T x : s)
    cerr<<x<<" ";
  cerr<<"}";
}

template <class T, class V> void _print(pair <T, V> p) 
{
  cerr << "{ "; 
  _print(p.first); 
  cerr << " , "; 
  _print(p.second); 
  cerr << "}";
}

template<class T, class V> void _print(unordered_map<T,V>map)
{ 
  cerr<<"unordered_map"<<endl;
  for(pair<T,V> x :map)
  {
    cerr<<x.first<<" "<<x.second<<endl;
  }
}

template<class T, class V> void _print(map<T,V>map)
{ 
  cerr<<"map"<<endl;
  for(pair<T,V> x :map)
  {
    cerr<<x.first<<" "<<x.second<<endl;
  }
}

template<class T> void _print(unordered_set<T> s )
{ 
  cerr<<"{ ";
  for(T x : s)
    cerr<<x<<" ";
  cerr<<"}";
}

/*----------------------------------------------------------------------------------------------------------------------------------------------*/


//My Functions :-


ll fact(ll x )
{
  ll ans=1; 
  while(x>0)
  {
    ans=(ans*x)%mod;
    x--;
  }
  return ans ; 
}

vector<ll> findPrime(ll limit)
{

  vector<ll> primeNo;
  vector<ll>prime(limit+1,1);
  for(ll g=2;g<=limit+1;g++)
    {   if(prime[g]==1)
      { 
        primeNo.push_back(g);
        
        for(ll r=g*g;r<=limit+1;r+=g)
        {
          prime[r]=0;
        }

      }
    }
   
    return primeNo ;

  }

  // gcd calculator 

  ll find_gcd(ll a, ll b)
  {
    if(a==0)
      return b; 
    else 
      return find_gcd(b%a,a);
  }



 // for vector containing int 
  vector<int> inputVector(int size)
  {
    vector<int>v(size);
    for(int g=0;g<size;g++)
      cin>>v[g];
    return v; 
  }

// for vector containing ll remember size data type is ll for method overloading
  vector<ll> inputVector(ll size)
  {
    vector<ll>v(size);
    for(int g=0;g<size;g++)
      cin>>v[g];
    return v;
  }

  template<class T> void printVector(vector<T> ans)
  {
    for(int c=0;c<ans.size();c++)
    {
      cout<<ans[c]<<" ";
    }
    cout<<"\n"; 
  }

ll _ceil(ll x, ll y)
{
    if(x%y==0)
        return x/y;
    else 
        return x/y + 1 ; 
}


ll mod1(ll a, ll b) { // computes a % b;
  return (a - b * (a / b));
}



/*------------------------------------------------------------------------------------------------------------------------------------------------*/






void solve()
{ 
    int t; cin>>t;
    while(t--)
    { 
        
        int n ; cin>>n; 

        int count = 0 ;

        int zero = 0 ;  

        for(int g=0;g<n;g++)
        {
          int val ; cin>>val; 
          if(val<0)
            count++;

          if(val == 0)
            zero = 1 ; 

        }

        if(zero == 1)
        {
          cout<<"0"<<endl;
        }
        else if(count%2==1)
        {
          cout<<"1"<<endl;
        }
        else 
          cout<<"0"<<endl;
      
        


    }

}






int main()
{


  #ifndef ONLINE_JUDGE
  freopen("Error.txt","w",stderr);
  #endif

 //for faster input and output 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  


  solve(); 


}




















