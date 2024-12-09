
/*

* # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
* #                        ------------------------------------                           #                                                                                                                                        
* #                   République Algérienne Démocratique et Populaire                     #                                                                                                                         
* #         Ministère de l’Enseignement Supérieur et de la Recherche Scientifique         #                                                                                                                                    
* #          Université des Sciences et de la Technologie d’Oran Mohamed BOUDIAF          #
* #           -------------------------- * * * -------------------------------            #
* #                     Faculté des Mathématiques et Informatique                         #                                                                                                                                          
* #                            Département de Informatique                                # 
* #                        ----------------------------------                             #                                     
* # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
* -----------------------------------------------------------------------------------------
* # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
* #                                                                                       #                        
* #        * * * *    * * * *      * * *        * * *  * * * *    * * *  * * * * *        #                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
* #        *       *  *       *  *       *        *    *        *            *            #                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
* #        *       *  *       *  *       *        *    *        *            *            #                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
* #        * * * *    * * * *    *       *        *    * * * *  *            *            #                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
* #        *          * *        *       *        *    *        *            *            #                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
* #        *          *   *      *       *  *     *    *        *            *            #                                                                                                                                                                                                                                                                                                                                                             
* #        *          *     * *    * * *      * *      * * * *    * * *      *            #                                                                                                                                                                                                                                                                                                                                                                    
* #                                                                                       #                                                   
* #                      * * *      * * * *    * * * *       * * * *                      #                                                                                                                                                                                              
* #                    *       *   *             *     *    *                             #                                                                                                                                                                        
* #                    *       *   *             *      *   *                             #                                                                                                                                                                        
* #                    * * * * *    * * * *      *      *    * * * *                      #                                                                                                                                                                                       
* #                    *       *           *     *      *           *                     #                                                                                                                                                                                  
* #                    *       *           *     *     *            *                     #                                                                                                                                                                              
* #                    *       *    * * * *    * * * *       * * * *                      #
* #                                                                                       #                                              
* # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
* 
*                                     
*                                     Par : amine AICHOUBA                                       
*                                     --------------------
*                                         U.S.T.O-M.B
*                                         -----------
*                                 Année universitaire 2024-2025
*                                 -----------------------------

*/



#include "asds_tp_project.h"



