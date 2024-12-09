
/*
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
*                        ------------------------------------------------
*
*                    # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   
*                  #                                                           #
*                  #         * * * *    *       *   *               *          #                                                                                                        
*                  #        *           *       *   * *           * *          #                                                                                    
*                  #        *           *       *   *   *       *   *          #                                                                                         
*                  #         * * * *    *       *   *     *   *     *          #                                                                                         
*                  #                *   *       *   *       *       *          #                          
*                  #                *   *       *   *               *          #              
*                  #         * * * *     * * * *    *               *          # 
*                  #                                                           # 
*                  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                               
*                                                                                    
*
*
*
*
*    
*/




#include "asds_tp_project.h"



void sum_in_binary ( int bin_1 , int bin_2 , int* result )  
{

    int i = 0 , rest = 0 ;
    int sum [20] ;
    
    while ( bin_1 != 0 || bin_2 != 0 ) 
        {
            sum [ i ++ ] = ( bin_1 % 10 + bin_2 % 10 + rest ) % 2 ;  
            rest = ( bin_1 % 10 + bin_2 % 10 + rest ) / 2 ;    
            bin_1 = bin_1 / 10 ;
            bin_2 = bin_2 / 10 ;
        }
    
    if ( rest != 0 ) 
        sum [ i ++ ] = rest ;

  
    *result = 0 ; 
    for ( int j = i - 1 ; j >= 0 ; j-- ) 
        *result = *result * 10 + sum [j] ; 
    
}