FROM python:slim

RUN apt -y update && apt -y install git

# Java
RUN apt -y install openjdk-25-jre openjdk-25-jdk

# C/C++
RUN apt -y install gcc g++ gdb cppcheck clang clang-format

# Python tools
RUN pip install pytest coverage line_profiler

WORKDIR /mnt