int main () 
{
    char a ;
    
    char choose , number [__ARRAY_SIZE__] ;
    int decimal , base , base_to ;

star_welcome:
    do 
        {
            system ( "clear" ) ;
            print_date () ;
            usto () ;
            printf ("\n\n") ;
            welcome () ;
            scanf ( " %c" , &a ) ; 

        } while ( a != '1' && a != '2' ) ;
    
    if ( a == '2' )
        exit (1) ;

star_menu:

    do 
        {
            menu () ;
            scanf ( " %c" , &choose ) ; getchar () ;

        } while ( choose <= '0' && choose >= '9' ) ;

star_choose:

    switch ( choose )
        {

            case '1' :
                {
                    char S [] = "------------------------[ CODING ]-------------------------" ;
                    char D [] = "* Give me a number in decimal base : " ;
                    char F [] = "* Give me the base number : " ;
                    int c ;
                
                    system ( "clear" ) ;
                    print_date () ;
                    usto () ;
                    
                
                    printf ( "\n\n\n\n\t\t\t\t\t\t" ) ; tic_tic (S) ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (D) ;
                    scanf ( " %d" , &decimal ) ;

                    printf ( "\n\t\t\t\t\t\t" ) ; tic_tic (F) ;
                    scanf ( " %d" , &base ) ;

                    printf ( "\n\t\t\t\t\t\t* The number %d is in base %d : " , decimal , base ) ;
                    coding ( decimal , base ) ;

                    char G [] = "* Repeat ---> [1]" ;
                    char H [] = "* Back -----> [2]" ;
                    char J [] = "* Exit -----> [3]" ;
                    char K [] = "* Choose an option : " ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (G) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (H) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (J) ;
                    printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;
                    scanf ( " %d" , &c ) ;

                    switch ( c )
                        {
                            case 1 :
                                goto star_choose ;
                                break ;

                            case 2 :
                                goto star_menu ;
                                break ;

                            case 3 : 
                                exit (1) ;
                                break ;
                        }
                
                    break ;
                }

            case '2' :   
                {
                    char S [] = "------------------------[ DECODING ]-------------------------" ;
                    char D [] = "* Give me a number : " ;
                    char F [] = "* Give me the base number : " ;
                    int c ;
                
                    system ( "clear" ) ;
                    print_date () ;
                    usto () ;
                    
                
                    printf ( "\n\n\n\n\t\t\t\t\t\t" ) ; tic_tic (S) ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (F) ;
                    scanf ( " %d" , &base ) ; getchar () ;

                    printf ( "\n\t\t\t\t\t\t" ) ; tic_tic (D) ;
                    
                    fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                    decoding ( number , &c , base ) ;
                    printf ( "\n\t\t\t\t\t\t* The number %s in the decimal base is : %d  " , number , c ) ;
                    
                    char G [] = "* Repeat ---> [1]" ;
                    char H [] = "* Back -----> [2]" ;
                    char J [] = "* Exit -----> [3]" ;
                    char K [] = "* Choose an option : " ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (G) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (H) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (J) ;
                    printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;
                    scanf  ( " %d" , &c ) ; 

                    switch ( c )
                        {
                            case 1 :
                                goto star_choose ;
                                break ;

                            case 2 :
                                goto star_menu ;
                                break ;

                            case 3 : 
                                exit (1) ;
                                break ;
                        }  
                           
                    break ;    
                }

            case '3' :  
                {
                    
                    char S [] = "------------------------[ TRANSCODING ]-------------------------" ;
                    char D [] = "* Give me a number : " ;
                    char F [] = "* Give me the base number b : " ;
                    char N [] = "* Give me the base number b' : " ;
                    int c ;
                
                    system ( "clear" ) ;
                    print_date () ;
                    usto () ;
                    
                
                    printf ( "\n\n\n\n\t\t\t\t\t\t" ) ; tic_tic (S) ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (F) ;
                    scanf ( " %d" , &base ) ; getchar () ;

                    printf ( "\n\t\t\t\t\t\t" ) ; tic_tic (N) ;
                    scanf ( " %d" , &base_to ) ; getchar () ;

                    printf ( "\n\t\t\t\t\t\t" ) ; tic_tic (D) ;
                    
                    fgets ( number , __ARRAY_SIZE__ , stdin ) ;

            

                    printf ( "\n\t\t\t\t\t\t* The number is in base %d  : " , base_to ) ;
                    transcoding ( number , base , base_to ) ;
                    
                    char G [] = "* Repeat ---> [1]" ;
                    char H [] = "* Back -----> [2]" ;
                    char J [] = "* Exit -----> [3]" ;
                    char K [] = "* Choose an option : " ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (G) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (H) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (J) ;
                    printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;
                    scanf  ( " %d" , &c ) ; 

                    switch ( c )
                        {
                            case 1 :
                                goto star_choose ;
                                break ;

                            case 2 :
                                goto star_menu ;
                                break ;

                            case 3 : 
                                exit (1) ;
                                break ;
                        }  


                    break ;
                }
                
            case '4' : 
                {
                    char S [] = "------------------------[ BCD CODE ]-------------------------" ;
                    char D [] = "* BCD to decimal ---> [1]" ;
                    char F [] = "* Decimal to BCD ---> [2]" ;
                    char H [] = "* Back -------------> [3]" ;
                    char J [] = "* Exit -------------> [4]" ;
                    
                    char K [] = "* Choose an option : " ;
                    char L [] = "* Give me a number in the BCD : " ;
                    char M [] = "* Give me a number in decimal base : " ;
                    int y ;
                    char c ;

                    do 
                        {
                            system ( "clear" ) ;
                            print_date () ;
                            usto () ;
                    
                            printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (S) ;
                            printf ( "\n\n\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (D) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (F) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (H) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (J) ;
                            printf ( "\n\n\t\t\t\t\t\t\t\t" ) ;    tic_tic (K) ;
                            scanf ( " %c" , &c ) ; getchar () ;

                        } while ( c <= '0' && c > '4' ) ;

star_bcd :
                    if ( c == '1' )
                        {
                            system ( "clear" ) ;
                            print_date () ;
                            usto () ;

                            printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                            printf ( "\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (L) ;

                            fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                            printf ( "\n\t\t\t\t\t\t* The decimal number is :  " ) ;
                            bcd_code ( number , c ) ;
                            
                            char G [] = "* Repeat ---> [1]" ;
                            char N [] = "* Back -----> [2]" ;
                            char B [] = "* Exit -----> [3]" ;
                            
                            printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (G) ;
                            printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (N) ;
                            printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (B) ;
                            printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;

                            scanf ( " %d" , &y ) ; getchar () ;

                            switch ( y )
                                {
                                    case 1:
                                        goto star_bcd ;
                                        break ;

                                    case 2:
                                        goto star_choose ;
                                        break ;

                                    case 3:
                                        exit (1) ;
                                        break ;
                                }

                        }

                    if ( c == '2' )
                        {
                            system ( "clear" ) ;
                            print_date () ;
                            usto () ;

                            printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                            printf ( "\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (M) ;

                            fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                            printf ( "\n\t\t\t\t\t\t* The number in BCD is : " ) ;
                            bcd_code ( number , c ) ;
                            
                            char G [] = "* Repeat ---> [1]" ;
                            char N [] = "* Back -----> [2]" ;
                            char B [] = "* Exit -----> [3]" ;
                            
                            printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (G) ;
                            printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (N) ;
                            printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (B) ;
                            printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;

                            scanf ( " %d" , &y ) ; getchar () ;

                            switch ( y )
                                {
                                    case 1:
                                        goto star_bcd ;
                                        break ;

                                    case 2:
                                        goto star_choose ;
                                        break ;

                                    case 3:
                                        exit (1) ;
                                        break ;
                                }
                        }

                    if ( c == '3' )
                        goto star_menu ;

                    if ( c == '4')
                        exit (1) ;

                    break ;
                }
                     
            case '5' : 
                {
                    char S [] = "     ----------------[ BCD+3 CODE ]----------------" ;
                    char D [] = "* BCD+3 to BCD ---> [1]" ;
                    char F [] = "* BCD to BCD+3 ---> [2]" ;
                    char H [] = "* Back -----------> [3]" ;
                    char J [] = "* Exit -----------> [4]" ;
                    
                    char K [] = "* Choose an option : " ;
                    char L [] = "     * Give me a number in BCD : " ;
                    char M [] = "     * Give me a number in BCD+3 : " ;
                    char c ;
                    int y ;
            
                    do 
                        {
                            system ( "clear" ) ;
                            print_date () ;
                            usto () ;
                    
                            printf ( "\n\n\n\n\t\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                            printf ( "\n\n\n\t\t\t\t\t\t\t\t\t" ) ;  tic_tic (D) ;
                            printf ( "\n\t\t\t\t\t\t\t\t\t" ) ;      tic_tic (F) ;
                            printf ( "\n\t\t\t\t\t\t\t\t\t" ) ;      tic_tic (H) ;
                            printf ( "\n\t\t\t\t\t\t\t\t\t" ) ;      tic_tic (J) ;
                            printf ( "\n\n\t\t\t\t\t\t\t\t\t" ) ;    tic_tic (K) ;
                            scanf ( " %c" , &c ) ; getchar () ;

                        } while ( c <= '0' && c > '4' ) ;

star_bcd_plus_3 :

                        if ( c == '1' )
                            {
                                system ( "clear" ) ;
                                print_date () ;
                                usto () ;

                                printf ( "\n\n\n\n\t\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                                printf ( "\n\n\n\t\t\t\t\t\t\t" ) ;    tic_tic (M) ;

                                fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                                printf ( "\n\t\t\t\t\t\t\t     * The number in BCD is : " ) ;
                                bcd_plus3_code ( number , c ) ;

                                char G [] = "   * Repeat ---> [1]" ;
                                char N [] = "   * Back -----> [2]" ;
                                char B [] = "   * Exit -----> [3]" ;

                                printf ( "\n\n\n\t\t\t\t\t\t\t  " ) ;   tic_tic (G) ;
                                printf ( "\n\t\t\t\t\t\t\t  " ) ;     tic_tic (N) ;
                                printf ( "\n\t\t\t\t\t\t\t  " ) ;     tic_tic (B) ;
                                printf ( "\n\n\t\t\t\t\t\t\t     " ) ;   tic_tic (K) ;

                                scanf ( " %d" , &y ) ; getchar () ;

                                switch ( y )
                                    {
                                        case 1:
                                            goto star_bcd_plus_3 ;
                                            break ;

                                        case 2:
                                            goto star_choose ;
                                            break ;

                                        case 3:
                                            exit (1) ;
                                            break ;
                                    }
                            }

                        
                        if ( c == '2' )
                            {
                                system ( "clear" ) ;
                                print_date () ;
                                usto () ;

                                printf ( "\n\n\n\n\t\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                                printf ( "\n\n\n\t\t\t\t\t\t\t" ) ;    tic_tic (L) ;

                                fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                                printf ( "\n\t\t\t\t\t\t\t     * The number in BCD+3 is : " ) ;
                                bcd_plus3_code ( number , c ) ;

                                char G [] = "   * Repeat ---> [1]" ;
                                char N [] = "   * Back -----> [2]" ;
                                char B [] = "   * Exit -----> [3]" ;

                                printf ( "\n\n\n\t\t\t\t\t\t\t  " ) ;   tic_tic (G) ;
                                printf ( "\n\t\t\t\t\t\t\t  " ) ;     tic_tic (N) ;
                                printf ( "\n\t\t\t\t\t\t\t  " ) ;     tic_tic (B) ;
                                printf ( "\n\n\t\t\t\t\t\t\t     " ) ;   tic_tic (K) ;
                                scanf ( " %d" , &y ) ; getchar () ;

                                switch ( y )
                                    {
                                        case 1:
                                            goto star_bcd_plus_3 ;
                                            break ;

                                        case 2:
                                            goto star_choose ;
                                            break ;

                                        case 3:
                                            exit (1) ;
                                            break ;
                                    }
                            }


                        if ( c == '3' ) 
                            goto star_menu ;

                        if ( c == '4' ) 
                            exit (1) ;
                    break ; 
                }
                  
            case '6' : 
                {
                    char S [] = "------------------------[ GRAY CODE ]-------------------------" ;
                    char D [] = "* Gray to binary ---> [1]" ;
                    char F [] = "* Binary to gray ---> [2]" ;
                    char H [] = "* Back -------------> [3]" ;
                    char J [] = "* Exit -------------> [4]" ;
                    
                    char K [] = "* Choose an option : " ;
                    char L [] = "* Give me a number in gray : " ;
                    char M [] = "* Give me a number in binary : " ;
                    char c ;
                    int y ;
            
                    do 
                        {
                            system ( "clear" ) ;
                            print_date () ;
                            usto () ;
                    
                            printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (S) ;
                            printf ( "\n\n\n\t\t\t\t\t\t\t\t" ) ;  tic_tic (D) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (F) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (H) ;
                            printf ( "\n\t\t\t\t\t\t\t\t" ) ;      tic_tic (J) ;
                            printf ( "\n\n\t\t\t\t\t\t\t\t" ) ;    tic_tic (K) ;
                            scanf ( " %c" , &c ) ; getchar () ;

                        } while ( c <= '0' && c > '4' ) ;

star_gray :

                        if ( c == '1' )
                            {
                                system ( "clear" ) ;
                                print_date () ;
                                usto () ;

                                printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                                printf ( "\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (L) ;

                                fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                                printf ( "\n\t\t\t\t\t\t* The number in binary is : " ) ;
                                gray_code ( number , c ) ;

                                char G [] = "* Repeat ---> [1]" ;
                                char N [] = "* Back -----> [2]" ;
                                char B [] = "* Exit -----> [3]" ;

                                printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (G) ;
                                printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (N) ;
                                printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (B) ;
                                printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;

                                scanf ( " %d" , &y ) ; getchar () ;

                                switch ( y )
                                    {
                                        case 1:
                                            goto star_gray ;
                                            break ;

                                        case 2:
                                            goto star_choose ;
                                            break ;

                                        case 3:
                                            exit (1) ;
                                            break ;
                                    }
                            }


                        if ( c == '2' )
                            {
                                system ( "clear" ) ;
                                print_date () ;
                                usto () ;

                                printf ( "\n\n\n\n\t\t\t\t\t\t" ) ;  tic_tic (S) ;
                                printf ( "\n\n\n\t\t\t\t\t\t" ) ;    tic_tic (M) ;

                                fgets ( number , __ARRAY_SIZE__ , stdin ) ;

                                printf ( "\n\t\t\t\t\t\t* The number in gray is : " ) ;
                                gray_code ( number , c ) ;

                                char G [] = "* Repeat ---> [1]" ;
                                char N [] = "* Back -----> [2]" ;
                                char B [] = "* Exit -----> [3]" ;

                                printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (G) ;
                                printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (N) ;
                                printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (B) ;
                                printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;

                                scanf ( " %d" , &y ) ; getchar () ;

                                switch ( y )
                                    {
                                        case 1:
                                            goto star_gray ;
                                            break ;

                                        case 2:
                                            goto star_choose ;
                                            break ;

                                        case 3:
                                            exit (1) ;
                                            break ;
                                    }
                            }


                        if ( c == '3' ) 
                            goto star_menu ;

                        if ( c == '4' )
                            exit (1) ;

                    break ;
                }

            case '7' : 
                {
                    char S [] = "------------------[ SUM IN BINARY CODE ]-------------------" ;
                    char D [] = "* Give me the first number : " ;
                    char F [] = "* Give me the second number : " ;

                    int bin_1 , bin_2 , result , p = 0 , c , num_10 ;
                    char bin_to [ __ARRAY_SIZE__ ] ;

                    system ( "clear" ) ;
                    print_date () ;
                    usto () ;                  
                
                    printf ( "\n\n\n\n\t\t\t\t\t\t" ) ; tic_tic (S) ;

                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (D) ;
                    scanf ( " %d" , &bin_1 ) ; 

                    printf ( "\n\t\t\t\t\t\t" ) ; tic_tic (F) ;
                    scanf ( " %d" , &bin_2 ) ;
                    
                    int Xbin = bin_1 , Ybin = bin_2 ;
                    
                    if ( bin_1 < 0 || bin_2 < 0 )
                        p = -1 ;

                    while ( Xbin > 0 || Ybin > 0 )
                        {
                            if ( Xbin % 10 > 1 || Ybin % 10 > 1 )
                                p = -1 ;
                            Xbin /= 10 ;
                            Ybin /= 10 ;
                        }
                    
                    if ( p == -1 ) 
                        printf ( "\n\t\t\t\t\t\t* Error !!! " ) ;
                    else
                        {
                            sum_in_binary ( bin_1 , bin_2 , &result  ) ;
                            sprintf ( bin_to , "%d" , result ) ;
                            decoding ( bin_to , &num_10 , 2 ) ;
                            printf ( "\n\t\t\t\t\t\t* The sum of the numbers ( %d ) and ( %d ) in binary : %d " , bin_1 , bin_2 , result ) ;
                            printf ( "\n\n\t\t\t\t\t\t* The sum of the numbers ( %d ) and ( %d ) in decimal : %d " , bin_1 , bin_2 , num_10 ) ;
                        }

                    char G [] = "* Repeat ---> [1]" ;
                    char H [] = "* Back -----> [2]" ;
                    char J [] = "* Exit -----> [3]" ;
                    char K [] = "* Choose an option : " ;
                    printf ( "\n\n\n\t\t\t\t\t\t" ) ; tic_tic (G) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (H) ;
                    printf ( "\n\t\t\t\t\t\t" ) ;     tic_tic (J) ;
                    printf ( "\n\n\t\t\t\t\t\t" ) ;   tic_tic (K) ;
                    scanf ( " %d" , &c ) ;

                    switch ( c )
                        {
                            case 1 :
                                goto star_choose ;
                                break ;

                            case 2 :
                                goto star_menu ;
                                break ;

                            case 3 : 
                                exit (1) ;
                                break ;
                        }
                
                    break ;
                }    

            case '8' : 
                goto star_welcome ;
                break ;   

            case '9' : 
                exit (1) ;
                break ;                                     
        }

    return 0 ;
}