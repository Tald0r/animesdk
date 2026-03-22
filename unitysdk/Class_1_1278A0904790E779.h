#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_181A04F78EA47987;

#define CLASS_1_1278A0904790E779_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x99F54A0)
#define CLASS_1_1278A0904790E779_METHOD_1_D45F3289BE80ADD4_OFFSET UNITYSDK_OFFSET(0x99F54E0)
#define CLASS_1_1278A0904790E779__CCTOR_OFFSET UNITYSDK_OFFSET(0x99F5490)
#define CLASS_1_1278A0904790E779__CTOR_OFFSET UNITYSDK_OFFSET(0x99F5480)

inline static constexpr unsigned int Class_1_1278A0904790E779_TypeDefinitionIndex = 69015;

class Class_1_1278A0904790E779 : public ::System::Object
{
public:
	static ::Class_1_181A04F78EA47987** StaticGet_Field_1_0()
	{
		return (::Class_1_181A04F78EA47987**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1278A0904790E779_TypeDefinitionIndex)->GetStaticField(0x44DB0);
	}
	static ::System::Int64* StaticGet_Field_1_1()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1278A0904790E779_TypeDefinitionIndex)->GetStaticField(0x11800);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1278A0904790E779__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1278A0904790E779__CCTOR_OFFSET))();
	}

	static ::Class_1_181A04F78EA47987* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_181A04F78EA47987*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1278A0904790E779_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::Class_1_181A04F78EA47987* Method_1_D45F3289BE80ADD4(::System::Boolean a1)
	{
		return ((::Class_1_181A04F78EA47987*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1278A0904790E779_METHOD_1_D45F3289BE80ADD4_OFFSET))(a1);
	}
};
