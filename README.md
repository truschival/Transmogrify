Transmogrify
============

Simple CMake based project depending on libtransmog


Build with VC++:

cmake  -DBUILD_TEST=On -DCMAKE_BUILD_TYPE=Release -DBUILD_GTEST_FROM_SRC=On J:\projects\libtransmogrify/
cmake-gui .
msbuild /P:Configuration=Release PACKAGE.vcxproj

cmake  -DCMAKE_BUILD_TYPE=Release -DCOMPONENT_DIR=C:/components -DBOARD=VC++ J:\projects\Transmogrify/
cmake-gui .
msbuild /P:Configuration=Release PACKAGE.vcxproj

Replace /MD with /MT!