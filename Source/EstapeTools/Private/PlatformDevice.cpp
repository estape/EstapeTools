// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformDevice.h"

void UPlatformDevice::IsWindowsPlatform(bool &ReturnValue)
{
#if PLATFORM_WINDOWS
	ReturnValue =  true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsMacPlatform(bool &ReturnValue)
{
#if PLATFORM_MAC
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsLinuxPlatform(bool& ReturnValue)
{
#if PLATFORM_LINUX
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsAndroidPlatform(bool& ReturnValue)
{
#if PLATFORM_ANDROID
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsIOS_Platform(bool &ReturnValue)
{
#if PLATFORM_IOS
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}

void UPlatformDevice::IsNintendoSwitch(bool &ReturnValue)
{
#if PLATFORM_SWITCH
	ReturnValue = true;
#else
	ReturnValue = false;
#endif
}