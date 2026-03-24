#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"

class Class_1_E4DCFD174698F990;
class Class_3_3EC97B498E0B85D2;
class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_4F96EC237B5215A7_METHOD_4_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x6765500)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6765AA0)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x67650C0)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x6764C60)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x6765AB0)
#define CLASS_4_4F96EC237B5215A7_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x6764DD0)
#define CLASS_4_4F96EC237B5215A7__CTOR_OFFSET UNITYSDK_OFFSET(0x6765820)

inline static constexpr unsigned int Class_4_4F96EC237B5215A7_TypeDefinitionIndex = 67004;

class Class_4_4F96EC237B5215A7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_4_9; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x58
	::Class_3_B537A0AA78803363* Field_4_4; // 0x60
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x68
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_2; // 0x70
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x78
	::Struct_2_FE9BD044832BC9C3 Field_4_10; // 0x80
	::Struct_2_FE667B282E242C72 Field_4_7; // 0xB0
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_4_5; // 0xD8
	::System::Boolean Field_4_8; // 0xE0
	::System::Int32 Field_4_6; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B7E3C3DAFBD8F4B2(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_1B8139AE71A3FDE1(::Class_3_3EC97B498E0B85D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + CLASS_4_4F96EC237B5215A7_METHOD_4_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}
};
