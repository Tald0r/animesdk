#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8711E36030A57C8C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CBC8F25914F0EC9_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x8B76130)
#define CLASS_1_9CBC8F25914F0EC9_METHOD_1_1ECC69D55AA0CAC2_OFFSET UNITYSDK_OFFSET(0x8B76390)
#define CLASS_1_9CBC8F25914F0EC9_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x8B76020)
#define CLASS_1_9CBC8F25914F0EC9_METHOD_1_D6DF6AA2F14B7857_OFFSET UNITYSDK_OFFSET(0x8B75E00)
#define CLASS_1_9CBC8F25914F0EC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B75DF0)

inline static constexpr unsigned int Class_1_9CBC8F25914F0EC9_TypeDefinitionIndex = 46205;

class Class_1_9CBC8F25914F0EC9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_8711E36030A57C8C>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_8711E36030A57C8C>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC8F25914F0EC9_TypeDefinitionIndex)->GetStaticField(0x2BD40);
	}
	static ::MoleMole::CharacterCommonDatas** StaticGet_Field_1_0()
	{
		return (::MoleMole::CharacterCommonDatas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC8F25914F0EC9_TypeDefinitionIndex)->GetStaticField(0x2BD48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D6DF6AA2F14B7857(::System::Collections::Generic::List_1<::System::String*>* a1, ::Enum_3_8711E36030A57C8C a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::Enum_3_8711E36030A57C8C))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_METHOD_1_D6DF6AA2F14B7857_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::Enum_3_8711E36030A57C8C Method_1_1ECC69D55AA0CAC2(::System::Int32 a1)
	{
		return ((::Enum_3_8711E36030A57C8C(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_METHOD_1_1ECC69D55AA0CAC2_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
