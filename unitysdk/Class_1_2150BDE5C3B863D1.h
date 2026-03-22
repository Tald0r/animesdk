#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2150BDE5C3B863D1_METHOD_1_030485FA7A72A143_OFFSET UNITYSDK_OFFSET(0xB6C39B0)
#define CLASS_1_2150BDE5C3B863D1_METHOD_1_24E0FFE906269438_OFFSET UNITYSDK_OFFSET(0xB6C38C0)
#define CLASS_1_2150BDE5C3B863D1_METHOD_1_500839043F9D3198_OFFSET UNITYSDK_OFFSET(0xB6C3B30)
#define CLASS_1_2150BDE5C3B863D1_METHOD_1_75CEB22CF2301F8B_OFFSET UNITYSDK_OFFSET(0xB6C3D50)
#define CLASS_1_2150BDE5C3B863D1_METHOD_1_DDF81A8E697DBBCB_OFFSET UNITYSDK_OFFSET(0xB6C3F40)
#define CLASS_1_2150BDE5C3B863D1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C35A0)

inline static constexpr unsigned int Class_1_2150BDE5C3B863D1_TypeDefinitionIndex = 47684;

class Class_1_2150BDE5C3B863D1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2150BDE5C3B863D1_TypeDefinitionIndex)->GetStaticField(0x40BA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_030485FA7A72A143(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1_METHOD_1_030485FA7A72A143_OFFSET))(a1);
	}

	static ::System::String* Method_1_500839043F9D3198(::System::String* a1, ::MoleMole::Config::VideoQuality a2)
	{
		return ((::System::String*(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1_METHOD_1_500839043F9D3198_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_24E0FFE906269438(::MoleMole::Config::VideoQuality a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1_METHOD_1_24E0FFE906269438_OFFSET))(a1);
	}

	static ::System::String* Method_1_75CEB22CF2301F8B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1_METHOD_1_75CEB22CF2301F8B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DDF81A8E697DBBCB(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_2150BDE5C3B863D1_METHOD_1_DDF81A8E697DBBCB_OFFSET))(a1, a2);
	}
};
