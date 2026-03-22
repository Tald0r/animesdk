#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_80F78ABF32D2A927_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xBAC2810)
#define CLASS_4_80F78ABF32D2A927_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBAC24E0)
#define CLASS_4_80F78ABF32D2A927_METHOD_4_C12871FE16D8148D_OFFSET UNITYSDK_OFFSET(0xBAC25B0)
#define CLASS_4_80F78ABF32D2A927__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC2770)

inline static constexpr unsigned int Class_4_80F78ABF32D2A927_TypeDefinitionIndex = 69965;

class Class_4_80F78ABF32D2A927 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_80F78ABF32D2A927__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_80F78ABF32D2A927_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_C12871FE16D8148D(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_80F78ABF32D2A927_METHOD_4_C12871FE16D8148D_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_80F78ABF32D2A927_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
