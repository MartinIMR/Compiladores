prueba: pr.y pr.l
	bison -d pr.y
	flex -o pr.lex.c pr.l
	gcc -o prueba pr.lex.c pr.tab.c -lm -lfl
