// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string a[3][n];
//         map<string, int> mp;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 mp[a[i][j]]++;
//             }
//         }

//         int point[3] = {0};
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (mp[a[i][j]] == 1)
//                 {
//                     point[i] += 3;
//                 }
//                 else if (mp[a[i][j]] == 2)
//                 {
//                     point[i] += 1;
//                 }
//             }
//         }

//         for (auto v : point)
//         {
//             cout << v << " " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
     
       int t;cin>>t;
     
       while(t--){
         int n; cin>>n;
       
        string str1,str2,str3,str4;
        getline(cin,str1);
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
     
       // cout<<str1<<endl;
       // cout<<str2<<endl;
        //cout<<str3<<endl;
        str4 = str1+" "+str2+" "+str3;
         //cout<<str4<<endl;
        string word;
        stringstream ss(str4);
        map<string, int> mp;
     
        while(ss>>word){
     
                mp[word]++;
        }
     
        // for(auto it = mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<" "<<it->second<<" ";
        // }
     
        string word1;
        stringstream ss1(str1);
        int sum1 = 0;
        while(ss1>>word1){
            int a =   mp[word1];
            if(a>2) sum1=sum1+0;
            else if(a>1) sum1=sum1+1;
            else sum1=sum1+3;
            
            
        }
     
        string word2;
        stringstream ss2(str2);
        int sum2 = 0;
        while(ss2>>word2){
            int b =   mp[word2];
            if(b>2) sum2=sum2+0;
            else if(b>1) sum2=sum2+1;
            else sum2=sum2+3;
        }
     
        string word3;
        stringstream ss3(str3);
        int sum3 = 0;
        while(ss3>>word3){
            int c =   mp[word3];
            if(c>2) sum3=sum3+0;
            else if(c>1) sum3=sum3+1;
            else sum3=sum3+3;
        }
     
     
        cout<<sum1<<" "<<sum2<<" "<<sum3;
     
    cout<<endl;
       }
     
        return 0;
    }