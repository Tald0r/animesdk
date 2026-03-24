#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

class Class_2_1E89A1A01EA84819;
template <typename T> class Class_0_16E4307DCC419505_118;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA462960)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA462A80)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 40176;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_118<::Class_2_1E89A1A01EA84819*>* ProductCanShowList; // 0x60
		::Class_0_16E4307DCC41950C_13<::System::UInt32>* GoodShelveID; // 0x68
		::Class_0_16E4307DCC41950C_13<::System::Int32>* InitSelectProductID; // 0x70
		::Class_0_16E4307DCC419505_118<::System::Int32>* ProductIDList; // 0x78
		::Class_0_16E4307DCC41950C_13<::System::UInt32>* CurrentBenchID; // 0x80
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurSelectProductID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
