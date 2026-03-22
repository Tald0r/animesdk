#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/Struct_2_DB1A3536F0DE9E3B.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_1_OFFSET UNITYSDK_OFFSET(0x35D740)
#define STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_OFFSET UNITYSDK_OFFSET(0x35D720)
#define STRUCT_2_C6D051A43E9236F7_METHOD_2_AC6F7F1D171B1249_OFFSET UNITYSDK_OFFSET(0x35D730)
#define STRUCT_2_C6D051A43E9236F7__CTOR_OFFSET UNITYSDK_OFFSET(0x35D710)

inline static constexpr unsigned int Struct_2_C6D051A43E9236F7_TypeDefinitionIndex = 38024;

struct alignas(8) Struct_2_C6D051A43E9236F7
{
	::System::UInt32 Field_2_0; // 0x10
	::Struct_2_DB1A3536F0DE9E3B Field_2_1; // 0x18
	::ProtoScript::HollowEntityType Field_2_2; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::ProtoScript::HollowEntityType a2, ::Struct_2_DB1A3536F0DE9E3B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ProtoScript::HollowEntityType, ::Struct_2_DB1A3536F0DE9E3B&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Void Method_2_4165C3F268304544(::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_AC6F7F1D171B1249(::Class_1_5DF9D0F5061CCF34_Struct_2_F25D232C7C16AF6F& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_F25D232C7C16AF6F&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_AC6F7F1D171B1249_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_4165C3F268304544_1(::Class_1_5DF9D0F5061CCF34_Struct_2_F25D232C7C16AF6F& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_F25D232C7C16AF6F&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_1_OFFSET))(this, a1);
	}
	*/
};
