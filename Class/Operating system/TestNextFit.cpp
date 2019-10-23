// NEXT FIT
#include<iostream>
using namespace std;
void NextFit(int block[], int n, int process[]){
	int allocate[n];
	int j=0;
	memset(allocate, -1, sizeof(allocate));
	for(int i=0; i<n; i++){
		while(j<n){
			if (block[j] >= process[i]){
                allocate[i] = j;
                block[j] -= process[i];
                break; 
            }
            j = (j+1) % n; 
		}
	}
	cout<<endl;
	cout<<"Process NO\t Block No\t Process Size(KB)"<<endl;
	for(int i=0; i<n; i++){
		cout << "    " << i+1 << "\t\t";
		if (allocate[i] != -1) 
			cout <<"   "<<allocate[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout<<"\t\t    "<<process[i];
		cout << endl;
	}

}

int main(){
	int N;
	cout<<"Enter the number of Processes : ";
	cin>>N;
	int block[N];
	cout<<"Enter the size of the free segments(in KB) : ";
	for(int i=0; i<N; i++)
		cin>>block[i];
	int process[N];
	cout<<"Enter the size of the Processes(in KB) : ";
	for(int i=0; i<N; i++)
		cin>>process[i];
	cout<<endl<<"\t\t****NEXT FIT****"<<endl;
	NextFit(block, N, process);

	return 0;
}