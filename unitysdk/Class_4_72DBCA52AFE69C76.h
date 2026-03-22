#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_72DBCA52AFE69C76_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD239A00)
#define CLASS_4_72DBCA52AFE69C76_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0xD2391A0)
#define CLASS_4_72DBCA52AFE69C76_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xD238F30)
#define CLASS_4_72DBCA52AFE69C76__CTOR_OFFSET UNITYSDK_OFFSET(0xD2397F0)

inline static constexpr unsigned int Class_4_72DBCA52AFE69C76_TypeDefinitionIndex = 58399;

class Class_4_72DBCA52AFE69C76 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Class_3_B537A0AA78803363* Field_4_2; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_29CA7C76C5D57032(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_METHOD_4_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
