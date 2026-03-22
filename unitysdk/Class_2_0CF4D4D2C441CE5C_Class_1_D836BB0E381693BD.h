#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_94AEE9C7114702E7;
namespace System { class String; }

#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_D836BB0E381693BD_METHOD_1_FA2E05F20256220D_OFFSET UNITYSDK_OFFSET(0xD5C0600)
#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_D836BB0E381693BD__CTOR_OFFSET UNITYSDK_OFFSET(0xD5C05F0)

inline static constexpr unsigned int Class_2_0CF4D4D2C441CE5C_Class_1_D836BB0E381693BD_TypeDefinitionIndex = 77950;

class Class_2_0CF4D4D2C441CE5C_Class_1_D836BB0E381693BD : public ::System::Object
{
public:
	::Class_2_94AEE9C7114702E7* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_D836BB0E381693BD__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_FA2E05F20256220D(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_D836BB0E381693BD_METHOD_1_FA2E05F20256220D_OFFSET))(this, a1);
	}
};
