#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C31F776B3FE6F486_2;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xADBF690)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xADBF6D0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0xADBF6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageController___c_TypeDefinitionIndex = 71098;

	class UICinemaCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICinemaCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UICinemaCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46010);
		}
		static ::System::Comparison_1<::Class_1_C31F776B3FE6F486_2*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::Class_1_C31F776B3FE6F486_2*>**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenCollectRewardList_b__3_0(::Class_1_C31F776B3FE6F486_2* a, ::Class_1_C31F776B3FE6F486_2* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C31F776B3FE6F486_2*, ::Class_1_C31F776B3FE6F486_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET))(this, a, b);
		}
	};
}
