#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }

#define CLASS_1_56FC5342C3EBE897_CLASS_1_B142291461BDCFDE_METHOD_1_CC2802BFF7C61DA0_OFFSET UNITYSDK_OFFSET(0x8FA62C0)
#define CLASS_1_56FC5342C3EBE897_CLASS_1_B142291461BDCFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA62B0)

inline static constexpr unsigned int Class_1_56FC5342C3EBE897_Class_1_B142291461BDCFDE_TypeDefinitionIndex = 55921;

class Class_1_56FC5342C3EBE897_Class_1_B142291461BDCFDE : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_CLASS_1_B142291461BDCFDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC2802BFF7C61DA0(::MoleMole::ConfigInLevelCustomized* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigInLevelCustomized*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_CLASS_1_B142291461BDCFDE_METHOD_1_CC2802BFF7C61DA0_OFFSET))(this, a1);
	}
};
