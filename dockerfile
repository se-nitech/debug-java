FROM python:slim

RUN apt -y update && apt -y install git

# Java
RUN apt -y install openjdk-25-jre openjdk-25-jdk

WORKDIR /mnt
