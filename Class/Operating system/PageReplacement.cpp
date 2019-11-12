/*       Question-16 Page Replacement Algorithms
For a particular page reference string findout how many page faults
would occur for the following page replacement algorithms for a 
number of frames.
1.LRU
2.FIFO
3.Optimal
*/
#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<queue>

using namespace std; 
#define sz(x)       (int)x.size()
#define present(c,x) (c.find(x)!=c.end())
int LRUPageFaults(int pages[], int n, int nof) 
{ 
    set<int> s; 
    map<int, int> LRUtime; 
    int pf = 0; 
    for (int i=0; i<n; i++) 
    {  
        if (sz(s)<nof) 
        { 
            if (!present(s,pages[i])) 
            { 
                s.insert(pages[i]); 
                pf++; 
            }
            LRUtime[pages[i]] = i;
        }
        else
        {
            if (!present(s,pages[i])) 
            {
                int LRUPageIndex = INT_MAX, pageTobeRemoved; 
                for (auto e:s) 
                { 
                    if (LRUtime[e]<LRUPageIndex) 
                    { 
                        LRUPageIndex = LRUtime[e]; 
                        pageTobeRemoved = e;
                    } 
                }
                s.erase(pageTobeRemoved); 
                s.insert(pages[i]); 
                pf++; 
            } 
            LRUtime[pages[i]] = i; 
        } 
    }
    return pf; 
}
int FIFOPageFaults(int pages[], int n, int nof) 
{
    int pf = 0; 
	set<int> s; 
	queue<int> FIFOqueue; 
	for (int i=0; i<n; i++) 
	{
		if (sz(s)<nof) 
		{ 
			if (!present(s,pages[i])) 
			{ 
				s.insert(pages[i]); 
				pf++;
				FIFOqueue.push(pages[i]); 
			} 
		} 
		else
		{
			if (!present(s,pages[i])) 
			{
				int frontpage = FIFOqueue.front(); 
				FIFOqueue.pop(); 
				s.erase(frontpage);  
				s.insert(pages[i]); 
				FIFOqueue.push(pages[i]); 
				pf++; 
			} 
		} 
	}
	return pf; 
}
bool futureMeAayega(int pages[],int stpos,int n,int key)
{
    for(int i=stpos;i<n;i++)
    {
        if(pages[i]==key)
            return true;
    }
    return false;
}
int OptimalPageFaults(int pages[],int n,int nof)
{
    int pf=0;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        if (sz(s)<nof) 
        { 
            if (!present(s,pages[i])) 
            { 
                s.insert(pages[i]); 
                pf++; 
            }
        }
        else
        {
            if(!present(s,pages[i]))
            {
                bool flag=false;
                for(auto e:s)
                {
                    if(!futureMeAayega(pages,i+1,n,e))
                    {
                        flag=true;
                        s.erase(e);
                        s.insert(pages[i]);
                        pf++;
                        break;
                    }
                }
                if(!flag)
                {
                    int farthest;
                    for(int ti=i+1;ti<n;ti++)
                    {
                        if(present(s,pages[ti]))
                        {
                            farthest=pages[ti];
                        }
                    }
                    s.erase(farthest);
                    s.insert(pages[i]);
                    pf++;

                }
                
            }
        }
    }
    return pf;
}
int main() 
{ 
    int n,nof=0;
    cout<<"Enter no of frames : ";cin>>nof;
    cout<<"Enter the number of pages : ";cin>>n;
    int pages[n];
    cout<<"Enter Page Reference String : ";
    for(int i=0;i<n;i++)
        cin>>pages[i];
    cout<<"\t\tPage Faults\n";
	cout << "FIFO : "<<FIFOPageFaults(pages, n, nof)<<endl;
    cout << "LRU : "<<LRUPageFaults(pages, n, nof)<<endl;
    cout << "Optimal : "<<OptimalPageFaults(pages, n, nof)<<endl;
	return 0; 
} 
