#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_277F99B3E754A6A7;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8D6ACF0)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x8D6A620)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x8D6A220)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_AA37E1BCEDA13215_OFFSET UNITYSDK_OFFSET(0x8D6AD00)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_DDFA3779482357B4_OFFSET UNITYSDK_OFFSET(0x8D6AB30)
#define CLASS_4_104A9E7C6E50A6F5_METHOD_4_FEF7761FC877F0EE_OFFSET UNITYSDK_OFFSET(0x8D6A6B0)
#define CLASS_4_104A9E7C6E50A6F5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6A870)

inline static constexpr unsigned int Class_4_104A9E7C6E50A6F5_TypeDefinitionIndex = 63635;

class Class_4_104A9E7C6E50A6F5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_6; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_4; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_2; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_3; // 0x40
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x48
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x50
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::Class_1_277F99B3E754A6A7* Method_4_DDFA3779482357B4(::Struct_2_FE667B282E242C72& a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::Class_1_277F99B3E754A6A7*(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_DDFA3779482357B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_AA37E1BCEDA13215(::Class_1_277F99B3E754A6A7* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_277F99B3E754A6A7*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_AA37E1BCEDA13215_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_FEF7761FC877F0EE(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_104A9E7C6E50A6F5_METHOD_4_FEF7761FC877F0EE_OFFSET))(this, a1);
	}
};
