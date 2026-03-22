#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x6211480)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_METHOD_8_78FBED8F1829A87D_OFFSET UNITYSDK_OFFSET(0x6211560)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x62114F0)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x6211D50)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x6211DC0)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x6211DF0)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x6211E80)
#define MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x6211F10)

namespace MoleMole
{
	inline static constexpr unsigned int AutoCenteringGridLayoutGroup_TypeDefinitionIndex = 67924;

	class AutoCenteringGridLayoutGroup : public ::UnityEngine::UI::GridLayoutGroup
	{
	public:
		::System::Int32 Field_8_0; // 0x80
		::System::Int32 Field_8_1; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_GETCOLROW_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int __base_GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_GETCOLROW_OFFSET))(this);
		}

		::System::Void __base_SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void __base_SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP___BASE_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void Method_8_78FBED8F1829A87D(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOCENTERINGGRIDLAYOUTGROUP_METHOD_8_78FBED8F1829A87D_OFFSET))(this, a1);
		}
	};
}
