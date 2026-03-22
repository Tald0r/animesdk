#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
namespace System { class Action; }

#define CLASS_1_D1A39248C7FD4396_CLASS_1_9D2F81203DE912CA_METHOD_1_AA82B90F226D547D_OFFSET UNITYSDK_OFFSET(0xE6F2660)
#define CLASS_1_D1A39248C7FD4396_CLASS_1_9D2F81203DE912CA__CTOR_OFFSET UNITYSDK_OFFSET(0xE6F2650)

inline static constexpr unsigned int Class_1_D1A39248C7FD4396_Class_1_9D2F81203DE912CA_TypeDefinitionIndex = 59846;

class Class_1_D1A39248C7FD4396_Class_1_9D2F81203DE912CA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_CLASS_1_9D2F81203DE912CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA82B90F226D547D(::ConfigMainCityObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*))((::PBYTE)hIl2Cpp + CLASS_1_D1A39248C7FD4396_CLASS_1_9D2F81203DE912CA_METHOD_1_AA82B90F226D547D_OFFSET))(this, a1);
	}
};
