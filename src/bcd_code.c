
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
*              # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  
*            #                                                                             #
*            #  * * * *     * * *  * * * *         * * *     * * *    * * * *    * * * *   #                                                                       
*            #  *      *  *         *      *     *         *       *   *      *  *         #                                                                                   
*            #  * * * *   *         *      *     *         *       *   *      *  * * * *   #                                                                                        
*            #  *      *  *         *      *     *         *       *   *      *  *         #                                                                                  
*            #  * * * *     * * *  * * * *         * * *     * * *    * * * *    * * * *   #   
*            #                                                                             #
*            # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                               
*
*                                                                                                                               
* 
*              * ( 1001 0101 0001 ) bcd  ~~  ( 9 5 1 ) 10 
*              * ( 55 ) 10  ~~  ( 0101 0101 ) bcd
* 

*/  

#include "asds_tp_project.h"


void bcd_code ( char number [] , char choice ) 
{
    char val ;
    char* bcd_num [] = {   
                            "0000" , "0001" , "0010" , "0011" , "0100" , 
                            "0101" , "0110" , "0111" , "1000" , "1001"   
                        } ;
    char bcd [5] ;
    int decimal ;
    
    size_t length = strlen ( number ) ;

    if ( length > 0 && number [ length - 1 ] == '\n' ) 
        {
            number [ length - 1 ] = '\0' ;
            length -- ;
        }

                     
    if ( choice == '1' )  
        {                  
            
            for ( size_t i = 0 ; i < length ; i += 4 )
                {

                    if ( i + 4 > length )
                        {
                            printf ( "Error : length !!! " ) ;
                            return ;
                        }

                    strncpy ( bcd , &number [i] , 4 ) ;
                    bcd [4] = '\0' ; 

                    for ( decimal = 0 ; decimal < 10 ; decimal ++ )
                        {
                            if ( strcmp ( bcd , bcd_num [decimal] ) == 0 ) 
                                {
                                    printf ( "%d" , decimal ) ;
                                    break ;
                                }
                        }
                    
                    if ( decimal == 10 )
                        {
                            printf ( "Error : the number does not exist !! " ) ;
                            return ;
                        }
                }
        }
        
        
    if ( choice == '2' ) 
        {
            for ( size_t i = 0 ; i < length ; i ++ )  
                {
                    val = number [i] ;
                    if ( val >= '0'  &&  val <= '9' ) 
                        printf(" %s" , bcd_num [ (int) ( val - 48 ) ]  ) ;

                    else 
                        {
                            printf ( "Error : number from ( 1 ~ 9 ) " ) ;
                            return ;
                        }    
                }
        }
}

































