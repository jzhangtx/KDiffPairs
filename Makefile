KDiffPairs: KDiffPairs.o
	g++ -g -o KDiffPairs.exe KDiffPairs.o -pthread    

KDiffPairs.o: KDiffPairs/KDiffPairs.cpp
	g++ -g  -c -pthread KDiffPairs/KDiffPairs.cpp
