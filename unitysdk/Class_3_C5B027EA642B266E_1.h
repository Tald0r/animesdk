#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_C5B027EA642B266E_1_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8C24D30)
#define CLASS_3_C5B027EA642B266E_1_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x8C24F00)
#define CLASS_3_C5B027EA642B266E_1_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8C25080)
#define CLASS_3_C5B027EA642B266E_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C250F0)
#define CLASS_3_C5B027EA642B266E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8C25060)

inline static constexpr unsigned int Class_3_C5B027EA642B266E_1_TypeDefinitionIndex = 56298;

class Class_3_C5B027EA642B266E_1 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
