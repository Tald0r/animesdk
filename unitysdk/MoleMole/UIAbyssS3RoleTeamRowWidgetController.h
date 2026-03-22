#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_7415BDF4DA37A88D;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA4B4F90)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA4B5000)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xA4B5100)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4B51F0)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B5290)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA4B52C0)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xA4B5330)
#define MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4B53A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS3RoleTeamRowWidgetController_TypeDefinitionIndex = 69551;

	class UIAbyssS3RoleTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_7415BDF4DA37A88D* get__viewModel()
		{
			return ((::Class_3_7415BDF4DA37A88D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, globalData);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLETEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
