# ASCII-game
The goal of the project is to create a game in C entierly in the Terminal using the ASCII caracter to do the rendering

# The display
To display everything in the terminal, I'm gonna use a matrice of char, filled with the display of the next frame.
We can easaly sync the printing speed to get the impretion of a movie at 64 frame/sec.

The Matrice will have the dimention of the basic terminal size in full screen 42*173 char
