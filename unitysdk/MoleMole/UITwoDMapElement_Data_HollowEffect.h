#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_192;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x7BDE400)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0x7BDE250)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x7BDE1E0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x7BDE330)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET UNITYSDK_OFFSET(0x7BDE160)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x7BDE240)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x7BDE4E0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDE170)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0x7BDE520)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_HollowEffect_TypeDefinitionIndex = 69689;

	class UITwoDMapElement_Data_HollowEffect : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Int32 _id; // 0x58
		::UnityEngine::Vector2 Offset2; // 0x5C
		::UnityEngine::Vector2 Offset; // 0x64

		::System::Void _ctor(::System::Int32 id, ::Class_0_16E4307DCC419505_192* posProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_192*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET))(this, id, posProvider);
		}

		::System::Boolean get_ForceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET))(this);
		}

		::Enum_3_6A96CF8852C977C2 GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET))(this);
		}

		::System::Single GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Single __base_GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET))(this);
		}
	};
}
