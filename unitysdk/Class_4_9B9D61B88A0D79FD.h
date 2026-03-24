#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x96344A0)
#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9633EB0)
#define CLASS_4_9B9D61B88A0D79FD_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x9634010)
#define CLASS_4_9B9D61B88A0D79FD__CTOR_OFFSET UNITYSDK_OFFSET(0x96343F0)

inline static constexpr unsigned int Class_4_9B9D61B88A0D79FD_TypeDefinitionIndex = 70268;

class Class_4_9B9D61B88A0D79FD : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_425BBC3CBFD638A0_1* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B9D61B88A0D79FD_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
