#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_337FE11AA35B1F17.h"
#include "unitysdk/Struct_2_24AC061D0BCF0A10.h"
#include "unitysdk/System/Object.h"

class Class_1_BC95CD88D4586F73;
class Class_3_1D68EAF01B840505_2;
namespace System { class String; }

#define CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x7E53600)
#define CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7E53590)
#define CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_9C3A1BA05CD0F0BD_OFFSET UNITYSDK_OFFSET(0x7E53500)
#define CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_D1DB792683EC9B47_OFFSET UNITYSDK_OFFSET(0x7E533A0)
#define CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7E53390)
#define CLASS_1_CC4CADE7B3BB1F4F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7E53310)
#define CLASS_1_CC4CADE7B3BB1F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x7E53300)

inline static constexpr unsigned int Class_1_CC4CADE7B3BB1F4F_TypeDefinitionIndex = 48551;

class Class_1_CC4CADE7B3BB1F4F : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_BC95CD88D4586F73* Field_1_9; // 0x18
	::Struct_2_24AC061D0BCF0A10 Field_1_6; // 0x20
	::System::UInt32 Field_1_3; // 0x40
	::System::UInt32 Field_1_4; // 0x44
	::System::UInt32 Field_1_5; // 0x48
	::System::UInt32 Field_1_0; // 0x4C
	::System::Boolean Field_1_7; // 0x50
	::Enum_3_337FE11AA35B1F17 Field_1_8; // 0x54
	::System::UInt32 Field_1_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_1D68EAF01B840505_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1D68EAF01B840505_2*))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_D1DB792683EC9B47(::Enum_3_337FE11AA35B1F17& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_337FE11AA35B1F17&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_D1DB792683EC9B47_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C3A1BA05CD0F0BD(::Enum_3_337FE11AA35B1F17& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_337FE11AA35B1F17&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_9C3A1BA05CD0F0BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_CC4CADE7B3BB1F4F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC4CADE7B3BB1F4F*))((::PBYTE)hIl2Cpp + CLASS_1_CC4CADE7B3BB1F4F_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
