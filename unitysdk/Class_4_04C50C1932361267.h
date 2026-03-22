#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_04C50C1932361267_METHOD_4_13A328D995C650EE_OFFSET UNITYSDK_OFFSET(0xAC84250)
#define CLASS_4_04C50C1932361267_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAC84570)
#define CLASS_4_04C50C1932361267_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAC84180)
#define CLASS_4_04C50C1932361267__CTOR_OFFSET UNITYSDK_OFFSET(0xAC844D0)

inline static constexpr unsigned int Class_4_04C50C1932361267_TypeDefinitionIndex = 44399;

class Class_4_04C50C1932361267 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04C50C1932361267__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04C50C1932361267_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_13A328D995C650EE(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_04C50C1932361267_METHOD_4_13A328D995C650EE_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04C50C1932361267_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
