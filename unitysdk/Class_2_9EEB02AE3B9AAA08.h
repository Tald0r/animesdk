#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_9EEB02AE3B9AAA08_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x948C220)
#define CLASS_2_9EEB02AE3B9AAA08_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x948C010)
#define CLASS_2_9EEB02AE3B9AAA08_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x948C170)
#define CLASS_2_9EEB02AE3B9AAA08_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x948C310)
#define CLASS_2_9EEB02AE3B9AAA08_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x948C2A0)
#define CLASS_2_9EEB02AE3B9AAA08__CCTOR_OFFSET UNITYSDK_OFFSET(0x948C0E0)
#define CLASS_2_9EEB02AE3B9AAA08__CTOR_OFFSET UNITYSDK_OFFSET(0x948C150)

inline static constexpr unsigned int Class_2_9EEB02AE3B9AAA08_TypeDefinitionIndex = 40118;

class Class_2_9EEB02AE3B9AAA08 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xC3; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EEB02AE3B9AAA08_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
