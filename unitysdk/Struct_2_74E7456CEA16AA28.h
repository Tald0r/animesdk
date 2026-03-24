#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }

#define STRUCT_2_74E7456CEA16AA28_METHOD_2_8768C8B37F10E5D5_OFFSET UNITYSDK_OFFSET(0x3901E0)
#define STRUCT_2_74E7456CEA16AA28_METHOD_2_DB6449FB95F85AB2_OFFSET UNITYSDK_OFFSET(0xA707E80)
#define STRUCT_2_74E7456CEA16AA28__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3901D0)
#define STRUCT_2_74E7456CEA16AA28__CTOR_OFFSET UNITYSDK_OFFSET(0x390020)

inline static constexpr unsigned int Struct_2_74E7456CEA16AA28_TypeDefinitionIndex = 70431;

struct alignas(8) Struct_2_74E7456CEA16AA28
{
	::Nap::NapECS::ComponentMask Field_2_0; // 0x10
	::Nap::NapECS::ComponentMask Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x50
	::System::Boolean Field_2_3; // 0x51

	::System::Void _ctor(::Nap::NapECS::ComponentMask a1, ::Nap::NapECS::ComponentMask a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_74E7456CEA16AA28__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsFilter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_74E7456CEA16AA28__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8768C8B37F10E5D5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_74E7456CEA16AA28_METHOD_2_8768C8B37F10E5D5_OFFSET))(this, a1);
	}

	static ::Struct_2_74E7456CEA16AA28 Method_2_DB6449FB95F85AB2(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::Struct_2_74E7456CEA16AA28(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + STRUCT_2_74E7456CEA16AA28_METHOD_2_DB6449FB95F85AB2_OFFSET))(a1);
	}
};
