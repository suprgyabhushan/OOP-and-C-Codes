INC_PATH = -I/usr/local/include/player-3.0
LIB_PATH = -L/usr/local/lib64 -lplayerc -lm -lz -lplayerinterface -lplayerwkb -lplayercommon
move: move.c
	gcc -o move $(INC_PATH) move.c $(LIB_PATH)
clean:
	rm -rf move
