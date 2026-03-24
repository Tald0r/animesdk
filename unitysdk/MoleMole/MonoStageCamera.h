#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }

#define MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET UNITYSDK_OFFSET(0xB9A6A50)
#define MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0xB9A6670)
#define MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET UNITYSDK_OFFSET(0xB9A6660)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0xB9A6720)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xB9A6AD0)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0xB9A6E60)
#define MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageCamera_TypeDefinitionIndex = 49955;

	class MonoStageCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Field_5_0; // 0x18
		::System::String* followName; // 0x20
		::System::String* lookAtName; // 0x28
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
		::System::Boolean Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_TransformName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET))(this);
		}

		::System::Void ActiveCam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET))(this, a1);
		}

		::System::Void Method_5_3574512695A597AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_3574512695A597AB_OFFSET))(this);
		}

		::System::Void Method_5_CEBFF096B4C9D46B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_CEBFF096B4C9D46B_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}
	};
}
