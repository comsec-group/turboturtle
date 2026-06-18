#!/bin/bash

if [[ -z "${PGID}" ]]; then
    echo "Specify a GID to map into the container!"
    exit 1
fi

if [[ -z "${PUID}" ]]; then
    echo "Specify a UID to map into the container!"
    exit 1
fi

$(getent group $PGID) || groupadd -g $PGID ruedi \
    && useradd -m --key UID_MAX=$PUID --gid $PGID --uid $PUID ruedi \
    && su --login --shell=/bin/bash -c "userwrap.sh '${1}'" ruedi
