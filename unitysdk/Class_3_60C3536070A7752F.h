#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_60C3536070A7752F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9EC10C0)
#define CLASS_3_60C3536070A7752F_METHOD_3_3C26D5DDEE9325CF_OFFSET UNITYSDK_OFFSET(0x9EC2C50)
#define CLASS_3_60C3536070A7752F_METHOD_3_51AF736DC628E426_OFFSET UNITYSDK_OFFSET(0x9EC1E70)
#define CLASS_3_60C3536070A7752F_METHOD_3_57E9548C06D30454_OFFSET UNITYSDK_OFFSET(0x9EC1310)
#define CLASS_3_60C3536070A7752F_METHOD_3_88AE33360A2E2D2A_OFFSET UNITYSDK_OFFSET(0x9EC2500)
#define CLASS_3_60C3536070A7752F_METHOD_3_A685DFBB4ABE68DC_OFFSET UNITYSDK_OFFSET(0x9EC17C0)
#define CLASS_3_60C3536070A7752F_METHOD_3_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x9EC2D80)
#define CLASS_3_60C3536070A7752F_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x9EC1750)
#define CLASS_3_60C3536070A7752F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9EC2490)
#define CLASS_3_60C3536070A7752F__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC12F0)

inline static constexpr unsigned int Class_3_60C3536070A7752F_TypeDefinitionIndex = 60501;

class Class_3_60C3536070A7752F : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_57E9548C06D30454(::UnityEngine::GameObject* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_57E9548C06D30454_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_A685DFBB4ABE68DC(::UnityEngine::GameObject* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_A685DFBB4ABE68DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_51AF736DC628E426(::UnityEngine::Vector3 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_51AF736DC628E426_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_88AE33360A2E2D2A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_88AE33360A2E2D2A_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C26D5DDEE9325CF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_3C26D5DDEE9325CF_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_METHOD_3_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}
};
