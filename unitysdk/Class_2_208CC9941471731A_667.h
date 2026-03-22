#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6C71F0705B90B641.h"
#include "unitysdk/Struct_2_54D366F3BB5CD225_14.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_667_METHOD_2_2FE14E9DDA8EF9CA_OFFSET UNITYSDK_OFFSET(0x1586A8D0)
#define CLASS_2_208CC9941471731A_667__CTOR_OFFSET UNITYSDK_OFFSET(0x1586A8C0)

inline static constexpr unsigned int Class_2_208CC9941471731A_667_TypeDefinitionIndex = 14217;

class Class_2_208CC9941471731A_667 : public ::Class_1_6C71F0705B90B641
{
public:
	::System::Void _ctor(::Struct_2_54D366F3BB5CD225_14 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_54D366F3BB5CD225_14, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_667__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2FE14E9DDA8EF9CA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_667_METHOD_2_2FE14E9DDA8EF9CA_OFFSET))(this);
	}
};
