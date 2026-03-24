#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_180;

#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x35BBD0)
#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0x35BC70)
#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x35BBF0)

inline static constexpr unsigned int Struct_2_F4BEA7B577DD61FE_TypeDefinitionIndex = 52322;

struct alignas(8) Struct_2_F4BEA7B577DD61FE
{
	::Class_0_16E4307DCC419505_180* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_AEE8799035F6C4DD_OFFSET))(this);
	}
};
