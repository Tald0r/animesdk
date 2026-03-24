#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }

#define CLASS_1_4F1D452C628E12FE_CLASS_1_91471EA0D0F2EF9C_METHOD_1_BB2336AA750D1B59_OFFSET UNITYSDK_OFFSET(0x9216690)
#define CLASS_1_4F1D452C628E12FE_CLASS_1_91471EA0D0F2EF9C__CTOR_OFFSET UNITYSDK_OFFSET(0x9216680)

inline static constexpr unsigned int Class_1_4F1D452C628E12FE_Class_1_91471EA0D0F2EF9C_TypeDefinitionIndex = 46553;

class Class_1_4F1D452C628E12FE_Class_1_91471EA0D0F2EF9C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_91471EA0D0F2EF9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BB2336AA750D1B59(::MoleMole::Config::ConfigBattlePhotoActivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBattlePhotoActivity*))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_91471EA0D0F2EF9C_METHOD_1_BB2336AA750D1B59_OFFSET))(this, a1);
	}
};
