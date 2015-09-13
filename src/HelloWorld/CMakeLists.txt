SET(SRC HelloWorld_TestHelloWorld.c)
ADD_LIBRARY(TestHelloWorld SHARED ${SRC})

INSTALL(TARGETS TestHelloWorld DESTINATION HelloWorld)
