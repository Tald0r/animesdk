#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;

#define CLASS_2_CF4011205D896138_METHOD_2_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0xA951EA0)
#define CLASS_2_CF4011205D896138_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xA9521F0)
#define CLASS_2_CF4011205D896138_ONEVENT_OFFSET UNITYSDK_OFFSET(0xA951DC0)
#define CLASS_2_CF4011205D896138__CCTOR_OFFSET UNITYSDK_OFFSET(0xA951CC0)
#define CLASS_2_CF4011205D896138__CTOR_OFFSET UNITYSDK_OFFSET(0xA9521E0)

inline static constexpr unsigned int Class_2_CF4011205D896138_TypeDefinitionIndex = 76020;

class Class_2_CF4011205D896138 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_CF4011205D896138*>
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CF4011205D896138__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF4011205D896138__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_CF4011205D896138_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_CF4011205D896138_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CF4011205D896138_METHOD_2_56FD732C92374785_OFFSET))(this, a1);
	}
};
