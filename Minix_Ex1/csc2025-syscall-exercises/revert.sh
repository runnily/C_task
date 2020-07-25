#!/bin/sh
REVERT=revert
USR_SRC=/usr/src
INCLUDE=include
SERVERS_VFS=servers/vfs
INCLUDE_MINIX=${INCLUDE}/minix

cp ${REVERT}/${INCLUDE_MINIX}/callnr.h ${USR_SRC}/${INCLUDE_MINIX}

cp ${REVERT}/${SERVERS_VFS}/Makefile ${USR_SRC}/${SERVERS_VFS}
cp ${REVERT}/${SERVERS_VFS}/proto.h ${USR_SRC}/${SERVERS_VFS}
cp ${REVERT}/${SERVERS_VFS}/table.c ${USR_SRC}/${SERVERS_VFS}

rm -f ${USR_SRC}/${SERVERS_VFS}/vfsexercise.c
rm -f ${USR_SRC}/${SERVERS_VFS}/vfsexercise.o

