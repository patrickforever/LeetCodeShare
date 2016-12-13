typedef struct{
    int x ;
    int y;
}LOCATION;
int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    LOCATION pointA , pointB;
    int areaA  , areaB , doubleArea;
    areaA = (C-A)*(D-B);
    areaB = (G-E)*(H-F);
    if(A>=G || B>=H || E>=C || F >=D)
        return areaA+areaB;
    pointA.x = (G>C)?C:G;
    pointA.y = (H>D)?D:H;
    pointB.x = (A>E)?A:E;
    pointB.y = (B>F)?B:F;
    doubleArea =abs( (pointA.x-pointB.x)*(pointA.y-pointB.y));
    return abs(areaA+areaB - doubleArea);


}
