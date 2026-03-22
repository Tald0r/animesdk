#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_0EBB1032A5D8FACA_METHOD_4_07EFC4E4799D9944_OFFSET UNITYSDK_OFFSET(0xAAE7FB0)
#define CLASS_4_0EBB1032A5D8FACA_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAAE7DC0)
#define CLASS_4_0EBB1032A5D8FACA_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAAE83E0)
#define CLASS_4_0EBB1032A5D8FACA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE82E0)

inline static constexpr unsigned int Class_4_0EBB1032A5D8FACA_TypeDefinitionIndex = 43238;

class Class_4_0EBB1032A5D8FACA : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_425BBC3CBFD638A0_1* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x30
	::Class_4_AF61EEC11F34483C<::System::String*>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0EBB1032A5D8FACA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0EBB1032A5D8FACA_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_07EFC4E4799D9944(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_0EBB1032A5D8FACA_METHOD_4_07EFC4E4799D9944_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0EBB1032A5D8FACA_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
