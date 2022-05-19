#!/bin/bash

BUILD=$(cd "$(dirname ${0})"; pwd)/build
mkdir -p $BUILD && cd $BUILD

export LANG=C
export TARGET="aarch64-kos"
export PKG_CONFIG=""
export SDK_PREFIX="/opt/KasperskyOS-Community-Edition-1.1.0.204"
export INSTALL_PREFIX=$BUILD/../install
BUILD_SIM_TARGET="y"
export PATH="$SDK_PREFIX/toolchain/bin:$PATH"

export BUILD_WITH_CLANG=
export BUILD_WITH_GCC=

TOOLCHAIN_SUFFIX=""

if [ "$BUILD_WITH_CLANG" == "y" ];then
    TOOLCHAIN_SUFFIX="-clang"
fi

if [ "$BUILD_WITH_GCC" == "y" ];then
    TOOLCHAIN_SUFFIX="-gcc"
fi

# cd $BUILD && ../pal_tests.sh

cmake -G "Unix Makefiles" \
      -D CMAKE_BUILD_TYPE:STRING=Debug \
      -D CMAKE_INSTALL_PREFIX:STRING=$INSTALL_PREFIX \
      -D CMAKE_FIND_ROOT_PATH="$([[ -f ../additional_cmake_find_root.txt ]] && cat ../additional_cmake_find_root.txt)$PREFIX_DIR/sysroot-$TARGET" \
      -D CMAKE_TOOLCHAIN_FILE=$SDK_PREFIX/toolchain/share/toolchain-$TARGET$TOOLCHAIN_SUFFIX.cmake \
      ../ && make sim
