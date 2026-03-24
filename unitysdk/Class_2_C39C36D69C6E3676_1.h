#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_C39C36D69C6E3676_1_METHOD_2_2BE5827EA04FF83A_OFFSET UNITYSDK_OFFSET(0xD681A00)
#define CLASS_2_C39C36D69C6E3676_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xD6818F0)
#define CLASS_2_C39C36D69C6E3676_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD6819A0)
#define CLASS_2_C39C36D69C6E3676_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xD681860)
#define CLASS_2_C39C36D69C6E3676_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD6818D0)

inline static constexpr unsigned int Class_2_C39C36D69C6E3676_1_TypeDefinitionIndex = 59216;

class Class_2_C39C36D69C6E3676_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x102; // 0x0
	::System::String* Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x29

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C39C36D69C6E3676_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39C36D69C6E3676_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39C36D69C6E3676_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39C36D69C6E3676_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2BE5827EA04FF83A(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C39C36D69C6E3676_1_METHOD_2_2BE5827EA04FF83A_OFFSET))(this, a1, a2, a3);
	}
};
