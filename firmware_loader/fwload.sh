#!/bin/sh

sudo rmmod ftdi_sio
sudo rmmod usbserial
sudo ./fwload -f "${1}"
sudo modprobe usbserial
sudo modprobe ftdi_sio
