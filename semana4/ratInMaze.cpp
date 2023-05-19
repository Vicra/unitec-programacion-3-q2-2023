bool isSecure(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool maze(int[] &arr, int x, int y, int n){
    if(x == n-1 && y == n-1){
        arr[x][y] = 1;
        return true;
    }
    if(isSecure(arr, x, y, n)){
        arr[x][y]=1;
        if(maze(arr, x+1, y, n, arr)){
            return true;
        }
        if(maze(arr, x, y+1, n, arr)){
            return true;
        }
        arr[x][y] = 0;
        return false;
    }
    return false;
}