#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7.h"
#include "unitysdk/System/ValueType.h"

class Class_2_18804FF7C23FF19F;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070_METHOD_2_A96E668CBF92D49F_OFFSET UNITYSDK_OFFSET(0x377560)
#define CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070__CTOR_OFFSET UNITYSDK_OFFSET(0x377520)

inline static constexpr unsigned int Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070_TypeDefinitionIndex = 44683;

struct alignas(8) Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070
{
	::Class_1_5DF9D0F5061CCF34_Struct_2_53FD362C258A5DD7 Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_18804FF7C23FF19F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_18804FF7C23FF19F*))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_A96E668CBF92D49F()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF9D0F5061CCF34_STRUCT_2_2821977B557C6070_METHOD_2_A96E668CBF92D49F_OFFSET))(this);
	}
};
