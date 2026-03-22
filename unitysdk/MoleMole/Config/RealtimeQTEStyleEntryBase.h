#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_23;
class Class_2_D244C6518E0DA169;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET UNITYSDK_OFFSET(0xCDC0B90)
#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDC0C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RealtimeQTEStyleEntryBase_TypeDefinitionIndex = 36895;

	class RealtimeQTEStyleEntryBase : public ::System::Object
	{
	public:
		::System::String* OverrideHintTextKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_23* GetButtonStyle(::Class_2_D244C6518E0DA169* task)
		{
			return ((::Class_1_43BD383C98B4C0C5_23*(*)(::PVOID, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET))(this, task);
		}
	};
}
