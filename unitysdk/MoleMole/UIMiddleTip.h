#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/TipShowObj.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xCFCE680)
#define MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCE4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiddleTip_TypeDefinitionIndex = 40242;

	class UIMiddleTip : public ::MoleMole::TipShowObj
	{
	public:
		::System::String* Icon; // 0x30
		::System::String* ExtraMessage; // 0x38
		::System::String* message; // 0x40
		::System::Boolean IsCanceled; // 0x48
		::System::Boolean ShowIcon; // 0x49
		::System::Boolean ShowMainMessage; // 0x4A

		::System::Void _ctor(::System::Int32 tiPid, ::Enum_3_205E43D40B9E7AEA page, ::System::Action* finishAction, ::System::String* debugText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205E43D40B9E7AEA, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP__CTOR_OFFSET))(this, tiPid, page, finishAction, debugText);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIDDLETIP_ONPROCESS_OFFSET))(this);
		}
	};
}
