#!/usr/bin/env sh

THISDIR="$(dirname $0)"
test "$THISDIR" = "." && THISDIR=${PWD}

RESULT=$("${THISDIR}"/python-config.sh "$@")

exec_prefix_win=$("${THISDIR}"/python-config.sh --exec-prefix)
exec_prefix_unix=/d/a/mingw-builds/mingw-builds/buildroot/x86_64-1120-posix-seh-rt_v9-rev1/mingw64/opt
echo $(echo $RESULT | sed "s#${exec_prefix_win}#${exec_prefix_unix}#g")
