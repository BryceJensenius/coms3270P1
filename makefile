stat1: pointcloud.o
	gcc pointcloud.o -o stat1.exe

pointcloud.o: pointcloud.c
	gcc -c pointcloud.c -o pointcloud.o

clean:
	rm -f stat1.exe pointcloud.o