#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xB9C2670)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_2_OFFSET UNITYSDK_OFFSET(0xB9C2760)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB9C2580)
#define MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C2570)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixParams_TypeDefinitionIndex = 38723;

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
