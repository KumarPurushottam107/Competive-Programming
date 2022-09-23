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

        string str ; 

        cin>>str; 

        vector<char> digits , op ;

        for(int g=0 ;g<str.length(); g++)
        {
          if(str[g]>='0' && str[g]<='9')
          {
            digits.push_back(str[g]);
          }

          if(str[g]=='+' || str[g] == '-')
          {
            op.push_back(str[g]);
          }
        }
        
        
        if(op.size() == 0)
        {
            sort(str.begin(),str.end(), greater<char>());
            cout<<str<<endl;
            
        }
        else
        {

        sort(op.begin(),op.end());

        sort(digits.begin(),digits.end(),greater<int>());
        
        

        int comb = digits.size() - op.size() ; 

        string ans ; 


        int z = 0 ; 
        int flag = 0 ; 
        int s = 0 ;
        while(z<op.size())
        {

          if(flag==0)
          {
             
            while(comb--)
            {
              ans.push_back(digits[s]);
              s++;
            }
            flag=1;
          }
          else
          {
            ans.push_back(digits[s]);
            s++;
          }

          ans.push_back(op[z]);




          z++;
        }

        ans.push_back(digits[s]);  



        cout<<ans<<endl; 
        
        }

        


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




















