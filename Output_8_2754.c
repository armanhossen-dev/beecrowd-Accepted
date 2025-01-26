//beecrowd | 2754 Output 8
#include <stdio.h>
int main() {

    double a,b;
    a=234.345;
    b=45.698;
    printf("%.6lf - %.6lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.6lfe+02 - %.6lfe+01\n",a/100,b/10);
    printf("%.6lfE+02 - %.6lfE+01\n",a/100,b/10);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    
    return 0;
}

