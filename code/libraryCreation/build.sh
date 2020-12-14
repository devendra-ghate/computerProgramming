# Compiling to object files
g++ -c encrypt.cpp
g++ -c decrypt.cpp
# Compiling the main function
g++ -c main.cpp
# Linking the function objects with the main program 
g++ encrypt.o decrypt.o main.o -o directMain.out

# Creating encryption library
ar -crv encryption.a encrypt.o decrypt.o

# Investigate a library
ar -t encryption.a

# Linking the library
g++ -I ./ -o libraryMain.out main.o encryption.a

