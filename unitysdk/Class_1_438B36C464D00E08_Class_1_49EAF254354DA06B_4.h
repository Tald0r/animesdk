#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_438B36C464D00E08;
namespace System { class Action; }

#define CLASS_1_438B36C464D00E08_CLASS_1_49EAF254354DA06B_4_METHOD_1_A6EA7B899860F000_OFFSET UNITYSDK_OFFSET(0x178A0300)
#define CLASS_1_438B36C464D00E08_CLASS_1_49EAF254354DA06B_4__CTOR_OFFSET UNITYSDK_OFFSET(0x178A02F0)

inline static constexpr unsigned int Class_1_438B36C464D00E08_Class_1_49EAF254354DA06B_4_TypeDefinitionIndex = 9908;

class Class_1_438B36C464D00E08_Class_1_49EAF254354DA06B_4 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_438B36C464D00E08* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_438B36C464D00E08_CLASS_1_49EAF254354DA06B_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6EA7B899860F000(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_438B36C464D00E08_CLASS_1_49EAF254354DA06B_4_METHOD_1_A6EA7B899860F000_OFFSET))(this, a1);
	}
};
