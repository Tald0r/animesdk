#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_14986121AA61AD99;

#define STRUCT_2_D7BBF3D08EB22E21_METHOD_2_9E577AC94BCF5F38_OFFSET UNITYSDK_OFFSET(0x384C40)
#define STRUCT_2_D7BBF3D08EB22E21__CTOR_OFFSET UNITYSDK_OFFSET(0x384C30)

inline static constexpr unsigned int Struct_2_D7BBF3D08EB22E21_TypeDefinitionIndex = 44544;

struct alignas(8) Struct_2_D7BBF3D08EB22E21
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + STRUCT_2_D7BBF3D08EB22E21__CTOR_OFFSET))(this, a1);
	}

	::Class_2_14986121AA61AD99* Method_2_9E577AC94BCF5F38()
	{
		return ((::Class_2_14986121AA61AD99*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D7BBF3D08EB22E21_METHOD_2_9E577AC94BCF5F38_OFFSET))(this);
	}
};
