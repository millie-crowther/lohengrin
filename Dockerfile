FROM alpine:3.15.3

# install dependencies
RUN apk add --no-cache make cmake gcc musl-dev

WORKDIR "/"
# copy in source code 
COPY src /src

# build app
WORKDIR "/"
RUN cmake src
RUN make

# delete source code and uninstall packages to save on image size
RUN rm -rf /src
RUN apk del make cmake 

# run app
CMD /lohengrin
