#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0F73B6F7B9295156;
namespace System { class Action; }

#define CLASS_1_0F73B6F7B9295156_CLASS_1_D915798117836AAD_METHOD_1_7218E194D924463E_OFFSET UNITYSDK_OFFSET(0x16CC1720)
#define CLASS_1_0F73B6F7B9295156_CLASS_1_D915798117836AAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC1710)

inline static constexpr unsigned int Class_1_0F73B6F7B9295156_Class_1_D915798117836AAD_TypeDefinitionIndex = 9878;

class Class_1_0F73B6F7B9295156_Class_1_D915798117836AAD : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_0F73B6F7B9295156* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F73B6F7B9295156_CLASS_1_D915798117836AAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7218E194D924463E(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_0F73B6F7B9295156_CLASS_1_D915798117836AAD_METHOD_1_7218E194D924463E_OFFSET))(this, a1);
	}
};
