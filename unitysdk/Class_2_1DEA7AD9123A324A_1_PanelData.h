#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class UIWidgetGroup;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1DEA7AD9123A324A_1_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDC2DE20)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_1_PanelData_TypeDefinitionIndex = 50443;

class Class_2_1DEA7AD9123A324A_1_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Action* OnReset; // 0x28
	::System::Func_2<::UIWidgetGroup*, ::UnityEngine::RectTransform*>* CreateAvatarGroup; // 0x30
	::System::Boolean IsOnlyOne; // 0x38
	::System::Boolean OpenSelectBuddy; // 0x39
	::System::Int32 InitTab; // 0x3C
	::System::Int32 SelectId; // 0x40
	::System::Int32 LayerIndex; // 0x44
	::System::Int32 ZoneID; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_PANELDATA__CTOR_OFFSET))(this);
	}
};
