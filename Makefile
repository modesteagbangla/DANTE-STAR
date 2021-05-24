##
## EPITECH PROJECT, 2020
## B-CPE-200-COT-2-1-dante-yemalin.agbangla
## File description:
## Makefile
##

all:
	@$(MAKE) -C generator
	@$(MAKE) -C solver

clean:
	@$(MAKE) -C generator clean
	@$(MAKE) -C solver clean

fclean:
	@$(MAKE) -C generator fclean
	@$(MAKE) -C solver fclean

re:
	@$(MAKE) -C generator re
	@$(MAKE) -C solver re