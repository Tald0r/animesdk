#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x99ABF50)
#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAC56230)
#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x99AC2D0)
#define CLASS_4_BF40E9C98EB3BDB2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC56050)

inline static constexpr unsigned int Class_4_BF40E9C98EB3BDB2_TypeDefinitionIndex = 37227;

class Class_4_BF40E9C98EB3BDB2 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_4; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_5; // 0x40
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_3; // 0x48
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
