#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5860E4BC039DC782;
namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_0389E20EE68DEFB0_METHOD_2_8A57E40FCEA0EE0B_OFFSET UNITYSDK_OFFSET(0x387850)

inline static constexpr unsigned int Struct_2_0389E20EE68DEFB0_TypeDefinitionIndex = 55575;

struct alignas(8) Struct_2_0389E20EE68DEFB0
{
	::Class_1_5860E4BC039DC782* Field_2_0; // 0x10

	::MoleMole::Battle::Entity* Method_2_8A57E40FCEA0EE0B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0389E20EE68DEFB0_METHOD_2_8A57E40FCEA0EE0B_OFFSET))(this);
	}
};
