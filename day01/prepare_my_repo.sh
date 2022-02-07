#!/bin/sh
blih -u matthieu.queru@epitech.eu repository create $1
blih -u matthieu.queru@epitech.eu repository setacl $1 ramassage-tek r
blih -u matthieu.queru@epitech.eu repository getacl $1
