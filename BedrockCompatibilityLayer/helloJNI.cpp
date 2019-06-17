#include <jni.h>
#include <stdio.h>
#include "HelloJNI.h"
#include "corerun.h"

// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
	const char* argv[4];
	argv[0] = "";
	argv[1] = "-c";
	argv[2] = "/usr/share/dotnet/shared/Microsoft.NETCore.App/2.0.5/";
	argv[3] = "./HelloCSharp.dll";
	
	int result = corerun(4, argv);
	return;
}