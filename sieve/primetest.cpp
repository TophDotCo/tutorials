bool isPrime = true ; 
     
int c = sqrt( N ) 
     
for( int i = 2 ; i <= c ; i ++ ) {
    if( (N % i) == 0 ) {
        isPrime = false ; 
    } 
}
