#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xD837FC0)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_2_OFFSET UNITYSDK_OFFSET(0xD8380B0)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD837ED0)
#define MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xD837EC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixParams_TypeDefinitionIndex = 58137;

	class FixParams : public ::System::Object
	{
	public:
		::System::Boolean FixShadowCoverageOutOfFrustume; // 0x10
		::System::Boolean fixShadowCoverageOutOfFrustume; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_1_E7EF6BC52B28648C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_1_OFFSET))(this);
		}

		::System::Void Method_1_E7EF6BC52B28648C_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_2_OFFSET))(this);
		}
	};
}
