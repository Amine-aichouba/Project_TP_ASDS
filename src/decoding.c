
/*
*
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
*              # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  
*            #                                                                             #
*            #  * * * *   * * *    * * *   * * *   * * * *   * * *  *       *   * * *      #                                                                                                               
*            #   *     *  *       *       *     *   *     *    *    * *     *  *           #                                                                                            
*            #   *     *  * * *   *       *     *   *     *    *    *   *   *  *  * * *    #                                                                                           
*            #   *     *  *       *       *     *   *     *    *    *     * *  *      *    #                                                                                         
*            #  * * * *   * * *    * * *   * * *   * * * *   * * *  *       *   * * *      # 
*            #                                                                             #
*            # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                               
*
*                                                                                                                                
*
*    
*        N = 111100101 = ( 2^0 ) + ( 2^3 ) + ( 2^5 ) + ( 2^6 ) + ( 2^7 ) + ( 2^8 ) 
*
*          N = 1FA7 = 7 × ( 16^0 ) + 10 × ( 16^1 ) + 15 × ( 16^2 ) + 1 × ( 16^3 ) 
*
*
*/       




#include "asds_tp_project.h"


void decoding ( char number_base [] , int* decimal , int choice )
{
    
    int base = 1 ;
    char value ;

    *decimal = 0 ;

    size_t length = strlen ( number_base ) ;

    if ( length > 0 && number_base [ length - 1 ] == '\n' )
        {
            number_base [ length - 1 ] = '\0' ;
            length -- ;
        }
           

    for ( size_t i = length ; i > 0 ; i -- )
        {
            value = number_base [ i - 1 ] ;

            if ( value  >= '0'  &&  value <= '9' )
                    *decimal += ( value - 48 ) * base ;
            else  
                if ( value >= 'A'  &&  value <= 'Z' )
                        *decimal += ( value - 55 ) * base ;                                    
                else 
                    if ( value >= 'a'  &&  value <= 'z' )
                            *decimal += ( value - 87 ) * base ;
                    else
                        {
                            printf ( "Error !! " ) ;
                            return ;
                        }
            base *= choice ;
        }
}

