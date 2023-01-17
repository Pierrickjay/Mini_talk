CC=clang
CFLAGS=-Wall -Werror -Wextra -g3
INCLUDE = ft_printf/libftprintf.a libft_no_git/libft.a
SRCSERVER = serveur.c \
			convert_base.c \
			ft_atoi_base.c \
			ft_strlen_spe.c \

SRCCLIENT = client.c \
			convert_base.c \
			ft_atoi_base.c \
			ft_strlen_spe.c \

OBJSERVER = $(SRCSERVER:%.c=build/%.o)
OBJCLIENT = $(SRCCLIENT:%.c=build/%.o)

NAMESERVER = serveur
NAMECLIENT = client

all : $(NAMESERVER) $(NAMECLIENT)

$(NAMECLIENT) : $(OBJCLIENT)
	$(CC) $(OBJCLIENT) $(INCLUDE) -o $(NAMECLIENT)

$(NAMESERVER) : $(OBJSERVER)
	$(CC) $(OBJSERVER) $(INCLUDE) -o $(NAMESERVER)

build/%.o : %.c
		make -C ./ft_printf
		make -C ./libft_no_git
		mkdir -p build
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build
	rm -rf ft_printf/build
	rm -rf libft_no_git/build

fclean : clean
	rm -f $(NAMECLIENT) $(NAMESERVER)
	rm -f ft_printf/libftprintf.a
	rm -f libft_no_git/libft.a

re : fclean all

.phony : all clean fclean re
