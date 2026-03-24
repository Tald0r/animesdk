#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0xA7EDF80)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_2CB61A3FE9A71C6A_OFFSET UNITYSDK_OFFSET(0xA7EDE50)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_1_OFFSET UNITYSDK_OFFSET(0xA7EE4B0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_OFFSET UNITYSDK_OFFSET(0xA7EE400)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA7EE560)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0xA7EE5D0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7EDB60)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA7ED8A0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA7ED740)
#define MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EE3E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIBlurController_TypeDefinitionIndex = 72189;

	class MonoUIBlurController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean needGraphicRaycast; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* affectTrans; // 0x20
		::System::Int32 Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleEvents(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET))(this, a1);
		}

		::System::Void Method_5_3F89C663FA3DE8DE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_OFFSET))(this, a1);
		}

		::System::Void Method_5_3F89C663FA3DE8DE_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_2CB61A3FE9A71C6A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_2CB61A3FE9A71C6A_OFFSET))(this, a1);
		}

		::System::Void Method_5_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_5_BED35D89A6A10D7A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET))(this, a1);
		}
	};
}
