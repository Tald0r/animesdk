#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace System { class String; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_C81C4763DAE3B04B_METHOD_1_7524E3B4C8593A79_OFFSET UNITYSDK_OFFSET(0x905EDA0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_C81C4763DAE3B04B__CTOR_OFFSET UNITYSDK_OFFSET(0x905ED90)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_C81C4763DAE3B04B_TypeDefinitionIndex = 39517;

class Class_1_0CDF082B369A0DD8_Class_1_C81C4763DAE3B04B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_C81C4763DAE3B04B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7524E3B4C8593A79(::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_C81C4763DAE3B04B_METHOD_1_7524E3B4C8593A79_OFFSET))(this, a1);
	}
};
