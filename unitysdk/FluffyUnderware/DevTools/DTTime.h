#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1A8045D0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_TIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1A8045B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_INITIALIZEEDITORTIME_OFFSET UNITYSDK_OFFSET(0x1A804620)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_UPDATEEDITORTIME_OFFSET UNITYSDK_OFFSET(0x1A804660)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTTime_TypeDefinitionIndex = 25328;

	class DTTime : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__EditorDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DTTime_TypeDefinitionIndex)->GetStaticField(0x4830);
		}
		static ::System::Single* StaticGet__EditorLastTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DTTime_TypeDefinitionIndex)->GetStaticField(0x4834);
		}

		static ::System::Double get_TimeSinceStartup()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_TIMESINCESTARTUP_OFFSET))();
		}

		static ::System::Single get_deltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_DELTATIME_OFFSET))();
		}

		static ::System::Void InitializeEditorTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_INITIALIZEEDITORTIME_OFFSET))();
		}

		static ::System::Void UpdateEditorTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_UPDATEEDITORTIME_OFFSET))();
		}
	};
}
