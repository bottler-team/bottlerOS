#include "bottler.h"

void bottler(int argc, char ** argv) {
	printStringLen("                                                                             ", 80); new_line();
    printStringLen("                                   (%(                                     ", 80); new_line();
	printStringLen( "      Welcome to", 17);
    printStringLen("                  %%%%%                                      ", 80); new_line();
	printStringLen( "        BottlerOS", 18);
    printStringLen("                  %%%                                      ", 80); new_line();
    printStringLen( "                              %%%%%%%%%%%%%                                 ", 80); new_line();
    printStringLen( "                          %%%%%%%%%%%%%%%%%%%%%                             ", 80); new_line();
    printStringLen( "                        %%%%%%%           %%%%%%%                           ", 80); new_line();
    printStringLen( "                      %%%%%                   %%%%%                         ", 80); new_line();
    printStringLen( "                     %%%%%                     %%%%%                        ", 80); new_line();
    printStringLen( "                    %%%%% ", 27); 
	printStringLen( " %%%%           %%%% ", 22); 
	printStringLen( " %%%%%                       ", 30); new_line();
    printStringLen( "                    %%%%%  ", 28); 
	printStringLen( " (%             %(  ", 21); 
	printStringLen( " %%%%%                       ", 30); new_line();
    printStringLen( "                    %%%%%%%                   %%%%%%%                       ", 80); new_line();
    printStringLen("                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                       ", 80); new_line();
    printStringLen("                 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                    ", 80); new_line();
    printStringLen("                %%%%%%%%%%%%%%%%%%%%%%% ", 41); 
	printStringLen( " %  %* ", 8); 
	printStringLen(" %%%%%%%%%                   ", 30); new_line();
    printStringLen("                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                   ", 80); new_line();
    printStringLen("                %%**%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/%%                   ", 80); new_line();
    printStringLen("                %%* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /%%                   ", 80); new_line();
    printStringLen("                %%* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /%%                   ", 80); new_line();
    printStringLen("                %%%  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  %%%                   ", 80); new_line();
    printStringLen( "              ,%%%%%   %%%%%%%%%%%%%%%%%%%%%%%%%%%   %%%%%.                 ", 80); new_line();
    printStringLen( "                %%.         %%%%%%%%%%%%%%%%%         .%%                   ", 80); new_line();
    printStringLen( "                              %%%%%%%%%%%%%                                 ", 80); new_line();
    printStringLen( "                                 %%%%%%%                                    ", 80); new_line();
    printStringLen( "                                                                            ", 80); new_line();
	sys_sleep(3);
	
	winClear();
    sys_exit();
}