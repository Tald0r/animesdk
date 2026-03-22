#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define CLASS_2_7706C62CD327A449_METHOD_2_5003280C46E8BFD9_OFFSET UNITYSDK_OFFSET(0x6E8C3C0)
#define CLASS_2_7706C62CD327A449_METHOD_2_6E8E19E6127F76E6_OFFSET UNITYSDK_OFFSET(0x6E8C3B0)
#define CLASS_2_7706C62CD327A449_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6E8B5F0)
#define CLASS_2_7706C62CD327A449_REFRESHPAGE_OFFSET UNITYSDK_OFFSET(0x6E8B930)
#define CLASS_2_7706C62CD327A449__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8C3A0)

inline static constexpr unsigned int Class_2_7706C62CD327A449_TypeDefinitionIndex = 58972;

class Class_2_7706C62CD327A449 : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate
{
public:
	::System::String* Field_2_1; // 0x60
	::System::Int32 Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449__CTOR_OFFSET))(this);
	}

	::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449_ONUIOPEN_OFFSET))(this, a1);
	}

	::System::Void RefreshPage(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449_REFRESHPAGE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E8E19E6127F76E6(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449_METHOD_2_6E8E19E6127F76E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5003280C46E8BFD9(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_7706C62CD327A449_METHOD_2_5003280C46E8BFD9_OFFSET))(this, a1);
	}
};
