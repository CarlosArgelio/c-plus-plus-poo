FROM ubuntu:latest

RUN apt-get update && apt-get install -y g++

WORKDIR /app

COPY . .

RUN g++ main.cpp -o main

CMD ["./main"]
