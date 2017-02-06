main: main.cpp liba.so libb.so libd.so
	$(CXX) -o main -la -lb -ld -L. main.cpp

liba.so: a.cpp
	$(CXX) -shared -fvisibility-ms-compat -fPIC -Wl,--as-needed a.cpp -o liba.so

libb.so: b.cpp
	$(CXX) -shared -fvisibility-ms-compat -fPIC -Wl,--as-needed b.cpp -o libb.so

libd.so: d.cpp
	$(CXX) -shared -fvisibility-ms-compat -fPIC -Wl,--as-needed d.cpp -o libd.so
