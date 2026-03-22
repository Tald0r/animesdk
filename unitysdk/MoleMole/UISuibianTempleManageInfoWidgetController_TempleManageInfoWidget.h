#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

class Class_2_1E89A1A01EA84819;
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_11;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC3CA920)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CAA40)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 51374;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_103<::System::Int32>* InitSelectProductID; // 0x60
		::Class_0_16E4307DCC419505_103<::System::UInt32>* GoodShelveID; // 0x68
		::Class_0_16E4307DCC419505_103<::System::UInt32>* CurrentBenchID; // 0x70
		::Class_0_16E4307DCC41950C_11<::Class_2_1E89A1A01EA84819*>* ProductCanShowList; // 0x78
		::Class_0_16E4307DCC41950C_11<::System::Int32>* ProductIDList; // 0x80
		::Class_0_16E4307DCC419505_103<::System::Int32>* CurSelectProductID; // 0x88

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
