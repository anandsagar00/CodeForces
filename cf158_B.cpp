// Taxi
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        umap[x]++;
    }

    int answer=umap[4];//this will store the minimum number of taxis required
    int threes=umap[3];
    int twos=umap[2];
    int ones=umap[1];

    //pairing (3,1)
    if(ones>=threes)
    {
        answer+=threes;
        ones-=threes;
        threes=0;
    }
    else 
    {
        answer+=ones;
        threes-=ones;
        ones=0;
    }
    //pairing (2,2)
    answer+=(twos/2);
    twos=twos%2;

    //pairing (2,(1,1))
    while(twos > 0 && ones > 0)
    {
        if(ones>=2)
        {
            answer++;
            twos--;
            ones-=2;
        }
        else
        {
            twos--;
            ones--;
            answer++;
        }
        
    }
    //there will be two poss after while loop either all twos are over or all ones are over
    if(twos>0)
    {
        answer=answer+1;
    }
    if(threes>0)
    {
        answer+=threes;
    }
    if(ones>0)
    {
        answer+=(ones/4);
        ones=ones%4;
        if(ones)
        answer+=1;
    }
    cout<<answer<<"\n";

}