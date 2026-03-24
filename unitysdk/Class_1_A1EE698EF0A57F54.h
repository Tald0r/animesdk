#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A1EE698EF0A57F54_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0xA285880)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_10D9D5FE5370D277_OFFSET UNITYSDK_OFFSET(0xA284FD0)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_2900609BF871E051_OFFSET UNITYSDK_OFFSET(0xA285C20)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0xA285E20)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_52602057F66CDED2_OFFSET UNITYSDK_OFFSET(0xA2857E0)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA286010)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xA285100)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_FED495674D14D7AC_OFFSET UNITYSDK_OFFSET(0xA285CD0)
#define CLASS_1_A1EE698EF0A57F54__CCTOR_OFFSET UNITYSDK_OFFSET(0xA284EB0)

inline static constexpr unsigned int Class_1_A1EE698EF0A57F54_TypeDefinitionIndex = 64897;

class Class_1_A1EE698EF0A57F54 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardLight** StaticGet_Field_1_3()
	{
		return (::MoleMole::Config::ConfigHollowChessboardLight**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x2D270);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x2D278);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x2D280);
	}
	// static const ::System::Int32 Field_1_0 = 0x1F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_10D9D5FE5370D277(::MoleMole::Vector2Int a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_10D9D5FE5370D277_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_B43C848B078B3C34_OFFSET))();
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2900609BF871E051(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_2900609BF871E051_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_FED495674D14D7AC(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_FED495674D14D7AC_OFFSET))(a1);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardLight* Method_1_52602057F66CDED2()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardLight*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_52602057F66CDED2_OFFSET))();
	}
};
