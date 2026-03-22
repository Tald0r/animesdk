#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }

#define CLASS_1_9F9714D02CA7532C_CLASS_1_5E16F5D9263ACB8B_METHOD_1_1D65F33F525C3E70_OFFSET UNITYSDK_OFFSET(0xA0B8BE0)
#define CLASS_1_9F9714D02CA7532C_CLASS_1_5E16F5D9263ACB8B__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B8BD0)

inline static constexpr unsigned int Class_1_9F9714D02CA7532C_Class_1_5E16F5D9263ACB8B_TypeDefinitionIndex = 78748;

class Class_1_9F9714D02CA7532C_Class_1_5E16F5D9263ACB8B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_5E16F5D9263ACB8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1D65F33F525C3E70(::ConfigTextureColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_5E16F5D9263ACB8B_METHOD_1_1D65F33F525C3E70_OFFSET))(this, a1);
	}
};
