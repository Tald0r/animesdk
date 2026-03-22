#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace MoleMole { class UIFashionStoreKeyRowTrackItemWidgetController_Data; }
template <typename T> class Class_0_16E4307DCC41950C_11;

#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_GET_NOTEDATAS_OFFSET UNITYSDK_OFFSET(0xCAAFD90)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCAAFDB0)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_SET_NOTEDATAS_OFFSET UNITYSDK_OFFSET(0xCAAFDA0)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAAFE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyRowTrackWidgetController_ViewModel_TypeDefinitionIndex = 59718;

	class UIFashionStoreKeyRowTrackWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_11<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* _NoteDatas_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_11<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* get_NoteDatas()
		{
			return ((::Class_0_16E4307DCC41950C_11<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_GET_NOTEDATAS_OFFSET))(this);
		}

		::System::Void set_NoteDatas(::Class_0_16E4307DCC41950C_11<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_11<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_SET_NOTEDATAS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
