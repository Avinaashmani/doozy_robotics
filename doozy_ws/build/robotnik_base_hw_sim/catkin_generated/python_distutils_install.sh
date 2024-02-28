#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/avinaash/doozy_robotics/doozy_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/avinaash/doozy_robotics/doozy_ws/install/lib/python3/dist-packages:/home/avinaash/doozy_robotics/doozy_ws/build/robotnik_base_hw_sim/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/avinaash/doozy_robotics/doozy_ws/build/robotnik_base_hw_sim" \
    "/usr/bin/python3" \
    "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/setup.py" \
     \
    build --build-base "/home/avinaash/doozy_robotics/doozy_ws/build/robotnik_base_hw_sim" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/avinaash/doozy_robotics/doozy_ws/install" --install-scripts="/home/avinaash/doozy_robotics/doozy_ws/install/bin"
