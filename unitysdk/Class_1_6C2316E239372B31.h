#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_1;
class Class_1_D0D2B3C2533F6DF2_5;

#define CLASS_1_6C2316E239372B31_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1567DEC0)
#define CLASS_1_6C2316E239372B31_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1567DAA0)
#define CLASS_1_6C2316E239372B31_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1567DB20)
#define CLASS_1_6C2316E239372B31_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x1567DF20)
#define CLASS_1_6C2316E239372B31_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1567DA20)
#define CLASS_1_6C2316E239372B31__CTOR_OFFSET UNITYSDK_OFFSET(0x1567E140)

inline static constexpr unsigned int Class_1_6C2316E239372B31_TypeDefinitionIndex = 78674;

class Class_1_6C2316E239372B31 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_5*>* Field_1_0; // 0x10
	::Class_1_D0D2B3C2533F6DF2_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6C2316E239372B31_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
