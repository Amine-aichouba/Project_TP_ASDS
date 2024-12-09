
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
*                   # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   
*                 #                                                                 #             
*                 #             * * * *   * * * *       * * *    *     *            #                               
*                 #            *          *      *    *       *  *     *            #                       
*                 #            *  * * *   * * * *     * * * * *   * * *             #                                
*                 #            *      *   *  *        *       *     *               #                     
*                 #             * * * *   *    *  *   *       *     *               #
*                 #                                                                 #             
*                 # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                                
*
*                                                                                                                            
*                      ( 1000 ) g ~~ ( 1111 ) 2                                                                 
*                                                                               
*                       ( 101 )2  ~~  ( 111 ) g                                                      
*                                                                               
*                                                                               
*/  




#include "asds_tp_project.h"


void gray_code ( char number [] , char choice ) 
{

    int number_int [100] , gray = 0 ;

    size_t length = strlen ( number ) ;

    if ( length > 0  &&  number [ length - 1 ] == '\n') 
        {
            number [ length - 1 ] = '\0' ;
            length -- ;
        }
    
    for ( size_t i = 0 ; i < length ; i ++ ) 
        {
            if ( number [i] == '0' || number [i] == '1' ) 
                number_int [i] = ( int ) ( number [i] - 48 ) ;
            
            else 
                {
                    printf ( "Error !!! " ) ;
                    return ;
                }
        }
    
    if ( choice == '1' ) // gray to binary
        {
            for ( int i = 0 ; i < ( int ) length ; i ++ ) 
                {
                    if ( i == 0 ) 
                        printf ( "%d" , number_int [i] ) ;

                    else 
                        printf ( "%d" , number_int [ i - 1 ] ^ number_int [i] ) ;
                }
        }

    if ( choice == '2' ) 
        {
            for ( int i = 0 ; i < (int) length ; i ++ ) 
                {
                    if ( i == 0 ) 
                        {
                            gray = number_int [i] ;
                            printf ( "%d" , number_int [i] ) ;
                        } 
                        else 
                            {
                                gray ^= number_int [i] ;
                                printf ( "%d" , gray ) ;
                            }
                }
        }
}
