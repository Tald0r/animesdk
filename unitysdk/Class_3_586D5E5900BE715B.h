#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61C40A7AE60889AD.h"

namespace System { class String; }

#define CLASS_3_586D5E5900BE715B_METHOD_3_131985F534A933F3_OFFSET UNITYSDK_OFFSET(0xD82C080)
#define CLASS_3_586D5E5900BE715B_METHOD_3_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0xD82C010)
#define CLASS_3_586D5E5900BE715B_METHOD_3_D0A5FD09C601F084_OFFSET UNITYSDK_OFFSET(0xD82C1C0)
#define CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET UNITYSDK_OFFSET(0xD82C1D0)
#define CLASS_3_586D5E5900BE715B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD82C110)
#define CLASS_3_586D5E5900BE715B__CTOR_OFFSET UNITYSDK_OFFSET(0xD82BF90)

inline static constexpr unsigned int Class_3_586D5E5900BE715B_TypeDefinitionIndex = 37806;

class Class_3_586D5E5900BE715B : public ::Class_2_61C40A7AE60889AD
{
public:
	static ::Class_3_586D5E5900BE715B** StaticGet_Field_3_0()
	{
		return (::Class_3_586D5E5900BE715B**)Il2CppClass::FromTypeDefinitionIndex(Class_3_586D5E5900BE715B_TypeDefinitionIndex)->GetStaticField(0x32930);
	}
	::System::Double Field_3_1; // 0xA0

	::System::Void _ctor(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B__CCTOR_OFFSET))();
	}

	::System::Double Method_3_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_284A00008B880FD6_OFFSET))(this);
	}

	::System::String* Method_3_131985F534A933F3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_131985F534A933F3_OFFSET))(this);
	}

	::System::String* Method_3_D0A5FD09C601F084()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_D0A5FD09C601F084_OFFSET))(this);
	}

	::System::Double Method_3_DE8D974FFB2F8E0B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET))(this);
	}
};
