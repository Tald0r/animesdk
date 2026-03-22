#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace MoleMole { class UIDevFlowerArrangementRowWidgetController_Data; }
template <typename T> class Class_0_16E4307DCC419505_119;
template <typename T> class Class_0_16E4307DCC41950C_11;

#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_CURRENTSCROLLVIEWDATA_OFFSET UNITYSDK_OFFSET(0xA8EE220)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_TABSTATE_OFFSET UNITYSDK_OFFSET(0xA8EE240)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA8EE260)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_CURRENTSCROLLVIEWDATA_OFFSET UNITYSDK_OFFSET(0xA8EE230)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_TABSTATE_OFFSET UNITYSDK_OFFSET(0xA8EE250)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA8EE320)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevFlowerArrangementPageController_ViewModel_TypeDefinitionIndex = 43271;

	class UIDevFlowerArrangementPageController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_119<::MoleMole::UI::FlowerShop::ESlotType>* _TabState_k__BackingField; // 0x60
		::Class_0_16E4307DCC41950C_11<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* _CurrentScrollViewData_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_11<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* get_CurrentScrollViewData()
		{
			return ((::Class_0_16E4307DCC41950C_11<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_CURRENTSCROLLVIEWDATA_OFFSET))(this);
		}

		::System::Void set_CurrentScrollViewData(::Class_0_16E4307DCC41950C_11<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_11<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_CURRENTSCROLLVIEWDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_119<::MoleMole::UI::FlowerShop::ESlotType>* get_TabState()
		{
			return ((::Class_0_16E4307DCC419505_119<::MoleMole::UI::FlowerShop::ESlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_TABSTATE_OFFSET))(this);
		}

		::System::Void set_TabState(::Class_0_16E4307DCC419505_119<::MoleMole::UI::FlowerShop::ESlotType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_119<::MoleMole::UI::FlowerShop::ESlotType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_TABSTATE_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
