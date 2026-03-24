#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInteractEntry; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DA734EA3AAF759A_METHOD_1_07A3F9387575E567_OFFSET UNITYSDK_OFFSET(0x708FCB0)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_234F150817FE3711_OFFSET UNITYSDK_OFFSET(0x7090490)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x708FC50)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x708FDE0)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_8205C3864938ED11_OFFSET UNITYSDK_OFFSET(0x708FEC0)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_F7B93131627B19CF_OFFSET UNITYSDK_OFFSET(0x708FFD0)
#define CLASS_1_1DA734EA3AAF759A_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x708FBC0)
#define CLASS_1_1DA734EA3AAF759A__CCTOR_OFFSET UNITYSDK_OFFSET(0x708FBB0)

inline static constexpr unsigned int Class_1_1DA734EA3AAF759A_TypeDefinitionIndex = 61078;

class Class_1_1DA734EA3AAF759A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DA734EA3AAF759A_TypeDefinitionIndex)->GetStaticField(0x36470);
	}
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DA734EA3AAF759A_TypeDefinitionIndex)->GetStaticField(0x36478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::MoleMole::Config::InteractEntry* Method_1_07A3F9387575E567(::System::String* a1)
	{
		return ((::MoleMole::Config::InteractEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_07A3F9387575E567_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}

	static ::System::Void Method_1_8205C3864938ED11(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_8205C3864938ED11_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_234F150817FE3711(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_234F150817FE3711_OFFSET))(a1);
	}

	static ::System::Void Method_1_F7B93131627B19CF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_METHOD_1_F7B93131627B19CF_OFFSET))(a1, a2);
	}
};
