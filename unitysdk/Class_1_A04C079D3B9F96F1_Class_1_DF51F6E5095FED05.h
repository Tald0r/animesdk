#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System { class Action; }

#define CLASS_1_A04C079D3B9F96F1_CLASS_1_DF51F6E5095FED05_METHOD_1_1BF7E5B54171ABAC_OFFSET UNITYSDK_OFFSET(0x89BCB80)
#define CLASS_1_A04C079D3B9F96F1_CLASS_1_DF51F6E5095FED05__CTOR_OFFSET UNITYSDK_OFFSET(0x89BCB70)

inline static constexpr unsigned int Class_1_A04C079D3B9F96F1_Class_1_DF51F6E5095FED05_TypeDefinitionIndex = 67197;

class Class_1_A04C079D3B9F96F1_Class_1_DF51F6E5095FED05 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_CLASS_1_DF51F6E5095FED05__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1BF7E5B54171ABAC(::MoleMole::Config::ConfigMaterialPropertyExclusivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_CLASS_1_DF51F6E5095FED05_METHOD_1_1BF7E5B54171ABAC_OFFSET))(this, a1);
	}
};
