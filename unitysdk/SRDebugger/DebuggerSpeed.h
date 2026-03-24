#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class MyLogger; }

#define SRDEBUGGER_DEBUGGERSPEED_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11B23E40)
#define SRDEBUGGER_DEBUGGERSPEED_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11B23C00)
#define SRDEBUGGER_DEBUGGERSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B239C0)
#define SRDEBUGGER_DEBUGGERSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x11B24080)

namespace SRDebugger
{
	inline static constexpr unsigned int DebuggerSpeed_TypeDefinitionIndex = 84218;

	class DebuggerSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Foundation::MyLogger* logger; // 0x18
		::UnityEngine::Vector3 lastPoint; // 0x20
		::UnityEngine::Vector3 lastPointLate; // 0x2C
		::UnityEngine::Vector3 lastPointFixed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DEBUGGERSPEED__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DEBUGGERSPEED_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DEBUGGERSPEED_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_DEBUGGERSPEED_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
