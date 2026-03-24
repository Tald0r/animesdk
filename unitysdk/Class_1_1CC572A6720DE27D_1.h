#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1CC572A6720DE27D_1_METHOD_1_E053C78196EC85C1_OFFSET UNITYSDK_OFFSET(0x75138F0)
#define CLASS_1_1CC572A6720DE27D_1_METHOD_1_F60E8A2EE8AA5F11_OFFSET UNITYSDK_OFFSET(0x7513A60)
#define CLASS_1_1CC572A6720DE27D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x75138E0)

inline static constexpr unsigned int Class_1_1CC572A6720DE27D_1_TypeDefinitionIndex = 57421;

class Class_1_1CC572A6720DE27D_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_1__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_E053C78196EC85C1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_1_METHOD_1_E053C78196EC85C1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F60E8A2EE8AA5F11(::System::Int32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1CC572A6720DE27D_1_METHOD_1_F60E8A2EE8AA5F11_OFFSET))(a1, a2);
	}
};
