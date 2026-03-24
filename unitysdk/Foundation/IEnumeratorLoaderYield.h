#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

#define FOUNDATION_IENUMERATORLOADERYIELD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AA5DAC0)
#define FOUNDATION_IENUMERATORLOADERYIELD_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1AA5DB80)
#define FOUNDATION_IENUMERATORLOADERYIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5DB70)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoaderYield_TypeDefinitionIndex = 8166;

	class IEnumeratorLoaderYield : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		static ::Foundation::IEnumeratorLoaderYield** StaticGet__instance()
		{
			return (::Foundation::IEnumeratorLoaderYield**)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderYield_TypeDefinitionIndex)->GetStaticField(0x7430);
		}
		::System::Boolean isWaiting; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERYIELD__CTOR_OFFSET))(this);
		}

		static ::Foundation::IEnumeratorLoaderYield* get_Instance()
		{
			return ((::Foundation::IEnumeratorLoaderYield*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERYIELD_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERYIELD_GET_KEEPWAITING_OFFSET))(this);
		}
	};
}
