#!/bin/sh -e

mkdir -p build || true

cd build
texi2pdf --shell-escape ../main.tex