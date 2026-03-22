#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F8929A451A484D1_Struct_2_8278D392E25D1AF7.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class VehicleSplinePath; }

#define STRUCT_2_FEBD39112B78007F_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x362500)
#define STRUCT_2_FEBD39112B78007F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x362470)

inline static constexpr unsigned int Struct_2_FEBD39112B78007F_TypeDefinitionIndex = 38063;

struct alignas(8) Struct_2_FEBD39112B78007F
{
	::MoleMole::VehicleSplinePath* Field_2_0; // 0x10
	::Class_1_9F8929A451A484D1_Struct_2_8278D392E25D1AF7 Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEBD39112B78007F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEBD39112B78007F_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}
};
