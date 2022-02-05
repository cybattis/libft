
GREY="\033[30m"
RED="\033[31m"
GREEN="\033[32m"
YELLOW="\033[33m"
BLUE="\033[34m"
PURPLE="\033[35m"
CYAN="\033[36m"
WHITE="\033[37m"
END="\033[0m"

CFLAGS="-Wall -Wextra -O2 -g3 -fsanitize=address"

printf "\t\t$YELLOW================= [ ft_atoi_base ] =================$END\n\n"
gcc $CFLAGS -o test/atoi_base test/atoi_base.c -Iincludes libft_d.a -lm && test/atoi_base
rm -rf test/atoi_base

# printf "\t\t$YELLOW================= [ FT_PRINTF ] =================$END\n\n"
# gcc $CFLAGS -o test/dprintf test/dprintf.c -Iincludes libft_d.a && test/dprintf
# rm -rf test/dprintf
# gcc $CFLAGS -o test/printf test/printf.c -Iincludes libft_d.a && test/printf
# rm -rf test/printf

# printf "\t\t$YELLOW================= [ FT_GNL ] =================$END\n\n"
# gcc $CFLAGS -o test/gnl test/gnl.c -Iincludes libft_d.a && test/gnl
# rm -rf test/gnl

# printf "\t\t$YELLOW================= [ VEC2 ] =================$END\n\n"
# gcc $CFLAGS -o test/vector test/vector.c -Iincludes libft_d.a -lm && test/vector
# rm -rf test/vector

# printf "\t\t$YELLOW================= [ MATRIX ] =================$END\n\n"
# gcc $CFLAGS -o test/matrix test/matrix.c -Iincludes libft_d.a -lm && test/matrix
# rm -rf test/matrix
