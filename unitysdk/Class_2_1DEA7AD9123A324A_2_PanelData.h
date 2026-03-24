#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CLASS_2_1DEA7AD9123A324A_2_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6145250)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_2_PanelData_TypeDefinitionIndex = 61980;

class Class_2_1DEA7AD9123A324A_2_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Int32 NodeId; // 0x28
	::System::Int32 SelectId; // 0x2C
	::System::Boolean IsOnlyOne; // 0x30
	::System::Boolean IsSelectBuddy; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_2_PANELDATA__CTOR_OFFSET))(this);
	}
};
