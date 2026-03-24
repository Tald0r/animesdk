#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_8A77D15D7EA8B8D3_EQUALS_OFFSET UNITYSDK_OFFSET(0x780950)
#define STRUCT_2_8A77D15D7EA8B8D3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x780A00)
#define STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x780B30)
#define STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x780BA0)
#define STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x780A70)
#define STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_8AEA7B01EF37902B_OFFSET UNITYSDK_OFFSET(0x1566F940)
#define STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x780AD0)
#define STRUCT_2_8A77D15D7EA8B8D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566F840)
#define STRUCT_2_8A77D15D7EA8B8D3__CTOR_OFFSET UNITYSDK_OFFSET(0x2F3C30)

inline static constexpr unsigned int Struct_2_8A77D15D7EA8B8D3_TypeDefinitionIndex = 60280;

struct alignas(4) Struct_2_8A77D15D7EA8B8D3
{
	static ::Struct_2_8A77D15D7EA8B8D3* StaticGet_Field_2_2()
	{
		return (::Struct_2_8A77D15D7EA8B8D3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_8A77D15D7EA8B8D3_TypeDefinitionIndex)->GetStaticField(0xB8B0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::Struct_2_8A77D15D7EA8B8D3 Method_2_8AEA7B01EF37902B(::System::Int32 a1)
	{
		return ((::Struct_2_8A77D15D7EA8B8D3(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_8AEA7B01EF37902B_OFFSET))(a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_8A77D15D7EA8B8D3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8A77D15D7EA8B8D3))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
