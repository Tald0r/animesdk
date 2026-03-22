#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0xA603BC0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_2CB61A3FE9A71C6A_OFFSET UNITYSDK_OFFSET(0xA603A90)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_1_OFFSET UNITYSDK_OFFSET(0xA6042D0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_OFFSET UNITYSDK_OFFSET(0xA6040B0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA604040)
#define MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0xA604160)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6037A0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6034E0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA603380)
#define MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA604020)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIBlurController_TypeDefinitionIndex = 75091;

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

		::System::Void Method_5_2CB61A3FE9A71C6A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_2CB61A3FE9A71C6A_OFFSET))(this, a1);
		}

		::System::Void Method_5_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_5_3F89C663FA3DE8DE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_OFFSET))(this, a1);
		}

		::System::Void Method_5_BED35D89A6A10D7A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_BED35D89A6A10D7A_OFFSET))(this, a1);
		}

		::System::Void Method_5_3F89C663FA3DE8DE_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_METHOD_5_3F89C663FA3DE8DE_1_OFFSET))(this, a1);
		}
	};
}
