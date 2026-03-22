#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_0CDF082B369A0DD8_Class_1_F6CF446D65DF58A2_3;
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_2961277102F810F9_METHOD_1_8CE1B81864ACB0B1_OFFSET UNITYSDK_OFFSET(0x7ED6FB0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_2961277102F810F9__CTOR_OFFSET UNITYSDK_OFFSET(0x7ED6FA0)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_2961277102F810F9_TypeDefinitionIndex = 55195;

class Class_1_0CDF082B369A0DD8_Class_1_2961277102F810F9 : public ::System::Object
{
public:
	::Class_1_0CDF082B369A0DD8_Class_1_F6CF446D65DF58A2_3* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_2961277102F810F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CE1B81864ACB0B1(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_2961277102F810F9_METHOD_1_8CE1B81864ACB0B1_OFFSET))(this, a1);
	}
};
