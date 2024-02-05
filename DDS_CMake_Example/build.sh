build_path=$(pwd)/build

if [ ! -d $build_path ]; then
    echo "build/ not exists, create build/ ..."
    mkdir build
fi

if [ -z $build_path ]; then
    echo "build is empty"
else
    echo "clear build ..."
    rm -rf $build_path/*
fi

echo "enter build and exec cmake ..."
cd build && cmake ..
make

echo "cmake done."