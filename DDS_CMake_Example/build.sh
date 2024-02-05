build_path=/home/wenke/Study/Cpp/project_1/DDS_CMake_Example/build

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