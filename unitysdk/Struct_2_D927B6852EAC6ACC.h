#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D927B6852EAC6ACC_METHOD_2_7CEB85D998FE3D88_OFFSET UNITYSDK_OFFSET(0xBA8F830)
#define STRUCT_2_D927B6852EAC6ACC_METHOD_2_B02B3E8B4A712563_OFFSET UNITYSDK_OFFSET(0xBA8F7A0)
#define STRUCT_2_D927B6852EAC6ACC__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA8F760)

inline static constexpr unsigned int Struct_2_D927B6852EAC6ACC_TypeDefinitionIndex = 73429;

struct alignas(4) Struct_2_D927B6852EAC6ACC
{
	static ::Struct_2_D927B6852EAC6ACC* StaticGet_Field_2_0()
	{
		return (::Struct_2_D927B6852EAC6ACC*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D927B6852EAC6ACC_TypeDefinitionIndex)->GetStaticField(0xD6A0);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Single Field_2_2; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D927B6852EAC6ACC__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_2_B02B3E8B4A712563(::Struct_2_D927B6852EAC6ACC a1, ::Struct_2_D927B6852EAC6ACC a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D927B6852EAC6ACC, ::Struct_2_D927B6852EAC6ACC))((::PBYTE)hIl2Cpp + STRUCT_2_D927B6852EAC6ACC_METHOD_2_B02B3E8B4A712563_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_7CEB85D998FE3D88(::Struct_2_D927B6852EAC6ACC a1, ::Struct_2_D927B6852EAC6ACC a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D927B6852EAC6ACC, ::Struct_2_D927B6852EAC6ACC))((::PBYTE)hIl2Cpp + STRUCT_2_D927B6852EAC6ACC_METHOD_2_7CEB85D998FE3D88_OFFSET))(a1, a2);
	}
};
