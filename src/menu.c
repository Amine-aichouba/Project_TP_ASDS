
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
*                  #        *       *  * * * *   *       *  *       *          #                                                                                   
*                  #        * *   * *  *         * *     *  *       *          #                                                                   
*                  #        *  * *  *  * * * *   *   *   *  *       *          #                                                                         
*                  #        *   *   *  *         *     * *  *       *          #                                                                  
*                  #        *       *  * * * *   *       *   * * * *           #  
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



void tic_tic ( char T [] ) 
{
    size_t length = strlen (T) ;
    for ( size_t i = 0 ; i < length ; i ++ )
        {
            fflush (stdout) ;
            printf ( "%c" , *( T+i ) ) ;
            usleep ( 10000 ) ;
        }
    
}

void print_date ()
{
    time_t ko = time (0) ;
    struct tm* lo = localtime (&ko) ;
    printf ( "\n\n\n\t  --{ %02d / %02d / %d }--  ", lo->tm_mday, lo->tm_mon + 1, lo->tm_year + 1900 ) ;
    printf ( "\t\t\t\t   ----{ Project in ASDS TP }---- \t\t\t\t\t\t     Amine Aichouba " ) ;
}

void usto ()
{ 
    printf ( "\n\n\n\n\t" ) ;
    char A [] = "     --- { Universite des Sciences et de la Technologie USTO - MB  /  Faculte des Mathematiques et Informatique / Département de Informatique  } --- " ;
    tic_tic (A) ;
}

void welcome ()
{
    printf ( "\n\n" ) ;
	printf ( "\t\t\t                  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                      \n" ) ;
	printf ( "\t\t\t                * *                                                                                     * *                    \n" ) ;
	printf ( "\t\t\t              * * *   #       #       #  # # # #   #         # # # #   # # # #   # #     # #   # # # #  * * *                  \n" ) ;
	printf ( "\t\t\t  *         * * * *    #     # #     #   #         #         #         #     #   #  #   #  #   #        * * * *         *      \n" ) ;
	printf ( "\t\t\t*   * * * * * * * *     #   #   #   #    # # # #   #         #         #     #   #   # #   #   # # # #  * * * * * * * *   *    \n" ) ;
	printf ( "\t\t\t  *         * * * *      # #     # #     #         #         #         #     #   #    #    #   #        * * * *         *      \n" ) ;
	printf ( "\t\t\t              * * *       #       #      # # # #   # # # #   # # # #   # # # #   #         #   # # # #  * * *                  \n" ) ;
	printf ( "\t\t\t                * *                                                                                     * *                    \n" ) ;
	printf ( "\t\t\t                  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                      \n" ) ;
	printf ( "\n\n\n" ) ;
    char W [] = " ---- welcome ---- " ;
	char B [] = " S t a r t ---> [1] " ;
	char C [] = " E x i t -----> [2] " ;
	char M [] = " ------> " ;
    
    printf ( "\n\t\t\t\t\t\t\t\t\t" ) ; tic_tic (W) ;
    printf ( "\n\n\t\t\t\t\t\t\t\t\t" ) ; tic_tic (B) ;
    printf ( "\n\t\t\t\t\t\t\t\t\t" ) ; tic_tic (C) ;
    printf ( "\n\n\t\t\t\t\t\t\t\t\t" ) ; tic_tic (M) ;  
}

void menu ()
{
    system ( "clear" ) ;
            print_date () ;
            usto () ;
            
            char A [] = "-------------{ menu }-------------" ;
            char Z [] = "   * Coding --------------> [1]" ;
            char E [] = "   * Decoding ------------> [2]" ;
            char R [] = "   * Transcoding ---------> [3]" ;
            char T [] = "   * BCD Code ------------> [4]" ;
            char Y [] = "   * BCD+3 Code ----------> [5]" ;
            char U [] = "   * Gray Code -----------> [6]" ;
            char I [] = "   * Addition in Binary --> [7]" ;
            char O [] = "   * Back ----------------> [8]" ;
	        char P [] = "   * Exit ----------------> [9]" ;
	        char Q [] = "   * Choose an option : " ;

            printf ( " \n\n\n " ) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (A) ;
            printf ( "\n\n\t\t\t\t\t\t\t\t" );  tic_tic (Z) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (E) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (R) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (T) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (Y) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (U) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (I) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (O) ;
            printf ( "\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (P) ;
            printf ( "\n\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (Q) ;
}






