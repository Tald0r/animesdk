#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_8A77D15D7EA8B8D3_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F65C0)
#define STRUCT_2_8A77D15D7EA8B8D3_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2F6670)
#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x2F66E0)
#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x2F6750)
#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x2F67C0)
#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_8AEA7B01EF37902B_OFFSET UNITYSDK_OFFSET(0x66F13B0)
#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x2F6820)
#define STRUCT_2_8A77D15D7EA8B8D3_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x66F1230)
#define STRUCT_2_8A77D15D7EA8B8D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3730)

inline static constexpr unsigned int Struct_2_8A77D15D7EA8B8D3_1_TypeDefinitionIndex = 54344;

struct alignas(4) Struct_2_8A77D15D7EA8B8D3_1
{
	static ::Struct_2_8A77D15D7EA8B8D3_1* StaticGet_Field_2_2()
	{
		return (::Struct_2_8A77D15D7EA8B8D3_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_8A77D15D7EA8B8D3_1_TypeDefinitionIndex)->GetStaticField(0xEFF0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_8A77D15D7EA8B8D3_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8A77D15D7EA8B8D3_1))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::Struct_2_8A77D15D7EA8B8D3_1 Method_2_8AEA7B01EF37902B(::System::Int32 a1)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3_1(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_8AEA7B01EF37902B_OFFSET))(a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
