#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_71B2D3CD944235D7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x82426C0)
#define CLASS_4_71B2D3CD944235D7_METHOD_4_58F9981DDE1DC0EF_OFFSET UNITYSDK_OFFSET(0x82423F0)
#define CLASS_4_71B2D3CD944235D7_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8242320)
#define CLASS_4_71B2D3CD944235D7__CTOR_OFFSET UNITYSDK_OFFSET(0x8242620)

inline static constexpr unsigned int Class_4_71B2D3CD944235D7_TypeDefinitionIndex = 58469;

class Class_4_71B2D3CD944235D7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_71B2D3CD944235D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_71B2D3CD944235D7_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_58F9981DDE1DC0EF(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_71B2D3CD944235D7_METHOD_4_58F9981DDE1DC0EF_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_71B2D3CD944235D7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
