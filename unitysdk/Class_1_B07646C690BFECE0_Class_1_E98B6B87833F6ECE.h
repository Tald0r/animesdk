#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B07646C690BFECE0_CLASS_1_E98B6B87833F6ECE_METHOD_1_50F3036699D6ECDE_OFFSET UNITYSDK_OFFSET(0x6B832E0)
#define CLASS_1_B07646C690BFECE0_CLASS_1_E98B6B87833F6ECE__CTOR_OFFSET UNITYSDK_OFFSET(0x6B832D0)

inline static constexpr unsigned int Class_1_B07646C690BFECE0_Class_1_E98B6B87833F6ECE_TypeDefinitionIndex = 79769;

class Class_1_B07646C690BFECE0_Class_1_E98B6B87833F6ECE : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_CLASS_1_E98B6B87833F6ECE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_50F3036699D6ECDE(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B07646C690BFECE0_CLASS_1_E98B6B87833F6ECE_METHOD_1_50F3036699D6ECDE_OFFSET))(this, a1);
	}
};
