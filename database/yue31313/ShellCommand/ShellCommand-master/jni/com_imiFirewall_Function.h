/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_imiFirewall_Function */

#ifndef _Included_com_imiFirewall_Function
#define _Included_com_imiFirewall_Function
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_imiFirewall_Function
 * Method:    version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_imiFirewall_Function_version
  (JNIEnv *, jclass);

/*
 * Class:     com_imiFirewall_Function
 * Method:    createSubprocess
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[I)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL Java_com_imiFirewall_Function_createSubprocess
  (JNIEnv *, jclass, jstring, jstring, jstring, jintArray);

/*
 * Class:     com_imiFirewall_Function
 * Method:    setPtyWindowSize
 * Signature: (Ljava/io/FileDescriptor;IIII)V
 */
JNIEXPORT void JNICALL Java_com_imiFirewall_Function_setPtyWindowSize
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint);

/*
 * Class:     com_imiFirewall_Function
 * Method:    waitFor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_imiFirewall_Function_waitFor
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
