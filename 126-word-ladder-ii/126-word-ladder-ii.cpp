class Solution {
public:
   vector<int>* precursor;
	vector<vector<string>> res;
	bool isANeighbor(string& s1, string& s2) {
		bool hasChanged = false;
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] != s2[i]) {
				if (hasChanged)
					return false;
				else
					hasChanged = true;
			}
		}
		return true;
	}
	void generateRoute(vector<string> right, vector<int>& precursor2, vector<string>& wordList) {
		if (precursor2.size() == 0) {
			res.push_back(right);
			return;
		}
		vector<string> copy;
		for (int i = 0; i < precursor2.size(); i++) {
			copy = right;
			
			copy.insert(copy.begin(), wordList[precursor2[i]]);
			generateRoute(copy, precursor[precursor2[i]], wordList);
		}
	
	}
	vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
		wordList.push_back(beginWord);
		int size = wordList.size();
		vector<int>* neighbors = new vector<int>[size];
		int ewordindex = -1;
		for (int i = 0; i < size; i++) {
			if (wordList[i] == endWord)
				ewordindex = i;
			for (int j = i + 1; j < size; j++) {
				if (isANeighbor(wordList[i],wordList[j])) {
					neighbors[i].push_back(j);
					neighbors[j].push_back(i);
				}
			}
		}
		vector<int> steps(size);
		queue<int> line;
		steps[size - 1] = 1;
		line.push(size - 1);
		precursor = new vector<int>[size];
		while (!line.empty()) {
			int pos = line.front();
			line.pop();
			if (wordList[pos] == endWord)
				
				break;
			for (int i = 0; i < neighbors[pos].size(); i++) {
				if (steps[neighbors[pos][i]]==0) {
					
					steps[neighbors[pos][i]] += steps[pos] + 1;
					precursor[neighbors[pos][i]].push_back(pos);
					line.push(neighbors[pos][i]);
				}
				else if (steps[neighbors[pos][i]] == steps[pos] + 1)
					
					precursor[neighbors[pos][i]].push_back(pos);
			}
		
		}
		if (ewordindex == -1 || steps[ewordindex] == 0)
			return res;
		vector<string> right{endWord};
		generateRoute(right,precursor[ewordindex] , wordList);
		return res;
    }
};