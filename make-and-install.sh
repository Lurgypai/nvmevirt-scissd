#!/bin/bash

make -j 4

echo "removing module..."
sudo rmmod nvmev.ko

echo "installing module..."
sudo insmod ./nvmev.ko \
	memmap_start=12G \
	memmap_size=4G \
	cpus=7, 8
