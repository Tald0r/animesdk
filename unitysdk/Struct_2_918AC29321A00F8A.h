#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_918AC29321A00F8A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x35AA70)
#define STRUCT_2_918AC29321A00F8A_METHOD_2_61621BA49FB90589_OFFSET UNITYSDK_OFFSET(0x35A800)
#define STRUCT_2_918AC29321A00F8A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x35A960)

inline static constexpr unsigned int Struct_2_918AC29321A00F8A_TypeDefinitionIndex = 44847;

struct alignas(8) Struct_2_918AC29321A00F8A
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void Method_2_61621BA49FB90589(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_918AC29321A00F8A_METHOD_2_61621BA49FB90589_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_918AC29321A00F8A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_918AC29321A00F8A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
