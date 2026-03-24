#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4887550F1C8031EC_OFFSET UNITYSDK_OFFSET(0x9067950)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x90678A0)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9067AF0)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_FD726A0649427431_OFFSET UNITYSDK_OFFSET(0x9067A20)
#define STRUCT_2_7C8E2107D1B89BE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x90677D0)

inline static constexpr unsigned int Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex = 72007;

struct alignas(1) Struct_2_7C8E2107D1B89BE2
{
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex)->GetStaticField(0x447B0);
	}
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex)->GetStaticField(0x10DA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_2_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Boolean Method_2_4887550F1C8031EC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4887550F1C8031EC_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_FD726A0649427431(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_FD726A0649427431_OFFSET))(a1);
	}

	static ::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_D0BD1377F2594D33_OFFSET))();
	}
};
