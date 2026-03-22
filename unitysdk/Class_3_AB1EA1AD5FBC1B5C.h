#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x819F0E0)
#define CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_9EC823C358D831A9_OFFSET UNITYSDK_OFFSET(0x819F2C0)
#define CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x819F4E0)
#define CLASS_3_AB1EA1AD5FBC1B5C__CTOR_OFFSET UNITYSDK_OFFSET(0x819F3C0)

inline static constexpr unsigned int Class_3_AB1EA1AD5FBC1B5C_TypeDefinitionIndex = 40330;

class Class_3_AB1EA1AD5FBC1B5C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int64>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::Int64>* Field_3_0; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Int64>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB1EA1AD5FBC1B5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_9EC823C358D831A9(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_9EC823C358D831A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB1EA1AD5FBC1B5C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
