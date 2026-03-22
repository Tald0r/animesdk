#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_421EEC7165E139E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA952FF0)
#define CLASS_2_421EEC7165E139E4__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA953050)
#define CLASS_2_421EEC7165E139E4__CTOR_OFFSET UNITYSDK_OFFSET(0xA952F90)

inline static constexpr unsigned int Class_2_421EEC7165E139E4_TypeDefinitionIndex = 41586;

class Class_2_421EEC7165E139E4 : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4__CTOR_2_OFFSET))(this, a1, a2);
	}
};
