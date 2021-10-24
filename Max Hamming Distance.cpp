#include<bits/stdc++.h>

using namespace std;

int HammDist(int a[],int n,vector<int> copy)
{
	int dist=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=copy[i])
		{
			dist++;
		}
	}
	
	//clear vector
	
	return dist;
}

vector<int> nextRot(int a[],int n,int k)
{
	vector<int> copy;
	for(int i=k;i<(k+n);i++)
	{
		copy.push_back(a[i%n]);
	}
	
	return copy;
}

int main()
{
	int n=5,md=0;
	int a[n]={6,4,3,3,0};
	
	//r stands for rotation and array can't be rotated more than or equal to n times
	for(int r=1;r<n;r++)
	{
		//next rotation bnao
		vector<int> c=nextRot(a,n,r);
		int currHam=HammDist(a,n,c);
		md=max(md,currHam);
	}
	
	cout<<"\n\nMax Dist =>> "<<md;
	return 0;
}
