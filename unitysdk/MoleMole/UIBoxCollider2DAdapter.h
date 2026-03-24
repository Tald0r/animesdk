#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class BoxCollider2D; }

#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0xAC3CC60)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0xAC3CCC0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_METHOD_6_4C7352F82D10AD6D_OFFSET UNITYSDK_OFFSET(0xAC3CAF0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0xAC3C8C0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0xAC3CCD0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC3CCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBoxCollider2DAdapter_TypeDefinitionIndex = 54546;

	class UIBoxCollider2DAdapter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::BoxCollider2D* Field_6_0; // 0x18
		::System::Boolean Field_6_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET))(this);
		}

		::System::Boolean get_Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET))(this);
		}

		::System::Void set_Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET))(this, a1);
		}

		::UnityEngine::BoxCollider2D* Method_6_4C7352F82D10AD6D()
		{
			return ((::UnityEngine::BoxCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_METHOD_6_4C7352F82D10AD6D_OFFSET))(this);
		}
	};
}
