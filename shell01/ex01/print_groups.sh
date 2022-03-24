#!/bin/ssh

id -G -n $FT_USER | tr ' ' ',' | tr -d '\n'
