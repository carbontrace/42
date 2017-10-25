for i in $(seq 20); do time bash -c 'make clean && make && make fclean && make && make re && ls -l libft.a'; done
