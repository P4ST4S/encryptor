######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################### MAKEFILE P4ST4S ############################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################

CC = gcc
EXEC = encryptor
SRC = $(shell find ./ -name "*.c")
OBJ = $(SRC:.c=.o)
ECHO = /bin/echo -e
FLAG = -W -Wall -Werror -I./include/lib -I./include/encryptor -I./include/file -I./include/cmd -g -g3
LIB = -llapin -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lstdc++ -lm -ldl -lpthread -lopencv_imgproc -lopencv_objdetect -lopencv_video -lopencv_core -lavcall -lusb -std=c11

######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################### COLORS #####################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################

DEFLT	=	"\033[00m"
PINK	=	"\033[0;36m"
GREEN	=	"\033[1;32m"
TEAL	=	"\033[1;36m"
RED	=	"\033[0;31m"
BLINK 	= 	"\033[1;92m"
SBLINK	= 	"\033[0m"

######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
########################################################################## COMMAND ###################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################

all:$(EXEC)

build :		$(ECHO) $(BLINK) "[SUCCESS]" $(DEFLT)

%.o : %.c
	@ $(CC) -o $@ -c $< $(FLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(PINK) $< $(DEFLT)

lib:
	@ $(CC) -o $@ -c $< $(FLAG) $(LIB) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(PINK) $< $(DEFLT)

$(EXEC):$(OBJ)
	@ $(CC) -o $@ $^ $(FLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO - OBJECT]" $(TEAL) $< $(DEFLT)

clean:
	@ find -name "*.o" -delete && find -name "*~" -delete && \
	$(ECHO) $(BLINK) "[CLEAN SUCCESS]" $(DEFLT)

fclean:
	@ find -name "*.o" -delete && find -name "*~" -delete && rm $(EXEC) && \
	$(ECHO) $(BLINK) "[FCLEAN SUCCESS]" $(DEFLT) || \
	$(ECHO) $(RED) "[FCLEAN FAILED]" $(TEAL) $< $(DEFLT)

re: 	clean all

run: $(OUT)
	./$(OUT)

######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################### BY P4ST4S ##################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
######################################################################################################################################################################
