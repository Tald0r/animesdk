#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NapBehaviorTreeReference.h"

#define MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BDE40)
#define MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE__DOCUSTOMLOAD_OFFSET UNITYSDK_OFFSET(0xB3BDBB0)
#define MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE___BASE__DOCUSTOMLOAD_OFFSET UNITYSDK_OFFSET(0xB3BDE80)

namespace MoleMole
{
	inline static constexpr unsigned int NapArcanaBehaviourTreeReference_TypeDefinitionIndex = 40968;

	class NapArcanaBehaviourTreeReference : public ::MoleMole::NapBehaviorTreeReference
	{
	public:
		::System::Int32 Position; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoCustomLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE__DOCUSTOMLOAD_OFFSET))(this);
		}

		::System::Boolean __base__DoCustomLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPARCANABEHAVIOURTREEREFERENCE___BASE__DOCUSTOMLOAD_OFFSET))(this);
		}
	};
}
