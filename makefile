ALL:
	g++ minisector.cpp Straight.cpp Corner.cpp Barcelona.cpp F1Car.cpp Circuit.cpp gamestart.cpp -o main
LoopTest:
	g++ Loop.cpp -o main