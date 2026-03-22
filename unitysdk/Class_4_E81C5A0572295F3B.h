#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_E81C5A0572295F3B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA940350)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_3AFF44DB0F2A056A_OFFSET UNITYSDK_OFFSET(0xA93FCB0)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_8706E2EFA3F70D06_OFFSET UNITYSDK_OFFSET(0xA93FD60)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA93F9C0)
#define CLASS_4_E81C5A0572295F3B__CTOR_OFFSET UNITYSDK_OFFSET(0xA940100)

inline static constexpr unsigned int Class_4_E81C5A0572295F3B_TypeDefinitionIndex = 77902;

class Class_4_E81C5A0572295F3B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_3; // 0x28
	::Class_3_B537A0AA78803363* Field_4_4; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_1; // 0x38
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x40
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_3AFF44DB0F2A056A(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_3AFF44DB0F2A056A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_8706E2EFA3F70D06(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_8706E2EFA3F70D06_OFFSET))(this, a1);
	}
};
