//
// Created by Administrator on 2018/9/28.
//

#include "luajit.h"

JNIEXPORT jstring JNICALL Java_app_zhix_luandroid_MainActivity_test
        (JNIEnv *jniEnv, jobject jobj) {
    return (*jniEnv)->NewStringUTF(jniEnv, LUA_VERSION);
}