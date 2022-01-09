bool isRobotBounded(char *instructions){
    int x = 0, y = 0, s = 0;
    int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
    for(char* c = instructions; *c; c++){
        if(*c == 'G') x += dx[s], y += dy[s];
        else if(*c == 'L') s = (s+3)%4;
        else if(*c == 'R') s = (s+1)%4;
    }
    return (x==0&&y==0) || (s!=0);
}