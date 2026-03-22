#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_102;
template <typename T> class Class_0_16E4307DCC419505_119;

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x80790A0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8079240)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x80792C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController_ViewModel_TypeDefinitionIndex = 51092;

	class UIFlowerShopNewGuestPopWindowController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_119<::System::Int32>* PopID; // 0x60
		::Class_0_16E4307DCC419505_102<::System::Boolean>* ShowAccess; // 0x68
		::Class_0_16E4307DCC419505_119<::System::Int32>* AccessID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET))(this);
		}
	};
}
