// C++ implementation of First - Fit algorithm 
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std; 
void firstFit(int blockSize[], int m, int processSize[], int n){ 
	int allocation[n]; 
	memset(allocation, -1, sizeof(allocation));
	for (int i = 0; i < n; i++){ 
		for (int j = 0; j < m; j++){ 
			if (blockSize[j] >= processSize[i]){ 
				allocation[i] = j;
				blockSize[j] -= processSize[i];
				break; 
			} 
		} 
	} 

	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < n; i++){ 
		cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	} 
}

void BestFit(int blockSize[], int m, int processSize[], int n){
	int allocation[n];
	vector<pair<int, int> > blocks(m);
	for(int i=0; i<m; i++){
		blocks[i].first = blockSize[i];
		blocks[i].second = i;
	}
	sort(blocks.begin(), blocks.end());
	memset(allocation, -1, sizeof(allocation));
	for (int i = 0; i < n; i++){ 
		for (int j = 0; j < m; j++){ 
			if (blocks[j].first >= processSize[i]){ 
				allocation[i] = blocks[j].second;
				blocks[j].first -= processSize[i];
				break; 
			} 
		} 
	} 

	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < n; i++){ 
		cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	}
}

void WorsrFit(int blockSize[], int m, int processSize[], int n){
	int allocation[n];
	vector<pair<int, int> > blocks(m);
	for(int i=0; i<m; i++){
		blocks[i].first = blockSize[i];
		blocks[i].second = i;
	}
	sort(blocks.begin(), blocks.end());
	reverse(blocks.begin(), blocks.end());
	memset(allocation, -1, sizeof(allocation));
	for (int i = 0; i < n; i++){ 
		for (int j = 0; j < m; j++){ 
			if (blocks[j].first >= processSize[i]){ 
				allocation[i] = blocks[j].second;
				blocks[j].first -= processSize[i];
				break; 
			} 
		} 
	} 

	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < n; i++){ 
		cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	}
}

void NextFit(int blockSize[], int m, int processSize[], int n){
	int allocation[n], j=0;
	memset(allocation, -1, sizeof(allocation));

	for (int i = 0; i < n; i++){
        while (j < m){
            if (blockSize[j] >= processSize[i]){
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break; 
            }
            j = (j + 1) % m; 
        } 
    } 


	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < n; i++){ 
		cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	}
}

int main(){ 
	int blockSize[] = {200, 400, 600, 500, 300, 250};
	int processSize[] = {375, 210, 468, 491}; 
	int m = sizeof(blockSize) / sizeof(blockSize[0]); 
	int n = sizeof(processSize) / sizeof(processSize[0]); 
	cout<<endl<<"****FIRST FIT****"<<endl;
	firstFit(blockSize, m, processSize, n); 

	cout<<endl<<"****BEST FIT****"<<endl;
	BestFit(blockSize, m, processSize, n);

	cout<<endl<<"****WORST FIT****"<<endl;
	WorsrFit(blockSize, m, processSize, n);

	cout<<endl<<"****NEXT FIT****"<<endl;
	NextFit(blockSize, m, processSize, n);

	return 0 ; 
} 
