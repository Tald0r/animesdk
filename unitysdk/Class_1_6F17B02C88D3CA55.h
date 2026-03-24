#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A8E24757EFB99B0.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_273;
namespace System { class String; }

#define CLASS_1_6F17B02C88D3CA55_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x9B27F40)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_606CE8C0C28E03EF_OFFSET UNITYSDK_OFFSET(0x9B28190)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_E46CEB25D409C730_OFFSET UNITYSDK_OFFSET(0x9B27FD0)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_E9A11033FF6FC2DF_1_OFFSET UNITYSDK_OFFSET(0x9B28120)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_E9A11033FF6FC2DF_OFFSET UNITYSDK_OFFSET(0x9B280B0)
#define CLASS_1_6F17B02C88D3CA55__CTOR_OFFSET UNITYSDK_OFFSET(0x9B27E10)

inline static constexpr unsigned int Class_1_6F17B02C88D3CA55_TypeDefinitionIndex = 66974;

class Class_1_6F17B02C88D3CA55 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_4; // 0x14
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::Enum_3_6A8E24757EFB99B0 Field_1_3; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_273* Method_1_E46CEB25D409C730()
	{
		return ((::Class_2_208CC9941471731A_273*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_E46CEB25D409C730_OFFSET))(this);
	}

	::System::String* Method_1_E9A11033FF6FC2DF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_E9A11033FF6FC2DF_OFFSET))(this);
	}

	::System::String* Method_1_E9A11033FF6FC2DF_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_E9A11033FF6FC2DF_1_OFFSET))(this);
	}

	::System::String* Method_1_606CE8C0C28E03EF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_606CE8C0C28E03EF_OFFSET))(this);
	}
};
