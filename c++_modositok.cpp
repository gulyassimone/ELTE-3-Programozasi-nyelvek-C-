g++  a.cpp  - fordítás
g++ -c  a.cpp - linkelés előtt megáll
g++ -save-temps a.cpp - lementi a fordítás során keletkezett fájlokat
g++ -E - megáll a preprocesszálásnál 
g++ -W -Wall pedantic -ansi a.cpp több féle hibát és warningot kiír
g++ -pedantic 	olyan dolgokat is jelez, amely később nem fog támogatni a c++, pl x[i]
