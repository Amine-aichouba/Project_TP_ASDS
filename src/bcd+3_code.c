

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
*                 #     * * * *     * * *  * * * *          *        * * *          #                                                   
*                 #     *      *  *         *      *        *              *        #                                                           
*                 #     * * * *   *         *      *    * * * * *    * * *          #                                                                  
*                 #     *      *  *         *      *        *              *        #                                                          
*                 #     * * * *     * * *  * * * *          *        * * *          #
*                 #                                                                 #             
*                 # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #                                                                                                                                                                                                                                                
*
*    
*    
*            ( 0000 ) bcd  ~~   ( 0011 ) bcd+3
*              
*                                   ( 1100 ) bcd+3 ~~ ( 1001 ) bcd

*/  


#include "asds_tp_project.h"


void bcd_plus3_code ( char number [] , char choice ) 
{
    char* bcd [] =  {   
                        "0000" , "0001" , "0010" , "0011" , "0100" , 
                        "0101" , "0110" , "0111" , "1000" , "1001"   
                    } ;

    char* bcd_XS3 [] =  {
                            "0011" , "0100" , "0101" , "0110" , "0111" ,
                            "1000" , "1001" , "1010" , "1011" , "1100" 
                        } ;
    int position ;
    char temp [5] ;

    size_t length = strlen ( number ) ;

    if ( length > 0  &&  number [ length - 1 ] == '\n' ) 
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
                            printf ( "Error !!!" ) ;
                            return ;
                        }
                              
                    strncpy ( temp , &number [i] , 4 ) ;
                    temp [4] = '\0' ;
        
                    for ( position = 0 ; position < 10 ; position ++ )
                        {
                            if ( strcmp ( temp , bcd_XS3 [ position ] ) == 0 ) 
                                {
                                    printf ( " %s" , bcd [ position ] ) ;
                                    break ;
                                }                   
                        }

                    if ( position == 10 )
                        {
                            printf ( "Error !!!" ) ;
                            return ;
                        }  
                }     
        }

        
        if ( choice == '2' )  
            {   
                for ( size_t i = 0 ; i < length ; i += 4 )
                    {
                        if ( i + 4 > length )
                            {
                                printf ( "Error !!!" ) ;
                                return ;
                            }
                                  
                        strncpy ( temp , &number [i] , 4 ) ;
                        temp [4] = '\0' ;
            
                        for ( position = 0 ; position < 10 ; position ++ )
                            {
                                if ( strcmp ( temp ,  bcd [ position ] ) == 0 ) 
                                    {
                                        printf ( " %s" , bcd_XS3 [ position ] ) ;
                                        break ;
                                    } 
                            }

                        if ( position == 10 )
                            {
                                printf ( "Error !!!" ) ;
                                return ;
                            }  
                    }     
            }
}


