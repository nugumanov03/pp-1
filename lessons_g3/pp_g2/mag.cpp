#include<iostream>

using namespace std;

int main(){
    int n =3;
    int a[n][n];
    int sum = 0;
    for(int i = 1;i <= n*n; i++){
        sum+=i;
        cout << sum << " ";  
    }
    cout << sum/n<< endl;
    int linesum = sum/n;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
                a[i][j] = 0;
        }
    }
    int k = (n*n)/2 +1;   
    int mid = n/2;
    a[mid][mid] = k;
    // Заполнить диагональ 
    for(int i = 1; i <= n/2; i++){
        a[mid - i][mid - i] = k- i;
    }
    // for(int i = n/2 +1,c = 1; i < n;i++ , c++){
    //     cout << mid - c << " " << mid +c << endl;
    //     a[mid-c][mid+ c] = k - i;
    // }
    // 

   for(int i = 1; i <= n/2 ; i++){
        a[mid + i][mid+i] = (linesum - k)/(n/2) - a[mid-i][mid-i];
    }
//    for(int i = 1; i <= n/2 ; i++){
//         a[mid + i][mid - i] = (linesum - k)/(n/2) - a[mid-i][mid+i];
//     }
    // a[mid+1][mid+1] = (linesum - k)/(n/2) - a[mid-1][mid-1];
    // a[mid+2][mid+2] = (linesum - k)/(n/2) - a[mid-2][mid-2];
    // a[mid][mid+1] = k-6;
    // a[mid][mid-1] = (linesum - k)/(n/2) - a[mid][mid+1];
    // a[mid-1][mid] = k-8;
    a[mid+1][mid] = (linesum - k)/(n/2) - a[mid-1][mid];    
    a[mid+1][mid-1] = (linesum - k)/(n/2) - a[mid-1][mid+1];
    // a[mid+2][mid-2] = (linesum - k)/(n/2) - a[mid-2][mid+2];
    for(int i = -1;i <= 1;i++){
        if(i!=0){
            a[mid+i][mid] = linesum/2 - (a[mid+i][mid-1] + a[mid+i][mid+1]);        
        }
    }
    for(int i = -1;i <= 1;i++){
        if(i!=0){
            a[mid][mid+i] = linesum/2 - (a[mid-1][mid+i] + a[mid+1][mid+i]);        
        }
    }
    // a[mid-1][mid] = linesum - (a[mid-1][mid-1] + a[mid-1][mid+1]);
    // a[mid+1][mid] = linesum - (a[mid+1][mid-1] + a[mid+1][mid+1]);
    // a[mid][mid+1] = linsesum - (a[mid-1][mid-1] + a[mid+1][mid-1]);


    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



            //     for(int c = 0;c < n;c++){
            //     for(int d = 0;d < n;d++){
            //         for(int e = 0; e < n ; e++){
            //             for(int f = 0; f < n;f++){
            //                 for(int g = 0; g < n;g++){
            //                     for(int h = 0; h < n;h++){
            //                         for(int k = 0;k < n;k++){
            //                             cout << i << j << c << d << e << f << g << h << k;
            //                         }
            //                     }
            //                 }
            //             }
            //         }
            //     }
            // }





    return 0;
}