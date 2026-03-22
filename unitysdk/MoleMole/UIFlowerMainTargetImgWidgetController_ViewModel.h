#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x9D747A0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D747C0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x9D747B0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9D74880)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetImgWidgetController_ViewModel_TypeDefinitionIndex = 59544;

	class UIFlowerMainTargetImgWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_103<::System::String*>* _ImgPath_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_103<::System::String*>* get_ImgPath()
		{
			return ((::Class_0_16E4307DCC419505_103<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::Class_0_16E4307DCC419505_103<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
