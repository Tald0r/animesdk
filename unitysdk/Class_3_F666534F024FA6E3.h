#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_421EEC7165E139E4.h"

namespace System { class Exception; }
namespace System { class String; }

#define CLASS_3_F666534F024FA6E3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC4F1DA0)
#define CLASS_3_F666534F024FA6E3__CTOR_2_OFFSET UNITYSDK_OFFSET(0xC4F1E00)
#define CLASS_3_F666534F024FA6E3__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F1D40)

inline static constexpr unsigned int Class_3_F666534F024FA6E3_TypeDefinitionIndex = 67630;

class Class_3_F666534F024FA6E3 : public ::Class_2_421EEC7165E139E4
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F666534F024FA6E3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F666534F024FA6E3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_F666534F024FA6E3__CTOR_2_OFFSET))(this, a1, a2);
	}
};
