/*
*
*
*    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*    #                        ------------------------------------                           #                                                                                                                                        
*    #                   République Algérienne Démocratique et Populaire                     #                                                                                                                         
*    #         Ministère de l’Enseignement Supérieur et de la Recherche Scientifique         #                                                                                                                                    
*    #          Université des Sciences et de la Technologie d’Oran Mohamed BOUDIAF          #
*    #           -------------------------- * * * -------------------------------            #
*    #                     Faculté des Mathématiques et Informatique                         #                                                                                                                                          
*    #                            Département de Informatique                                # 
*    #                        ----------------------------------                             #                                     
*    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*
*                          ------------------------------------------------
*
*                    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   
*                  #                                                           #
*                  #    * * *   * * *   * * * *   * * *  *       *   * * *     #                                                                                                               
*                  #   *       *     *   *     *    *    * *     *  *          #                                                                                            
*                  #   *       *     *   *     *    *    *   *   *  *  * * *   #                                                                                           
*                  #   *       *     *   *     *    *    *     * *  *      *   #                                                                                         
*                  #    * * *   * * *   * * * *   * * *  *       *   * * *     # 
*                  #                                                           #
*                  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                               
*                                                                                                                                        
 
*
*    25 | 2                     120 | 16
*       |----+                      |---+                                          
*     1 | 16 | 2                 8  | 7 | 16    1116897 | 32  
*            |---+                      |---            |-------+
*          0 | 6 | 2                  7 | 0           1 | 34903 | 32
*                |---+                                          |------+
*              0 | 3 | 2                                     N  | 1090 | 32
*                    |---+                                             |----+
*                  1 | 1 | 2                                        2  | 34 | 32
*                        |----                                              |----+
*                      1 | 0                                              2 | 1  | 32
*                                                                                |---- 
*                                                                              1 | 0

*/       





#include "asds_tp_project.h"



void coding ( int decimal_number, int base ) 
{
    char result [100] ;
    int i = 0 ;
    int rest = 0 ;

    if ( decimal_number == 0 ) 
        {
            printf ( "0" ) ;
            return ;
        }

    while ( decimal_number > 0 ) 
        {
            rest = decimal_number % base ;

            if ( rest < 10 ) 
                result [ i ++ ] = ( char ) ( rest + 48 ) ;
            else 
                result [ i ++ ] = ( char ) ( rest + 55 ) ;
       
            decimal_number /= base ;
        }

    for ( int j = i - 1 ; j >= 0 ; j -- ) 
         printf ( "%c" , result [j] ) ;
    
}

/*
void coding ( int decimal_number , int base )
{
    if ( decimal_number == 0 )
        return ;  
    else
        {
            coding ( decimal_number / base , base ) ;

            if ( decimal_number % base < 10 )
                printf ( "%d" , decimal_number % base  ) ;  
            else 
                printf ( "%c" , ( decimal_number % base ) + 55  ) ;                                
        }
}

*/