#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoMatCapController_Enum_3_9E05E5737F183BD3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_MONOMATCAPCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x67BED50)
#define MOLEMOLE_MONOMATCAPCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x67BF280)
#define MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x67BFCB0)
#define MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_C41F5AE2DBAF3553_OFFSET UNITYSDK_OFFSET(0x67BF120)
#define MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_CD5EE90A9C78A32C_OFFSET UNITYSDK_OFFSET(0x67BFBD0)
#define MOLEMOLE_MONOMATCAPCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x67BF210)
#define MOLEMOLE_MONOMATCAPCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x67BEF00)
#define MOLEMOLE_MONOMATCAPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x67BFD10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMatCapController_TypeDefinitionIndex = 73564;

	class MonoMatCapController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* Field_5_0; // 0x18
		::MoleMole::MonoMatCapController_Enum_3_9E05E5737F183BD3 Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x24
		::UnityEngine::Texture* Field_5_3; // 0x28
		::UnityEngine::Texture* Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::UnityEngine::Color Field_5_6; // 0x3C
		::System::Single Field_5_7; // 0x4C
		::System::Single Field_5_8; // 0x50
		::System::Single Field_5_9; // 0x54
		::System::Single Field_5_10; // 0x58
		::System::Single Field_5_11; // 0x5C
		::System::Single Field_5_12; // 0x60
		::System::Single Field_5_13; // 0x64
		::UnityEngine::Color Field_5_14; // 0x68
		::System::Single Field_5_15; // 0x78
		::System::Int32 Field_5_16; // 0x7C
		::System::Int32 Field_5_17; // 0x80
		::System::Int32 Field_5_18; // 0x84
		::System::Int32 Field_5_19; // 0x88
		::System::Int32 Field_5_20; // 0x8C
		::System::Int32 Field_5_21; // 0x90
		::System::Int32 Field_5_22; // 0x94
		::System::Int32 Field_5_23; // 0x98
		::System::Int32 Field_5_24; // 0x9C
		::System::Int32 Field_5_25; // 0xA0
		::System::Int32 Field_5_26; // 0xA4
		::System::Int32 Field_5_27; // 0xA8
		::System::Int32 Field_5_28; // 0xAC
		::System::Int32 Field_5_29; // 0xB0
		::System::Int32 Field_5_30; // 0xB4
		::System::Boolean Field_5_31; // 0xB8
		::System::Single Field_5_32; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::MoleMole::MonoMatCapController_Enum_3_9E05E5737F183BD3 Method_5_C41F5AE2DBAF3553(::UnityEngine::Material* a1)
		{
			return ((::MoleMole::MonoMatCapController_Enum_3_9E05E5737F183BD3(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_C41F5AE2DBAF3553_OFFSET))(this, a1);
		}

		::MoleMole::MonoMatCapController_Enum_3_9E05E5737F183BD3 Method_5_CD5EE90A9C78A32C()
		{
			return ((::MoleMole::MonoMatCapController_Enum_3_9E05E5737F183BD3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_CD5EE90A9C78A32C_OFFSET))(this);
		}

		::System::Single Method_5_3150507749BCEAEC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATCAPCONTROLLER_METHOD_5_3150507749BCEAEC_OFFSET))(this);
		}
	};
}
