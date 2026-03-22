#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralRoleCardRowWidgetController_Context.h"

class Class_2_D89CCC627A66D0AD;

#define CLASS_2_66CC8308C1BCC0BB_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x620B3F0)
#define CLASS_2_66CC8308C1BCC0BB_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x620B430)

inline static constexpr unsigned int Class_2_66CC8308C1BCC0BB_UIGeneralRoleCardRowWidgetControllerContextEx_TypeDefinitionIndex = 64393;

class Class_2_66CC8308C1BCC0BB_UIGeneralRoleCardRowWidgetControllerContextEx : public ::MoleMole::UIGeneralRoleCardRowWidgetController_Context
{
public:
	::Class_2_D89CCC627A66D0AD* avatarItem; // 0x70

	::System::Void _ctor(::System::Int32 robotId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET))(this, robotId);
	}

	::System::Void _ctor_1(::Class_2_D89CCC627A66D0AD* data)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET))(this, data);
	}
};
