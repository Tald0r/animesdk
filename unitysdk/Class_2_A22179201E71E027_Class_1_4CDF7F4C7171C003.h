#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A22179201E71E027;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A22179201E71E027_CLASS_1_4CDF7F4C7171C003_METHOD_1_7C986E3AFB1418C8_OFFSET UNITYSDK_OFFSET(0x14EF7B90)
#define CLASS_2_A22179201E71E027_CLASS_1_4CDF7F4C7171C003__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF7B80)

inline static constexpr unsigned int Class_2_A22179201E71E027_Class_1_4CDF7F4C7171C003_TypeDefinitionIndex = 60887;

class Class_2_A22179201E71E027_Class_1_4CDF7F4C7171C003 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_2; // 0x10
	::Class_2_A22179201E71E027* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_CLASS_1_4CDF7F4C7171C003__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C986E3AFB1418C8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_CLASS_1_4CDF7F4C7171C003_METHOD_1_7C986E3AFB1418C8_OFFSET))(this, a1);
	}
};
