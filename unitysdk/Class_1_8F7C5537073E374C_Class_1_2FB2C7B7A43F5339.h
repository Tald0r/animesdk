#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B;
namespace MoleMole::Config { class ConfigAbilityTargetData; }

#define CLASS_1_8F7C5537073E374C_CLASS_1_2FB2C7B7A43F5339_METHOD_1_379CBCA46F069204_OFFSET UNITYSDK_OFFSET(0x6C69280)
#define CLASS_1_8F7C5537073E374C_CLASS_1_2FB2C7B7A43F5339__CTOR_OFFSET UNITYSDK_OFFSET(0x6C69270)

inline static constexpr unsigned int Class_1_8F7C5537073E374C_Class_1_2FB2C7B7A43F5339_TypeDefinitionIndex = 67310;

class Class_1_8F7C5537073E374C_Class_1_2FB2C7B7A43F5339 : public ::System::Object
{
public:
	::Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_CLASS_1_2FB2C7B7A43F5339__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_379CBCA46F069204(::MoleMole::Config::ConfigAbilityTargetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_CLASS_1_2FB2C7B7A43F5339_METHOD_1_379CBCA46F069204_OFFSET))(this, a1);
	}
};
