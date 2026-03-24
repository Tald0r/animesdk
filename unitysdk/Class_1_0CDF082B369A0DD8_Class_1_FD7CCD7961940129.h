#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class String; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_FD7CCD7961940129_METHOD_1_8353D9DA7B633CE6_OFFSET UNITYSDK_OFFSET(0x767E830)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_FD7CCD7961940129__CTOR_OFFSET UNITYSDK_OFFSET(0x767E820)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_FD7CCD7961940129_TypeDefinitionIndex = 39513;

class Class_1_0CDF082B369A0DD8_Class_1_FD7CCD7961940129 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_2; // 0x18
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_FD7CCD7961940129__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8353D9DA7B633CE6(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_FD7CCD7961940129_METHOD_1_8353D9DA7B633CE6_OFFSET))(this, a1);
	}
};
