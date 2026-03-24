#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C_3.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIInLevelOnlineRoleTipsWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8CB785F2EFECB918_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x822EA40)
#define CLASS_1_8CB785F2EFECB918_METHOD_1_621C14D240795B2C_OFFSET UNITYSDK_OFFSET(0x822E820)
#define CLASS_1_8CB785F2EFECB918_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x822E6F0)
#define CLASS_1_8CB785F2EFECB918_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x822E7C0)
#define CLASS_1_8CB785F2EFECB918_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x822EB70)
#define CLASS_1_8CB785F2EFECB918__CCTOR_OFFSET UNITYSDK_OFFSET(0x822E650)
#define CLASS_1_8CB785F2EFECB918__CTOR_OFFSET UNITYSDK_OFFSET(0x822E5F0)

inline static constexpr unsigned int Class_1_8CB785F2EFECB918_TypeDefinitionIndex = 76970;

class Class_1_8CB785F2EFECB918 : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::Class_1_8CB785F2EFECB918*>** StaticGet_Field_1_7()
	{
		return (::Foundation::ObjectPool_1<::Class_1_8CB785F2EFECB918*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CB785F2EFECB918_TypeDefinitionIndex)->GetStaticField(0x389C0);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x10
	::MoleMole::UIInLevelOnlineRoleTipsWidgetController* Field_1_6; // 0x18
	::Enum_3_41536F26CBEE8D4C_3 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::UInt32 Field_1_1; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Int32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_621C14D240795B2C(::System::UInt32 a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918_METHOD_1_621C14D240795B2C_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_8CB785F2EFECB918* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_8CB785F2EFECB918*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	static ::Class_1_8CB785F2EFECB918* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_8CB785F2EFECB918*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CB785F2EFECB918_METHOD_1_E4886687508BA48F_OFFSET))();
	}
};
