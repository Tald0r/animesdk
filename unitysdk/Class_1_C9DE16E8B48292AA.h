#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C9DE16E8B48292AA_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x994FDA0)
#define CLASS_1_C9DE16E8B48292AA_METHOD_1_3787507A676EDCE0_OFFSET UNITYSDK_OFFSET(0x994F8C0)
#define CLASS_1_C9DE16E8B48292AA_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x9950050)
#define CLASS_1_C9DE16E8B48292AA_METHOD_1_8EEAF429785182B7_OFFSET UNITYSDK_OFFSET(0x9950160)
#define CLASS_1_C9DE16E8B48292AA_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x994F830)
#define CLASS_1_C9DE16E8B48292AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x994F820)
#define CLASS_1_C9DE16E8B48292AA__CTOR_OFFSET UNITYSDK_OFFSET(0x994F810)

inline static constexpr unsigned int Class_1_C9DE16E8B48292AA_TypeDefinitionIndex = 58736;

class Class_1_C9DE16E8B48292AA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DE16E8B48292AA_TypeDefinitionIndex)->GetStaticField(0x453B0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DE16E8B48292AA_TypeDefinitionIndex)->GetStaticField(0x11130);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_3787507A676EDCE0(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>*))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_METHOD_1_3787507A676EDCE0_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8EEAF429785182B7(::System::Int32 a1, ::MoleMole::DynamicCheckTreeDataEntry& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry&))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_METHOD_1_8EEAF429785182B7_OFFSET))(a1, a2);
	}
};
