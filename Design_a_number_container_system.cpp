class NumberContainers {
public:
    map<int,int>vap;
    map<int,set<int>>mp2;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(vap.find(index)==vap.end()){
            vap[index]=number;
            mp2[number].insert(index);
        }
        else{
            mp2[vap[index]].erase(index);
            vap[index]=number;
            mp2[number].insert(index);
        }
    }
    
    int find(int number) {
        if(mp2.find(number)==mp2.end() || mp2[number].size()==0)return -1;
        else return *mp2[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
