#include <bits/stdc++.h>
using namespace std;
struct process {
    string name;
    int Btime;
    int Atime;
};
bool comparatorB(process &p1, process &p2){
	return (p1.Btime <= p2.Btime); 
}
bool comparatorA(process &p1, process &p2){
	return (p1.Atime < p2.Atime); 
}
int main() {
	int n;
	cout << "Enter the number of process\n";
	cin >> n;
	cout << "Enter process name and arrival time and burst time respectively\n"; int i = 0;
	vector<process> p(n);
	for (i = 0; i < n; i++){
	cin >> p[i].name; cin >> p[i].Atime; cin >> p[i].Btime;
	}
	auto originalProcess = p;
	sort(p.begin(), p.end(), comparatorA);
	cout << "Given process and its arrival time and burst time respectively\n"; int totalTime = 0;
	int maxAtime = p[0].Atime;
	for (auto &&i : p){
		cout << i.name << " " << i.Atime << " " << i.Btime << endl; totalTime += i.Btime;
		if (i.Atime >= maxAtime){
			maxAtime = i.Atime; 
		}
	}
	vector<pair<string, int>> ganttChart; int index = 0;
	int tillNow = 0;
	while (1){
		index = 0;
		sort(p.begin(), p.end(), comparatorA);
		for (auto iter = p.begin(); iter < p.end() - 1; iter++) {
			if (iter->Atime == (iter + 1)->Atime) {
				index++; 
			}
			else{
				break; 
			}
		}
		if (index < maxAtime) {
			for (int j = 0; j <= index; j++){	
				p[j].Atime +=1;
			}
			auto itr = min_element(p.begin(), p.begin() + index + 1, comparatorB); 
			itr->Btime -= 1;
			auto itr = min_element(p.begin(), p.begin() + index + 1, comparatorB); 
			itr->Btime -= 1;
			tillNow += 1;
		}
		else{
			sort(p.begin(), p.end(), comparatorB); for (int j = 0; j <= index; j++){
				ganttChart.push_back({p[j].name, p[j].Btime + tillNow});
				tillNow += p[j].Btime; 
			}
			break; 
		}
	}
	cout << "Gantt Chart\n"; for (auto &&i : ganttChart) {
	cout << i.first << " " << i.second << endl; }
	reverse(ganttChart.begin(), ganttChart.end());
	float avgWaitingTime = 0; float avgTurnAroundTime = 0;
	map<string, int> mCompletionTime; 
	map<string, int> mWaitingTime; 
	map<string, int> mTurnAroundTime;
	for(auto iter = originalProcess.begin(); iter != originalProcess.end(); iter++){
	 	for (auto itr = ganttChart.begin(); itr != ganttChart.end(); itr++){
			if (itr->first == iter->name) {
				mCompletionTime[iter->name] = itr->second;
				mTurnAroundTime[iter->name] = mCompletionTime[iter->name] - iter-
			} 
		}
	}
	cout << "Completion Time for every processes\n"; 
	for (auto &&i : mCompletionTime){
		cout << i.first << " " << i.second << endl; 
	}
	cout << "Turn Around Time for every processes\n"; 
	for (auto &&i : mTurnAroundTime){
		cout << i.first << " " << i.second << endl;
		avgTurnAroundTime+=i.second; 
	}
	cout << "Waiting Time for every processes\n"; 
	for (auto &&i : mWaitingTime){
		cout << i.first << " " << i.second << endl;
		avgWaitingTime+=i.second; 
	}
	avgTurnAroundTime/=n;
	avgWaitingTime/=n;
	cout<<"Average Turn Around Time = "<<avgTurnAroundTime; cout<<"\nAverage Waiting Time = "<<avgWaitingTime; cout<<endl;
	return 0;
}