#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_2;
class Class_1_D0D2B3C2533F6DF2_3;

#define CLASS_1_635DF799AC24C948_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8B4F3A0)
#define CLASS_1_635DF799AC24C948_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8B4EF80)
#define CLASS_1_635DF799AC24C948_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x8B4F000)
#define CLASS_1_635DF799AC24C948_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x8B4F400)
#define CLASS_1_635DF799AC24C948_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x8B4EF00)
#define CLASS_1_635DF799AC24C948__CTOR_OFFSET UNITYSDK_OFFSET(0x8B4F620)

inline static constexpr unsigned int Class_1_635DF799AC24C948_TypeDefinitionIndex = 53274;

class Class_1_635DF799AC24C948 : public ::System::Object
{
public:
	::Class_1_D0D2B3C2533F6DF2_2* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_3*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_635DF799AC24C948_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}
};
