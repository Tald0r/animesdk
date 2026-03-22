#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext_EPointLockType.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"

namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace System { class Object; }

#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x73E5FF0)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x73E5F40)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x73E5C60)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x73E51E0)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x73E5860)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x73E5CC0)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x73E6130)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x73E6140)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x73E6150)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x73E6160)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x73E6210)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x73E6270)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapElement_SubAreaContext_TypeDefinitionIndex = 76705;

	class UIThreeDMapElement_SubAreaContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::Int32 TargetSection; // 0x50
		::System::Int32 TargetLayerIndex; // 0x54
		::System::Int32 FromSection; // 0x58
		::System::Int32 TargetFloor; // 0x5C
		::System::Int32 FromLayerIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT__CTOR_OFFSET))(this);
		}

		::Struct_2_032E3093F309FC91 GetWorldPosition()
		{
			return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ISUNLOCK_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::System::Void OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ONSHOWPANEL_OFFSET))(this, fromGroupContext);
		}

		::System::Boolean Equals(::MoleMole::UIThreeDMapElement_SubAreaContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIThreeDMapElement_SubAreaContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType __base_GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::Struct_2_032E3093F309FC91 __base_GetWorldPosition()
		{
			return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean __base_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ISUNLOCK_OFFSET))(this);
		}

		::System::Void __base_OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ONSHOWPANEL_OFFSET))(this, P0);
		}
	};
}
