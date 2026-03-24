#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_47BFB43572240BC3_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x71E9620)
#define CLASS_4_47BFB43572240BC3_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x71E9340)
#define CLASS_4_47BFB43572240BC3_METHOD_4_FF5231FB835B3B95_OFFSET UNITYSDK_OFFSET(0x71E9410)
#define CLASS_4_47BFB43572240BC3__CTOR_OFFSET UNITYSDK_OFFSET(0x71E9580)

inline static constexpr unsigned int Class_4_47BFB43572240BC3_TypeDefinitionIndex = 46893;

class Class_4_47BFB43572240BC3 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47BFB43572240BC3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47BFB43572240BC3_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_FF5231FB835B3B95(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_47BFB43572240BC3_METHOD_4_FF5231FB835B3B95_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47BFB43572240BC3_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
