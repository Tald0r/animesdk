#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data_StreetIcon.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_355;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x880EF40)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x880EE40)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x880EEA0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x880F020)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x880F060)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x880EE30)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x880F0C0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x880F0D0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x880F130)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x880F140)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_StreetName_TypeDefinitionIndex = 78851;

	class UITwoDMapElement_Data_StreetName : public ::MoleMole::UITwoDMapElement_Data_StreetIcon
	{
	public:
		::System::Void _ctor(::System::Int32 streetId, ::System::Single rate, ::Class_0_16E4307DCC419505_355* posProvider, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>* onScrollTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_0_16E4307DCC419505_355*, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME__CTOR_OFFSET))(this, streetId, rate, posProvider, onScrollTo);
		}

		::Enum_3_6A96CF8852C977C2 GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GETICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Boolean ShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME_SHOWPROGRESS_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* __base_CreateUIController(::MoleMole::UIWindowController* P0, ::UnityEngine::Transform* P1)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_CREATEUICONTROLLER_OFFSET))(this, P0, P1);
		}

		::Enum_3_6A96CF8852C977C2 __base_GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_GETICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 __base_GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_GETOFFSETPOSITION_OFFSET))(this);
		}

		::System::Boolean __base_ShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETNAME___BASE_SHOWPROGRESS_OFFSET))(this);
		}
	};
}
