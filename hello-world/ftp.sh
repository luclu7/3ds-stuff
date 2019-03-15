#!/bin/sh
# constantes
HOST=192.168.1.201
PORT=5000
dir=$(basename $PWD)

# le transfert lui même
ftp -i -n $HOST $PORT << END_SCRIPT
quote USER anonymous
cd /3ds
delete $dir.smdh
delete $dir.3dsx
put $dir.3dsx
put $dir.smdh
!
END_SCRIPT
