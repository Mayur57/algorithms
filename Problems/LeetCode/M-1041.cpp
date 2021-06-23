#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

    enum {NORTH, SOUTH, EAST, WEST};
    
    bool atOrigin(unordered_map<int, int> map) {
        if(map[NORTH]==map[SOUTH] && map[WEST]==map[EAST]) {
            return true;
        }

        return false;
    }
    
    bool isRobotBounded(string instructions) {
        
        int currentDirection = NORTH;

        unordered_map<int, int> map;

        for(int i=0; i<instructions.length(); i++) {
            if(instructions[i] == 'G') {
                map[currentDirection]++;
            }
            else {
                if(currentDirection == NORTH){
                    currentDirection = instructions[i]=='L' ? WEST : EAST;
                }
                else if(currentDirection == SOUTH){
                    currentDirection = instructions[i]=='L' ? EAST : WEST;
                }
                else if(currentDirection == EAST){
                    currentDirection = instructions[i]=='L' ? NORTH : SOUTH;
                }
                else {
                    currentDirection = instructions[i]=='L' ? SOUTH : NORTH;
                }
            }
        }

        cout<<atOrigin(map);

        if(atOrigin(map) || currentDirection!=0) { return true; };

        return false;
    }

int main() {
    string inst = "GG";
    string ans = isRobotBounded(inst)==0 ? "  FALSE  " : "  TRUE  ";
    cout<<ans;
    return 0;
}