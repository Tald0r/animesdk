#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9F2665BC84334096_METHOD_1_98CFEFB2F08EDFB2_OFFSET UNITYSDK_OFFSET(0x1B1B5320)
#define CLASS_1_9F2665BC84334096__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5310)

inline static constexpr unsigned int Class_1_9F2665BC84334096_TypeDefinitionIndex = 25922;

class Class_1_9F2665BC84334096 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2665BC84334096__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_98CFEFB2F08EDFB2(::System::Boolean a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9F2665BC84334096_METHOD_1_98CFEFB2F08EDFB2_OFFSET))(a1, a2, a3);
	}
};
