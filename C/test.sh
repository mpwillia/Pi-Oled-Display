
make clean
make

if [ $? -eq 0 ]; then
   echo "=== Running Project ==="
   ./display
fi


