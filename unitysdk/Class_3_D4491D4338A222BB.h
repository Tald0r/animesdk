#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_D4491D4338A222BB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6776D40)
#define CLASS_3_D4491D4338A222BB_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x67771B0)
#define CLASS_3_D4491D4338A222BB_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6777690)
#define CLASS_3_D4491D4338A222BB_METHOD_3_C89900CBCE660733_OFFSET UNITYSDK_OFFSET(0x6777270)
#define CLASS_3_D4491D4338A222BB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6777210)
#define CLASS_3_D4491D4338A222BB_UPDATE_OFFSET UNITYSDK_OFFSET(0x6777030)
#define CLASS_3_D4491D4338A222BB__CTOR_OFFSET UNITYSDK_OFFSET(0x6777190)

inline static constexpr unsigned int Class_3_D4491D4338A222BB_TypeDefinitionIndex = 72077;

class Class_3_D4491D4338A222BB : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_C89900CBCE660733(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_METHOD_3_C89900CBCE660733_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D4491D4338A222BB_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
