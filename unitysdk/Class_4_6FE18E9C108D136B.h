#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_4_425BBC3CBFD638A0_2;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8B1AB50)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8B1B1C0)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET UNITYSDK_OFFSET(0x8B1B050)
#define CLASS_4_6FE18E9C108D136B_METHOD_4_D7A29A2D368B3689_OFFSET UNITYSDK_OFFSET(0x8B1AD40)
#define CLASS_4_6FE18E9C108D136B__CTOR_OFFSET UNITYSDK_OFFSET(0x8B1B0D0)

inline static constexpr unsigned int Class_4_6FE18E9C108D136B_TypeDefinitionIndex = 64680;

class Class_4_6FE18E9C108D136B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_425BBC3CBFD638A0_2* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_1; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_D7A29A2D368B3689(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_D7A29A2D368B3689_OFFSET))(this, a1);
	}

	::System::Void Method_4_CC17E4B020B0F15E(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_CC17E4B020B0F15E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6FE18E9C108D136B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
