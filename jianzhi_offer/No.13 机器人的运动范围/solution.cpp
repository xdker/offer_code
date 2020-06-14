class Solution {
    int get(int x){
        int res=0;
        while(x){
            res+=x%10;
            x=x/10;
        }
        return res;
    }
public:
    int movingCount(int m, int n, int k) {
        if(!k) return 1;
        queue<pair<int,int>> Q;
        Q.push(make_pair(0, 0));
        int dx[2]={1,0};
        int dy[2]={0,1};
        vector<vector<int> > vis(m, vector<int>(n, 0));
        vis[0][0]=1;
        int res=1;
        while(!Q.empty()){
            auto [x, y] = Q.front();
            Q.pop();
            for (int i=0;i<2;i++){
                int xi=x+dx[i];
                int yi=y+dy[i];
                if(xi>=m||yi>=n||vis[xi][yi]==1||get(xi)+get(yi)>k) continue;
                Q.push(make_pair(xi, yi));
                vis[xi][yi]=1;
                res++;
            }

        }
        return res;
    }
};