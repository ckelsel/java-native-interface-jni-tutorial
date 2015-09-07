# your JDK path
JDK_INCLUDE=/home/johnny/xiekunming/jdk1.8.0_51/include

# -m32, enable -m32 flag in x64 environment
INCLUDE_DEPENDS=-I$(JDK_INCLUDE) -I$(JDK_INCLUDE)/linux
default:
	gcc -m32 -fpic -shared HelloWorld_TestHelloWorld.c -o libTestHelloWorld.so $(INCLUDE_DEPENDS)
