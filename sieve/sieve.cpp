    int isPrime[ 1020 ] ;
     
    for( int i = 0 ; i <= 1000 ; i ++ ) {
            isPrime[ i ] = 0 ;      // 0 means the box is empty
    }
     
    isPrime[ 1 ] = 1 ; // We have cut the box representing 1.
     
    for( int i = 2 ; i <= 1000 ; i ++ ) {
            if( isPrime[ i ] == 0 ) {       // if i is a prime number
                    for( int j = i * 2 ; j <= 1000 ; j += i ) {
                            isPrime[ j ] = 1 ; // cut the boxes of all the multiples of i
                    }
            }
    }
    
