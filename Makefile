prepaire:
	rm -rf build
	mkdir build
	cd build

dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png
