

/*

*
*       # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*       #                        ------------------------------------                           #                                                                                                                                        
*       #                   République Algérienne Démocratique et Populaire                     #                                                                                                                         
*       #         Ministère de l’Enseignement Supérieur et de la Recherche Scientifique         #                                                                                                                                    
*       #          Université des Sciences et de la Technologie d’Oran Mohamed BOUDIAF          #
*       #           -------------------------- * * * -------------------------------            #
*       #                     Faculté des Mathématiques et Informatique                         #                                                                                                                                          
*       #                            Département de Informatique                                # 
*       #                        ----------------------------------                             #                                     
*       # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*
*                    ----------------------------------------------------------------
*
*        # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  
*      #                                                                                           #
*      #  * * * *  * * * *   * * *  *     *  * * *   * * *  * * *   * *   * * *  *     *  * * *    #                                                                       
*      #     *     *      * *     * * *   * *       *      *     *  *   *   *    * *   * *         #                                                                                   
*      #     *     * * * *  * * * * *  *  *  * * *  *      *     *  *   *   *    *  *  * *   * *   #                                                                                        
*      #     *     *   *    *     * *   * *       * *      *     *  *   *   *    *   * * *     *   #                                                                                  
*      #     *     *     *  *     * *     *  * * *   * * *  * * *   * *   * * *  *     *   * *     #   
*      #                                                                                           #
*      # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                              
*
*                                                                                                                               
* 
*              * ( 1001 0101 0001 ) 2 ~~ ( 9 5 1 ) 16 
*              * ( 55 ) 8 ~~ ( 101 101 )2
* 

*/  



#include "asds_tp_project.h"



void transcoding ( char number [] , int base , int base_to ) 
{
    char result [100] ;
    int _X , decimal ;
    int i = 0 ;
    int bit = 0 ;
    int value ;


    if ( base == base_to ) 
        {
            printf ( "Error: b != b' !!! " ) ;
            return;
        }

    if ( base == 10 || base_to == 10 ) 
        {
            printf ( "Error: b != 10 or b' != 10  !!! " ) ;
            return ;
        }

    if ( base == 2 || base_to == 2 ) 
        {
            if ( base == 2 )      // _X = b^n
                _X = base_to ;
            else
                _X = base ;

            bool p = true ;

            while ( _X > 0 )
                {
                    if ( _X % 2 != 0 )
                        {
                            p = false ;
                            bit ++ ;
                        }
                        
                    _X /= 2 ; 
                }
            

            if ( p ) 
                {
                    int length = ( int ) strlen ( number ) ;

                    if ( length > 0 && number [ length - 1 ] == '\n' ) 
                        {
                            number [ length - 1 ] = '\0' ;
                            length -- ;
                        }

                    for ( int j = 0 ; j < length ; j ++ ) 
                        {
                            if ( number [j]  >= '0'  &&  number [j] <= '9' )
                                value = ( int ) ( number [j] - 48 ) ;
                            else  
                                if ( number [j] >= 'A'  &&  number [j] <= 'Z' )
                                    value = (int)  ( number [j] - 55 ) ;                                    
                                else 
                                    if ( number [j] >= 'a'  &&  number [j] <= 'z' )
                                        value = (int) ( number [j] - 87 ) ;
                                    else
                                        {
                                            printf ( "Error !! " ) ;
                                            return ;
                                        }


                            int temp = ( temp << bit ) | ( value ) ;                                                            

                            if ( ( j + 1 ) % bit == 0  ) 
                                {
                                    if ( temp < 10 )
                                        result [ i ++ ] = ( char ) ( temp + 48 ) ;
                                    else
                                        result [ i ++ ] = ( char ) ( temp + 55 ) ;

                                    temp = 0 ;
                                }
                        }

                    result [i] = '\0' ;

                    printf ( "%s" , result ) ; 
                    return ;
                }
        }

    decoding ( number , &decimal , base ) ;

    coding ( decimal , base_to ) ;
}

