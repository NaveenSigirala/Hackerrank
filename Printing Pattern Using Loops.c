int main() 
{
    int n;
    scanf("%d", &n);
    int dimension = n*2-1;
    for (int r = 1; r <= dimension; r++)
    {
        for (int c = 1; c <= dimension; c++)
        {   
            // Calculate X/Y distance to center
            int dist_v = abs(n - r);
            int dist_h = abs(n - c);
            // Take higher distance
            int number = dist_v > dist_h ? dist_v : dist_h;
            // Add 1 to adjust range.
            printf("%d ", number+1);
        }
        printf("\n");
    }
    return 0;
}
