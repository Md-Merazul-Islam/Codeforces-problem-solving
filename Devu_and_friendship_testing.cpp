#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int>st;
        
        for(int i=0; i<n; i++)
        {
            int day;
            cin>>day;
            st.insert(day);
            
        }
        cout<<st.size()<<endl;

    }
    return 0;
}