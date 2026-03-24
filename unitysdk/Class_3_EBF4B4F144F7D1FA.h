#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_EBF4B4F144F7D1FA_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x9043390)
#define CLASS_3_EBF4B4F144F7D1FA_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x9043700)
#define CLASS_3_EBF4B4F144F7D1FA_METHOD_3_667279DBE105F9CF_OFFSET UNITYSDK_OFFSET(0x9043790)
#define CLASS_3_EBF4B4F144F7D1FA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9043D30)
#define CLASS_3_EBF4B4F144F7D1FA__CTOR_OFFSET UNITYSDK_OFFSET(0x9043B50)

inline static constexpr unsigned int Class_3_EBF4B4F144F7D1FA_TypeDefinitionIndex = 61055;

class Class_3_EBF4B4F144F7D1FA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_4; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBF4B4F144F7D1FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBF4B4F144F7D1FA_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_EBF4B4F144F7D1FA_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_667279DBE105F9CF(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_EBF4B4F144F7D1FA_METHOD_3_667279DBE105F9CF_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBF4B4F144F7D1FA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
