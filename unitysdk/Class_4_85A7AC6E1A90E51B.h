#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1567F0C0)
#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x1567E920)
#define CLASS_4_85A7AC6E1A90E51B_METHOD_4_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1567E420)
#define CLASS_4_85A7AC6E1A90E51B__CTOR_OFFSET UNITYSDK_OFFSET(0x1567EE30)

inline static constexpr unsigned int Class_4_85A7AC6E1A90E51B_TypeDefinitionIndex = 37721;

class Class_4_85A7AC6E1A90E51B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_6; // 0x28
	::Class_4_179456445C225AB4<::System::Single>* Field_4_7; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_4; // 0x38
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_1; // 0x40
	::Class_4_179456445C225AB4<::System::Single>* Field_4_8; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x50
	::Class_4_179456445C225AB4<::System::String*>* Field_4_2; // 0x58
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_5; // 0x60
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_85A7AC6E1A90E51B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
