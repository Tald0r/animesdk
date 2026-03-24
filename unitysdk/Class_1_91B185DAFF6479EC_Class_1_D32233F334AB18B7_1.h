#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91B185DAFF6479EC;
namespace System { class Action; }

#define CLASS_1_91B185DAFF6479EC_CLASS_1_D32233F334AB18B7_1_METHOD_1_FF7B20F133FFB710_OFFSET UNITYSDK_OFFSET(0x19C73A20)
#define CLASS_1_91B185DAFF6479EC_CLASS_1_D32233F334AB18B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C73A10)

inline static constexpr unsigned int Class_1_91B185DAFF6479EC_Class_1_D32233F334AB18B7_1_TypeDefinitionIndex = 17414;

class Class_1_91B185DAFF6479EC_Class_1_D32233F334AB18B7_1 : public ::System::Object
{
public:
	::Class_1_91B185DAFF6479EC* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91B185DAFF6479EC_CLASS_1_D32233F334AB18B7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF7B20F133FFB710(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_91B185DAFF6479EC_CLASS_1_D32233F334AB18B7_1_METHOD_1_FF7B20F133FFB710_OFFSET))(this, a1);
	}
};
